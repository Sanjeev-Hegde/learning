
class Structure() {
    infix fun createPyramid(rows: Int) {
        var k = 0;
        for (i in 1..rows) {
            k = 0
            for (space in 1..rows - i) {
                print("  ")
            }
            while (k != 2 * i - 1) {
                print("* ")
                ++k
            }
            println()
        }
    }

}
fun displayStars(character: Char = '*', length: Int = 15) {
    for (i in 1..length) {
        print(character)
    }
}

fun main(args: Array<String>){
    var p: Structure = Structure();
    p createPyramid 5;
    displayStars(length=8);
}