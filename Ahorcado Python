def jugar_ahorcado():
    palabra = input("Ingrese la palabra para que adivinen: ").lower()
    letras_adivinadas = set()
    intentos = 0
    palabra_adivinada = "_" * len(palabra)

    while "_" in palabra_adivinada:
        letra = input("Ingrese una letra para adivinar la palabra: ").lower()

        if letra in letras_adivinadas:
            print("Ya has intentado con esa letra. Prueba otra.")
            continue

        letras_adivinadas.add(letra)

        if letra in palabra:
            print("¡Correcto!")
            for i in range(len(palabra)):
                if palabra[i] == letra:
                    palabra_adivinada = palabra_adivinada[:i] + letra + palabra_adivinada[i + 1:]
            print("Palabra actual: " + palabra_adivinada)
        else:
            intentos += 1
            print("Incorrecto. Intentos restantes:", 6 - intentos)

        if intentos == 6:
            print("Has agotado tus intentos. La palabra era:", palabra)
            break

    if "_" not in palabra_adivinada:
        print("¡Felicidades! Has adivinado la palabra:", palabra)

jugar_ahorcado()
