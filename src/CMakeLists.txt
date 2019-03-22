# la explicación de esta cosa tan rara está aquí
# https://cmake.org/pipermail/cmake/2010-July/037922.html

# el asunto clave es que cada add_subdirectory crea su propio
# scope para las variables. Pero: lo que no entiendo aquí es por qué
# coño ponemos fuentes_SRCS SIN ${} si realmetne entiendo que
# se está refiriendo a la variable q viene del CMaKelists principal. 

list(APPEND fuentes_SRCS
  ${CMAKE_CURRENT_LIST_DIR}/gui/general.cpp

  ${CMAKE_CURRENT_LIST_DIR}/gui/general.ui
)

# luego con esto de PARENT_SCOPE lo que hacemos es modificar
# la variable del scope principal...
set(fuentes_SRCS ${fuentes_SRCS} PARENT_SCOPE)


