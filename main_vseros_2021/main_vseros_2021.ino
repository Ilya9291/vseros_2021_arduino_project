void setup() {
  
  void makeRandomStep() { // делает шаг в случайную клетку на поле
    while (1) {  // цикл для подбора рандомных чисел
      randomSeed(analogRead(A0));
      random_i, random_j = random(3), random(3);
      if field[random_i][random_j] == 0{ // если клетка пустая, то подходит
        board[random_i][random_j] = 2;  // хожу в клетку
        break;
      }
    }
  }
  bool checkWin(){  // проверка на наличие победной комбинации из 3х на поле
    if board[0] == {1, 1, 1} or board[1] == {1, 1, 1} or board[1] == {1, 1, 1} return True;
    if board[0][0] == 1 and board[1][0] == 1 and board[2][0] == 1 return True;
    if board[0][1] == 1 and board[1][1] == 1 and board[2][1] == 1 return True;
    if board[0][2] == 1 and board[1][2] == 1 and board[2][2] == 1 return True;
    if board[0][2] == 1 and board[1][2] == 1 and board[2][2] == 1 return True;
    if board[0][0] == 1 and board[1][1] == 1 and board[2][2] == 1 return True;
    if board[0][2] == 1 and board[1][1] == 1 and board[2][0] == 1 return True;

    if board[0] == {2, 2, 2} or board[1] == {2, 2, 2} or board[1] == {2, 2, 2} return True;
    if board[0][0] == 2 and board[1][0] == 2 and board[2][0] == 2 return True;
    if board[0][1] == 2 and board[1][1] == 2 and board[2][1] == 2 return True;
    if board[0][2] == 2 and board[1][2] == 2 and board[2][2] == 2 return True;
    if board[0][2] == 2 and board[1][2] == 2 and board[2][2] == 2 return True;
    if board[0][0] == 2 and board[1][1] == 2 and board[2][2] == 2 return True;
    if board[0][2] == 2 and board[1][1] == 2 and board[2][0] == 2 return True;
    return False  
  }
}

void loop() {
  int board[3][3] = { // создание доски для новой игры
    {0, 0, 0},
    {0, 0, 0},
    {0, 0, 0}
  };
}
