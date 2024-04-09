#include "conclusion2.c"
struct dict
{
  char key;
  int value;
};

int main()
{
  struct dict dictionary[] = {
      {'0', 0}, {'1', 1}, {'2', 2}}; //, {'3', 3},{'4', 4}, {'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'a', 10}, {'b', 11}, {'c', 12}, {'d', 13}, {'e', 14}, {'f', 15}, {'g', 16}, {'h', 17}, {'i', 18}, {'j', 19}, {'k', 20}, {'l', 21}, {'m', 22}, {'n', 23}, {'o', 24}, {'p', 25}, {'q', 26}, {'r', 27}, {'s', 28}, {'t', 29}, {'u', 30}, {'v', 31}, {'w', 32}, {'x', 33}, {'y', 34}, {'z', 35}, {'A', 36}, {'B', 37}, {'C', 38}, {'D', 39}, {'E', 40}, {'F', 41}, {'G', 42}, {'H', 43}, {'I', 44}, {'J', 45}, {'K', 46}, {'L', 47}, {'M', 48}, {'N', 49}, {'O', 50}, {'P', 51}, {'Q', 52}, {'R', 53}, {'S', 54}, {'T', 55}, {'U', 56}, {'V', 57}, {'W', 58}, {'X', 59}, {'Y', 60}, {'Z', 61}, {' ', 62}, {'.', 63}, {'\'', 64}, {'\\', 65}, {',', 66}, {';', 67}, {'`', 68}, {'-', 69}, {'=', 70}, {'[', 71}, {']', 72}, {'!', 73}, {'@', 74}, {'#', 75}, {'$', 76}, {'%', 77}, {'^', 78}, {'&', 79}, {'*', 80}, {':', 81}, {'(', 82}, {')', 83}, {'_', 84}, {'+', 85}, {'{', 86}, {'}', 87}, {'|', 88}, {'/', 89}, {'?', 90}, {'~', 91}, {'<', 92}, {'>', 93}, {'\"', 94}, {'№', 95}, {'а', 96}, {'б', 97}, {'в', 98}, {'г', 99}, {'д', 100}, {'е', 101}, {'ё', 102}, {'ж', 103}, {'з', 104}, {'и', 105}, {'й', 106}, {'к', 107}, {'л', 108}, {'м', 109}, {'н', 110}, {'о', 111}, {'п', 112}, {'р', 113}, {'с', 114}, {'т', 115}, {'у', 116}, {'ф', 117}, {'х', 118}, {'ц', 119}, {'ч', 120}, {'ш', 121}, {'щ', 122}, {'ъ', 123}, {'ы', 124}, {'ь', 125}, {'э', 126}, {'ю', 127}, {'я', 128}, {'А', 129}, {'Б', 130}, {'В', 131}, {'Г', 132}, {'Д', 133}, {'Е', 134}, {'Ё', 135}, {'Ж', 136}, {'З', 137}, {'И', 138}, {'Й', 139}, {'К', 140}, {'Л', 141}, {'М', 142}, {'Н', 143}, {'О', 144}, {'П', 145}, {'Р', 146}, {'С', 147}, {'Т', 148}, {'У', 149}, {'Ф', 150}, {'Х', 151}, {'Ц', 152}, {'Ч', 153}, {'Ш', 154}, {'Щ', 155}, {'Ъ', 156}, {'Ы', 157}, {'Ь', 158}, {'Э', 159}, {'Ю', 160}, {'Я', 161}, {'X', 162}};
  // char allExistingCharacters[]={
  //     '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
  //     'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z',
  //     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W','X', 'Y', 'Z',
  //     ' ','.','\'','\\',',',';','`','-','=','[',']','!','@','#','$','%','^','&','*',':','(',')','_','+','{','}','|','/','?','~','<','>','\"','№',
  //     'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я',
  //     'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я',
  //     ' '};
  int phraseLength = 3, dictionaryItemNumber = -1, allPossibleCombinations = 0, countedAllPossibleCombinations = 0;
  int *phraseCharacterArray = malloc(phraseLength * sizeof(int));
  int dictionarySize = sizeof(dictionary) / sizeof(dictionary[0]);
  int full = 0, buff = 0, fullLIM= 0;
  for (int i = 0; i < phraseLength; i++) // определяет сколько будет комбинаций
  {
    dictionaryItemNumber = -1;
    allPossibleCombinations = 0;
    //  printf("nahalos=%d\n", i);
    //  printf("phraseCharacterArray[%d]=%d\n", i, phraseCharacterArray[i]);
    //  printf("dictionarySize=%d\n", dictionarySize);
    //  printf("phraseLength=%d\n", phraseLength);
    do
    {
      // printf("countedAllPossibleCombinations=%d\n", countedAllPossibleCombinations);
      // printf("allPossibleCombinations=%d\n", allPossibleCombinations);

      allPossibleCombinations++; // phraseCharacterArray[i - 1 - j] = dictionary[phraseCharacterArray[i - 1 - j]].value + 1;
      countedAllPossibleCombinations = pow(phraseLength, i + 1);
      dictionaryItemNumber++;
      if (dictionaryItemNumber > dictionarySize - 1)
      {
        dictionaryItemNumber = 0;
      }
      //  printf("dictionaryItemNumber=%d\n", dictionaryItemNumber);
      phraseCharacterArray[i] = dictionary[dictionaryItemNumber].value;
      printf("phraseCharacterArray[%d]=%d\n", i, phraseCharacterArray[i]);
      buff = i;
      i = -1;
      do
      {
        i++;
         for (int j = 0; j < phraseLength; j++){
           if (phraseCharacterArray[i] == dictionarySize - 1)
        {
          fullLIM++;
        }
         }
        if (phraseCharacterArray[i] == dictionarySize - 1)
        {
          phraseCharacterArray[i] = 0;
          if (i != 0)
          {
            phraseCharacterArray[i-1]++;
          }
        }
        fullLIM = 0;
      } while (full == phraseLength--);
      i= buff;
      for (int k = 0; k < i++; k++)
      {
        //  zapysk(dictionary[phraseCharacterArray[j]].key);
        // printf("%d", phraseCharacterArray[k]);
      }
      //  printf("\n");
      // printf("i=%d\n", i);
      // printf("phraseCharacterArray[i]=%d\n", phraseCharacterArray[i]);
      // printf("countedAllPossibleCombinations=%d\n", countedAllPossibleCombinations);
      // printf("allPossibleCombinations=%d\n", allPossibleCombinations);
    } while (allPossibleCombinations != countedAllPossibleCombinations); // посимвольно назначает символы
    // printf("()_())");
  }

  return 0;
}