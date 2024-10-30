# Variables
CXX        := g++
SRC_DIR    := src
TARGET     := inventory_app  # Ejecutable en el directorio raíz

# Archivos fuente y objetos
# Encuentra todos los archivos .cpp en src y sus subdirectorios
SRC_FILES  := $(shell find $(SRC_DIR) -name "*.cpp")
# Cambia la extensión de .cpp a .o para crear la lista de archivos objeto en los mismos directorios
OBJ_FILES  := $(SRC_FILES:.cpp=.o)

# Flags de compilación
CXXFLAGS   := -O2 -Wall -Wextra
LDFLAGS    :=

# Regla principal
all: $(TARGET)

# Regla para el ejecutable
$(TARGET): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $@ $(LDFLAGS)

# Regla para compilar archivos fuente a objetos
# Compila cada archivo .cpp en src/ y guarda el .o en el mismo lugar
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(SRC_DIR)/**/*.o $(SRC_DIR)/*.o $(TARGET)

# Ejecuta la compilación en paralelo (usa "make -jN" para controlar el número de tareas)
.PHONY: all clean
