set_source_files_properties(
	pizca_de_seudocodigo.cpp
	#caso1_const.cpp
	#caso1_no_const.cpp
	#caso1_puntero.cpp
	#caso2_uref.cpp
	#caso3_pase_por_valor.cpp
	#regla_de_decaimiento_de_arreglo-a-puntero.cpp
	#arreglos_por_valor.cpp
	#arreglos_por_referencia.cpp
	#regla_de_decaimiento_de_funcion-a-puntero.cpp
	#deducir_numero_de_elementos_en_arreglo.cpp
	#equivalencia_entre_parametros_arreglo_y_puntero.cpp
	PROPERTIES COMPILE_FLAGS -std=c++11
)

add_executable(pizca_de_seudocodigo pizca_de_seudocodigo.cpp)
#add_executable(caso1_const caso1_const.cpp)
#add_executable(caso1_no_const caso1_no_const.cpp)
#add_executable(caso1_puntero caso1_puntero.cpp)
#add_executable(caso2_uref caso2_uref.cpp)
#add_executable(caso3_pase_por_valor caso3_pase_por_valor.cpp)
#add_executable(regla_de_decaimiento_de_arreglo-a-puntero regla_de_decaimiento_de_arreglo-a-puntero.cpp)
#add_executable(arreglos_por_valor arreglos_por_valor.cpp)
#add_executable(arreglos_por_referencia arreglos_por_referencia.cpp)
#add_executable(regla_de_decaimiento_de_funcion-a-puntero regla_de_decaimiento_de_funcion-a-puntero.cpp)

#add_library(item01
#	deducir_numero_de_elementos_en_arreglo.cpp
#	equivalencia_entre_parametros_arreglo_y_puntero.cpp)

