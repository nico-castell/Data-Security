# Create libraries
add_library(
	modifiers STATIC
	"modifiers.h"
	"modifiers.cpp"
)

add_library(
	key STATIC
	"key.h"
	"key.cpp"
)

# Create executable and link libraries
add_executable("${OBF}" "Program.cpp")
target_link_libraries(
	"${OBF}" PRIVATE
	modifiers
	key
)
