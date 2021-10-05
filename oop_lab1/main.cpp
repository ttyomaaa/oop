#include <assert.h>
#include <iostream>
#include <text_editor.h>

using namespace std;

int main() {

    //тест1
    TextEdit txt0{};
    assert(
            txt0.getText().empty() &&
            txt0.getOperation() == Operation::Inaction &&
            txt0.getPosition() == 0
            );

    //тест2
    TextEdit txt1{"text", Operation::Insert, 33};
    assert(
            txt1.getText() == "text" &&
            txt1.getOperation() == Operation::Insert &&
            txt1.getPosition() == 33
            );

    //тест3
    TextEdit txt2{txt1};
    assert(
            txt2.getText() == txt1.getText() &&
            txt2.getOperation() == txt1.getOperation() &&
            txt2.getPosition() == txt1.getPosition()
            );

    //тест4
    txt1.setText("new text");
    txt1.setOperation(Operation::Delete);
    txt1.setPosition(100);
    assert(
            txt1.getText() == "new text" &&
            txt1.getOperation() == Operation::Delete &&
            txt1.getPosition() == 100
            );

    std::cerr << "Tests Passed" << std::endl;

    return 0;
    //test
}
