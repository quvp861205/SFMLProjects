EJEMPLO
COMO USAR SENO Y COSENO PARA MARCAR DIRECCION DE UN OBJETO Y REALIZAR MOVIMIENTOS CIRCULARES

INSTALACION:

download CODEBLOCK: http://www.codeblocks.org/downloads/binaries
download SFML: https://www.sfml-dev.org/download/sfml/2.4.2/
version: GCC 4.9.2 TDM (SJLJ) - 32-bit
uncompress: c:\SFMLtdm

Open codeblocks and create a new project with console options.
Settings -> Compiler
    Toolchain executables
        Additional Paths
            C:\SFMLtdm\bin

    Search directories
        Compiler
            C:\SFMLtdm\include
        Linker
            C:\SFMLtdm\lib

    Linker settings
        sfml-graphics
        sfml-window
        sfml-system

    Compiler settings
        #defines
            SFML_STATIC