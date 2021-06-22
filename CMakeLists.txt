cmake_minimum_required(VERSION 3.16.0)

# Projects and version
set(VERS 1.0.0)
set(ENC "passcrypt")
set(GEN "passgen")
set(OBF "passobfuscate")

message(STATUS "Configuring solution version ${VERS}")

# Encrypter project
project("${ENC}" VERSION "${VERS}")
add_executable("${ENC}" "Encrypter/Program.cpp")

# Generator project
project("${GEN}" VERSION "${VERS}")
add_executable("${GEN}" "Generator/Program.cpp")

# Obfuscator project
project("${OBF}" VERSION "${VERS}")
add_executable(
	"${OBF}"
	Obfuscator/Program.cpp
	Obfuscator/modifiers.cpp
	Obfuscator/key.cpp
)

# Use more warnings
if (MSVC)
	foreach(proj "${ENC}" "${GEN}" "${OBF}")
		target_compile_options(
			"${proj}" BEFORE
			PUBLIC /W4
		)
	endforeach()
else()
	foreach(proj "${ENC}" "${GEN}" "${OBF}")
		target_compile_options(
			"${proj}" BEFORE
			PUBLIC -Wall -Wextra
		)
	endforeach()
endif()

# Add install option
foreach(i "${ENC}" "${GEN}" "${OBF}")
	install(
		TARGETS "${i}" RUNTIME
		DESTINATION bin
	)
endforeach()
