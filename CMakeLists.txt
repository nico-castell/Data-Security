cmake_minimum_required(VERSION 3.20.1)

# Projects and version
set(VERS 1.0.0)
set(BIN "binme")
set(ENC "passcrypt")
set(GEN "passgen")
# set(OBF "passobfuscate"

message("Configuring solution version ${VERS}")

# Add projects
project("${BIN}" VERSION "${VERS}")
add_subdirectory("Binary")
project("${ENC}" VERSION "${VERS}")
add_subdirectory("Encrypter")
project("${GEN}" VERSION "${VERS}")
add_subdirectory("Generator")
# project("${OBF}" VERSION "${VERS}")
# add_subdirectory("Obfuscator")
