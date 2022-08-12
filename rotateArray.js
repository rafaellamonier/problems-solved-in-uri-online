function rotateArray(array, d) {
	let len = array.length
	let arrayTemp = []
	let indexArrayD = 0
	let k = 0


	// achar o index do número escolhido para começar a girar o array
	for (let i = 0; i < len; i++) {
		if (array[i] === d) {
			indexArrayD = i
		}
	}

	// preenchendo o array temporário,
	// começando com o indice depois do elemento escolhido.
	for (let i = d; i < len; i++) {
		arrayTemp[k] = array[i]
		k++
	}

	for (let i = 0; i < d; i++) {
		arrayTemp[k] = array[i]
		k++
	}

	for (let i = 0; i < len; i++) {
		array[i] = arrayTemp[i]
	}

	return array
}

// teste 
let array = [1, 2, 3, 4, 5, 6, 7]
let d = 2
let arrayRotated = rotateArray(array, d)
console.log(arrayRotated)
