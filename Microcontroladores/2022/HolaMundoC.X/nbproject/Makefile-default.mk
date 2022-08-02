#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=null
DEBUGGABLE_SUFFIX=null
FINAL_IMAGE=${DISTDIR}/HolaMundoC.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=null
DEBUGGABLE_SUFFIX=null
FINAL_IMAGE=${DISTDIR}/HolaMundoC.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=Main.c uart.c adc.c I2C.c LCD_i2c.c EMC1001.c teclado.c interrupt.c EEPROM_lib.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}
POSSIBLE_DEPFILES=${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C}.d ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}.d

# Object Files
OBJECTFILES=${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C} ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}

# Source Files
SOURCEFILES=Main.c uart.c adc.c I2C.c LCD_i2c.c EMC1001.c teclado.c interrupt.c EEPROM_lib.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

# The following macros may be used in the pre and post step lines
_/_=\\
ShExtension=.bat
Device=PIC16F18855
ProjectDir="D:\OneDriveTrabajo\Clases\GitHub_Clases\Micros\2022\HolaMundoC.X"
ProjectName=HolaMundoC
ConfName=default
ImagePath="${DISTDIR}\HolaMundoC.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}"
ImageDir="${DISTDIR}"
ImageName="HolaMundoC.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}"
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IsDebug="true"
else
IsDebug="false"
endif

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk ${DISTDIR}/HolaMundoC.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
	@echo "--------------------------------------"
	@echo "User defined post-build step: [cp ${ImagePath} X:/]"
	@cp ${ImagePath} X:/
	@echo "--------------------------------------"

MP_PROCESSOR_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C}: Main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    Main.c 
	
${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C}: uart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    uart.c 
	
${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C}: adc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    adc.c 
	
${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C}: I2C.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    I2C.c 
	
${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C}: LCD_i2c.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    LCD_i2c.c 
	
${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C}: EMC1001.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    EMC1001.c 
	
${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C}: teclado.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    teclado.c 
	
${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C}: interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    interrupt.c 
	
${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}: EEPROM_lib.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C} 
	 -D__DEBUG=1    -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    EEPROM_lib.c 
	
else
${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C}: Main.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/Main.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    Main.c 
	
${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C}: uart.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/uart.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    uart.c 
	
${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C}: adc.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/adc.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    adc.c 
	
${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C}: I2C.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/I2C.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    I2C.c 
	
${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C}: LCD_i2c.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/LCD_i2c.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    LCD_i2c.c 
	
${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C}: EMC1001.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/EMC1001.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    EMC1001.c 
	
${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C}: teclado.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/teclado.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    teclado.c 
	
${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C}: interrupt.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/interrupt.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    interrupt.c 
	
${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}: EEPROM_lib.c  nbproject/Makefile-${CND_CONF}.mk 
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C}.d 
	@${RM} ${OBJECTDIR}/EEPROM_lib.${OUTPUT_EXTENSION_C} 
	   -fno-short-double -fno-short-float ${code-model-external.prefix}wordwrite ${optimization-options.prefix}${disable-optimizations.true} ${what-to-do.prefix}ignore ${preprocess-assembler.trueemission} -N255 ${warn-level.prefix}-3 ${asmlist.true} -D=$(CND_CONF)  ${linker-report-options.prefix}-psect${linker-report-options.separator}-class${linker-report-options.separator}+mem${linker-report-options.separator}-hex${linker-report-options.separator}-file ${ld-extra.prefix}${ld-extra.false} ${linker-runtime-options.prefix}+clear${linker-runtime-options.separator}${initialize-data.true}${linker-runtime-options.separator}${keep-generated-startup.as.false}${linker-runtime-options.separator}${opt-xc8-linker-link_startup.false}${linker-runtime-options.separator}${calibrate-oscillator.false}${linker-runtime-options.separator}${backup-reset-condition-flags.false}${linker-runtime-options.separator}${format-hex-file-for-download.false}${linker-runtime-options.separator}${managed-stack.false}${linker-runtime-options.separator}${program-the-device-with-default-config-words.true}${linker-runtime-options.separator}-plib $(COMPARISON_BUILD)  --output=-mcof,+elf:multilocs ${stack-options.prefix}compiled    EEPROM_lib.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
