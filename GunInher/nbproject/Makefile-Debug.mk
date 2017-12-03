#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Gun/Revolver.o \
	${OBJECTDIR}/Gun/HandGun.o \
	${OBJECTDIR}/Gun/Pistol.o \
	${OBJECTDIR}/Gun/Gun.o \
	${OBJECTDIR}/GunInherMain.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/guninher

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/guninher: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/guninher ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/Gun/Revolver.o: Gun/Revolver.cpp 
	${MKDIR} -p ${OBJECTDIR}/Gun
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Gun/Revolver.o Gun/Revolver.cpp

${OBJECTDIR}/Gun/HandGun.o: Gun/HandGun.cpp 
	${MKDIR} -p ${OBJECTDIR}/Gun
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Gun/HandGun.o Gun/HandGun.cpp

${OBJECTDIR}/Gun/Pistol.o: Gun/Pistol.cpp 
	${MKDIR} -p ${OBJECTDIR}/Gun
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Gun/Pistol.o Gun/Pistol.cpp

${OBJECTDIR}/Gun/Gun.o: Gun/Gun.cpp 
	${MKDIR} -p ${OBJECTDIR}/Gun
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Gun/Gun.o Gun/Gun.cpp

${OBJECTDIR}/GunInherMain.o: GunInherMain.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/GunInherMain.o GunInherMain.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/guninher

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
