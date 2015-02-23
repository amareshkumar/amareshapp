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
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include amareshapp-Makefile.mk

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/184637050/Cats.o \
	${OBJECTDIR}/_ext/184637050/Instrument.o \
	${OBJECTDIR}/_ext/184637050/MyApplication.o \
	${OBJECTDIR}/_ext/184637050/My_Threads.o \
	${OBJECTDIR}/_ext/184637050/OOPs.o \
	${OBJECTDIR}/_ext/184637050/Queue.o \
	${OBJECTDIR}/_ext/184637050/Smart_Pointers.o \
	${OBJECTDIR}/_ext/184637050/Stack.o \
	${OBJECTDIR}/_ext/184637050/ThrustActivities.o \
	${OBJECTDIR}/_ext/184637050/array.o \
	${OBJECTDIR}/_ext/184637050/d_linked_list.o \
	${OBJECTDIR}/_ext/184637050/gc.o \
	${OBJECTDIR}/_ext/184637050/graph.o \
	${OBJECTDIR}/_ext/184637050/linked_list.o \
	${OBJECTDIR}/_ext/184637050/main.o \
	${OBJECTDIR}/_ext/184637050/my_bolt.o \
	${OBJECTDIR}/_ext/184637050/my_utilities.o \
	${OBJECTDIR}/_ext/184637050/polymorphic_activiites.o \
	${OBJECTDIR}/_ext/184637050/programming.o \
	${OBJECTDIR}/_ext/184637050/reversal.o \
	${OBJECTDIR}/_ext/184637050/sorting.o \
	${OBJECTDIR}/_ext/184637050/test_my_project.o \
	${OBJECTDIR}/_ext/184637050/tree.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/184637050/Cats.o: /cygdrive/D/code/amareshapp/amareshapp/Cats.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/Cats.o /cygdrive/D/code/amareshapp/amareshapp/Cats.cpp

${OBJECTDIR}/_ext/184637050/Instrument.o: /cygdrive/D/code/amareshapp/amareshapp/Instrument.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/Instrument.o /cygdrive/D/code/amareshapp/amareshapp/Instrument.cpp

${OBJECTDIR}/_ext/184637050/MyApplication.o: /cygdrive/D/code/amareshapp/amareshapp/MyApplication.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/MyApplication.o /cygdrive/D/code/amareshapp/amareshapp/MyApplication.cpp

${OBJECTDIR}/_ext/184637050/My_Threads.o: /cygdrive/D/code/amareshapp/amareshapp/My_Threads.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/My_Threads.o /cygdrive/D/code/amareshapp/amareshapp/My_Threads.cpp

${OBJECTDIR}/_ext/184637050/OOPs.o: /cygdrive/D/code/amareshapp/amareshapp/OOPs.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/OOPs.o /cygdrive/D/code/amareshapp/amareshapp/OOPs.cpp

${OBJECTDIR}/_ext/184637050/Queue.o: /cygdrive/D/code/amareshapp/amareshapp/Queue.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/Queue.o /cygdrive/D/code/amareshapp/amareshapp/Queue.cpp

${OBJECTDIR}/_ext/184637050/Smart_Pointers.o: /cygdrive/D/code/amareshapp/amareshapp/Smart_Pointers.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/Smart_Pointers.o /cygdrive/D/code/amareshapp/amareshapp/Smart_Pointers.cpp

${OBJECTDIR}/_ext/184637050/Stack.o: /cygdrive/D/code/amareshapp/amareshapp/Stack.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/Stack.o /cygdrive/D/code/amareshapp/amareshapp/Stack.cpp

${OBJECTDIR}/_ext/184637050/ThrustActivities.o: /cygdrive/D/code/amareshapp/amareshapp/ThrustActivities.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/ThrustActivities.o /cygdrive/D/code/amareshapp/amareshapp/ThrustActivities.cpp

${OBJECTDIR}/_ext/184637050/array.o: /cygdrive/D/code/amareshapp/amareshapp/array.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/array.o /cygdrive/D/code/amareshapp/amareshapp/array.cpp

${OBJECTDIR}/_ext/184637050/d_linked_list.o: /cygdrive/D/code/amareshapp/amareshapp/d_linked_list.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/d_linked_list.o /cygdrive/D/code/amareshapp/amareshapp/d_linked_list.cpp

${OBJECTDIR}/_ext/184637050/gc.o: /cygdrive/D/code/amareshapp/amareshapp/gc.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/gc.o /cygdrive/D/code/amareshapp/amareshapp/gc.cpp

${OBJECTDIR}/_ext/184637050/graph.o: /cygdrive/D/code/amareshapp/amareshapp/graph.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/graph.o /cygdrive/D/code/amareshapp/amareshapp/graph.cpp

${OBJECTDIR}/_ext/184637050/linked_list.o: /cygdrive/D/code/amareshapp/amareshapp/linked_list.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/linked_list.o /cygdrive/D/code/amareshapp/amareshapp/linked_list.cpp

${OBJECTDIR}/_ext/184637050/main.o: /cygdrive/D/code/amareshapp/amareshapp/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/main.o /cygdrive/D/code/amareshapp/amareshapp/main.cpp

${OBJECTDIR}/_ext/184637050/my_bolt.o: /cygdrive/D/code/amareshapp/amareshapp/my_bolt.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/my_bolt.o /cygdrive/D/code/amareshapp/amareshapp/my_bolt.cpp

${OBJECTDIR}/_ext/184637050/my_utilities.o: /cygdrive/D/code/amareshapp/amareshapp/my_utilities.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/my_utilities.o /cygdrive/D/code/amareshapp/amareshapp/my_utilities.cpp

${OBJECTDIR}/_ext/184637050/polymorphic_activiites.o: /cygdrive/D/code/amareshapp/amareshapp/polymorphic_activiites.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/polymorphic_activiites.o /cygdrive/D/code/amareshapp/amareshapp/polymorphic_activiites.cpp

${OBJECTDIR}/_ext/184637050/programming.o: /cygdrive/D/code/amareshapp/amareshapp/programming.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/programming.o /cygdrive/D/code/amareshapp/amareshapp/programming.cpp

${OBJECTDIR}/_ext/184637050/reversal.o: /cygdrive/D/code/amareshapp/amareshapp/reversal.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/reversal.o /cygdrive/D/code/amareshapp/amareshapp/reversal.cpp

${OBJECTDIR}/_ext/184637050/sorting.o: /cygdrive/D/code/amareshapp/amareshapp/sorting.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/sorting.o /cygdrive/D/code/amareshapp/amareshapp/sorting.cpp

${OBJECTDIR}/_ext/184637050/test_my_project.o: /cygdrive/D/code/amareshapp/amareshapp/test_my_project.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/test_my_project.o /cygdrive/D/code/amareshapp/amareshapp/test_my_project.cpp

${OBJECTDIR}/_ext/184637050/tree.o: /cygdrive/D/code/amareshapp/amareshapp/tree.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/184637050
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/184637050/tree.o /cygdrive/D/code/amareshapp/amareshapp/tree.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/amareshapp.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
