library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

Entity Display7Seg is port(
A: in bit;
B: in bit;
C: in bit;
D: in bit;
E: in bit;
f1: out bit;
f2: out bit;
f3: out bit;
f4: out bit;
f5: out bit;
f6: out bit;
f7: out bit);
end Display7Seg;


Architecture segmentos of Display7Seg is
begin
	
	f1 <= (A AND NOT(C) AND NOT(E)) OR (A AND NOT(B) AND D) OR (A AND NOT(B) AND C AND E) OR (A AND C AND D) OR (A AND B AND NOT(E)) OR (A AND B AND NOT(C) AND NOT(D));
	f2 <= (A AND B AND NOT(D) AND E) OR (A AND NOT(C) AND NOT(E)) OR (A AND NOT(B) AND NOT(D) AND NOT(E)) OR (A AND NOT(B) AND D AND E) OR (A AND NOT(B) AND NOT(C));
	f3 <= (A AND NOT(D) AND E) OR (A AND NOT(B) AND C) OR (A AND B AND NOT(C)) OR (A AND NOT(B) AND NOT(D)) OR (A AND NOT(B) AND E);
	f4 <= (A AND C AND NOT(D) AND E) OR (A AND NOT(C) AND D AND E) OR (A AND C AND D AND NOT(E)) OR (A AND B AND NOT(D)) OR (A AND NOT(B) AND NOT(C) AND NOT(E));
	f5 <= (A AND NOT(C) AND NOT(E)) OR (A AND D AND NOT(E)) OR (A AND B AND D) OR (A AND B AND C);
	f6 <= (A AND NOT(D) AND NOT(E)) OR (A AND C AND NOT(E)) OR (A AND NOT(B) AND C AND NOT(D)) OR (A AND B AND NOT(C)) OR (A AND B AND D);
	f7 <= (A AND NOT(C) AND D) OR (A AND B AND NOT(C)) OR (A AND B AND E) OR (A AND D AND NOT(E)) OR (A AND NOT(B) AND C AND NOT(D));

	
end segmentos;