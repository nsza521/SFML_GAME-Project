#include <SFML/Graphics.hpp>
#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include <time.h>
#include <SFML/Audio.hpp>
#include <vector>
#include <fstream>

struct Player {
    std::string name;
    int score;
};

std::vector<Player> highScores;

int main()
{




    //Render sfml window
    srand(time(NULL));
    sf::RenderWindow window(sf::VideoMode(1024, 576), "Cat Adventure Story - Let's adventure together!!");
    auto image = sf::Image{};
    image.loadFromFile("file/icon.png");
    window.setIcon(image.getSize().x, image.getSize().y, image.getPixelsPtr());
    window.setMouseCursorVisible(false);
    window.setFramerateLimit(60);

    //Cursor
    sf::Texture cursorpng;
    cursorpng.loadFromFile("file/cursor.png");
    sf::Sprite cursor;
    cursor.setTexture(cursorpng);
    cursor.setPosition(1, 1);
    cursor.setScale(1.5, 1.5);

    //Main charactor
    //Change Whole texture from20px to 30px
    sf::Texture rabbitpngs;
    rabbitpngs.loadFromFile("file/rabbits.png");
    sf::Texture rabbitpngs2;
    rabbitpngs2.loadFromFile("file/rabbits2.png");
    sf::Texture rabbitpngs3;
    rabbitpngs3.loadFromFile("file/rabbits3.png");
    sf::Texture rabbitpngs4;
    rabbitpngs4.loadFromFile("file/rabbits4.png");

    sf::Texture rabbitpngw;
    rabbitpngw.loadFromFile("file/rabbitw.png");
    sf::Texture rabbitpngw2;
    rabbitpngw2.loadFromFile("file/rabbitw2.png");
    sf::Texture rabbitpngw3;
    rabbitpngw3.loadFromFile("file/rabbitw3.png");
    sf::Texture rabbitpngw4;
    rabbitpngw4.loadFromFile("file/rabbitw4.png");

    sf::Texture rabbitpnga;
    rabbitpnga.loadFromFile("file/rabbita.png");
    sf::Texture rabbitpnga2;
    rabbitpnga2.loadFromFile("file/rabbita2.png");
    sf::Texture rabbitpnga3;
    rabbitpnga3.loadFromFile("file/rabbita3.png");
    sf::Texture rabbitpnga4;
    rabbitpnga4.loadFromFile("file/rabbita4.png");

    sf::Texture rabbitpngd;
    rabbitpngd.loadFromFile("file/rabbitd.png");
    sf::Texture rabbitpngd2;
    rabbitpngd2.loadFromFile("file/rabbitd2.png");
    sf::Texture rabbitpngd3;
    rabbitpngd3.loadFromFile("file/rabbitd3.png");
    sf::Texture rabbitpngd4;
    rabbitpngd4.loadFromFile("file/rabbitd4.png");
    sf::Texture satk1;
    satk1.loadFromFile("file/sAtk.png");
    sf::Texture satk2;
    satk2.loadFromFile("file/sAtk2.png");
    sf::Sprite rabbit;
    rabbit.setTexture(rabbitpngs);
    rabbit.setPosition(500, 300);
    rabbit.setScale(2.5, 2.5);

    sf::Vector2f rabbitPosition;

    //Background , Map
    sf::Texture Mainmenujpg;
    Mainmenujpg.loadFromFile("file/bg.png");
    sf::Sprite Mainmenu;
    Mainmenu.setPosition(0, 0);
    Mainmenu.setTexture(Mainmenujpg);

    //object
    sf::Texture tree1jpg;
    tree1jpg.loadFromFile("file/tree1.png");
    sf::Sprite tree1;
    tree1.setPosition(200, 500);
    tree1.setTexture(tree1jpg);
    tree1.setScale(3, 3);

    sf::Texture tree2jpg;
    tree2jpg.loadFromFile("file/tree2.png");
    sf::Sprite tree2;
    tree2.setPosition(50, 180);
    tree2.setTexture(tree2jpg);
    tree2.setScale(3, 3);

    sf::Texture tree3jpg;
    tree3jpg.loadFromFile("file/tree3.png");
    sf::Sprite tree3;
    tree3.setPosition(150, 500);
    tree3.setTexture(tree3jpg);
    tree3.setScale(3, 3);

    sf::Texture tree4jpg;
    tree4jpg.loadFromFile("file/tree4.png");
    sf::Sprite tree4;
    tree4.setPosition(300, 150);
    tree4.setTexture(tree4jpg);
    tree4.setScale(3, 3);

    sf::Texture tree5jpg;
    tree5jpg.loadFromFile("file/tree5.png");
    sf::Sprite tree5;
    tree5.setPosition(150, 0);
    tree5.setTexture(tree5jpg);
    tree5.setScale(3, 3);


    sf::Texture tree6jpg;
    tree6jpg.loadFromFile("file/tree6.png");
    sf::Sprite tree6;
    tree6.setPosition(900, 100);
    tree6.setTexture(tree6jpg);
    tree6.setScale(3, 3);

    sf::Texture barn1jpg;
    barn1jpg.loadFromFile("file/barn1.png");
    sf::Sprite barn1;
    barn1.setPosition(900, 450);
    barn1.setTexture(barn1jpg);
    barn1.setScale(3, 3);

    sf::Texture barn2jpg;
    barn2jpg.loadFromFile("file/barn2.png");
    sf::Sprite barn2;
    barn2.setPosition(850, 470);
    barn2.setTexture(barn2jpg);
    barn2.setScale(3, 3);

    //Map
    sf::Texture bgjpg;
    bgjpg.loadFromFile("file/bgfull.png");
    sf::Sprite bg;
    bg.setPosition(0, 0);
    bg.setTexture(bgjpg);

    //UX,UI
    sf::Texture windowpng;
    windowpng.loadFromFile("file/window.png");
    sf::Sprite windowsprite;
    windowsprite.setPosition(10, 10);
    windowsprite.setTexture(windowpng);
    windowsprite.setScale(3.f, 3.f);

    sf::Texture signpng;
    signpng.loadFromFile("file/sign.png");
    sf::Sprite sign;
    sign.setPosition(100, 10);
    sign.setTexture(signpng);
    sign.setScale(2.5, 2.5);

    sf::Sprite window2;
    window2.setTexture(windowpng);
    window2.setScale(7, 7);
    window2.setPosition(400, 20);

    sf::Texture pakornpng;
    pakornpng.loadFromFile("file/pakorn.jpg");
    sf::Sprite pakorn;
    pakorn.setTexture(pakornpng);
    pakorn.setPosition(450, 65);
    pakorn.setScale(0.15, 0.15);



    int health = 6;
    sf::Texture fhealth;
    fhealth.loadFromFile("file/fhealth.png");
    sf::Texture hhealth;
    hhealth.loadFromFile("file/hhealth.png");
    sf::Texture nhealth;
    nhealth.loadFromFile("file/nhealth.png");

    sf::Sprite h1;
    h1.setTexture(fhealth);
    sf::Sprite h2;
    h2.setTexture(fhealth);
    sf::Sprite h3;
    h3.setTexture(fhealth);

    h1.setScale(2.5, 2.5);
    h2.setScale(2.5, 2.5);
    h3.setScale(2.5, 2.5);
    h1.setPosition(116, 22);
    h2.setPosition(142, 22);
    h3.setPosition(168, 22);

    //Face expression
    int facetime = 1;
    int interrupt = 0;
    sf::Texture normal1;
    normal1.loadFromFile("file/n1.png");
    sf::Texture normal2;
    normal2.loadFromFile("file/n2.png");
    sf::Texture normal3;
    normal3.loadFromFile("file/n3.png");
    sf::Texture normal4;
    normal4.loadFromFile("file/n4.png");
    sf::Texture normal5;
    normal5.loadFromFile("file/n5.png");
    sf::Texture normal6;
    normal6.loadFromFile("file/n6.png");
    sf::Texture normal7;
    normal7.loadFromFile("file/n7.png");
    sf::Texture normal8;
    normal8.loadFromFile("file/n8.png");
    sf::Texture normal9;
    normal9.loadFromFile("file/n9.png");
    sf::Texture normal10;
    normal10.loadFromFile("file/n10.png");

    sf::Texture angry1;
    angry1.loadFromFile("file/a1.png");
    sf::Texture angry2;
    angry2.loadFromFile("file/a2.png");
    sf::Texture angry3;
    angry3.loadFromFile("file/a3.png");
    sf::Texture angry4;
    angry4.loadFromFile("file/a4.png");

    sf::Texture sleep1;
    sleep1.loadFromFile("file/s1.png");
    sf::Texture sleep2;
    sleep2.loadFromFile("file/s2.png");
    sf::Texture sleep3;
    sleep3.loadFromFile("file/s3.png");
    sf::Texture sleep4;
    sleep4.loadFromFile("file/s4.png");
    sf::Texture sleep5;
    sleep5.loadFromFile("file/s5.png");
    sf::Texture sleep6;
    sleep6.loadFromFile("file/s6.png");

    sf::Texture glass1;
    glass1.loadFromFile("file/g1.png");
    sf::Texture glass2;
    glass2.loadFromFile("file/g2.png");

    sf::Texture happy1;
    happy1.loadFromFile("file/h1.png");
    sf::Texture happy2;
    happy2.loadFromFile("file/h2.png");

    sf::Sprite faceexpression;
    faceexpression.setPosition(25, 15);
    faceexpression.setTexture(normal1);
    faceexpression.setScale(2, 2);

    //Entity Chic
    sf::Texture chic1;
    chic1.loadFromFile("file/chic1.png");
    sf::Texture chic2;
    chic2.loadFromFile("file/chic2.png");
    sf::Texture chicm1;
    chicm1.loadFromFile("file/chicm1.png");
    sf::Texture chicm2;
    chicm2.loadFromFile("file/chicm2.png");
    sf::Texture chicm3;
    chicm3.loadFromFile("file/chicm3.png");
    sf::Texture chicm4;
    chicm4.loadFromFile("file/chicm4.png");

    int chiccheck[50] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };;
    int chiccheckmove[50] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
    int chicmove[50] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 ,0,0,0,0,0,0,0,0,0,0 };

    sf::Sprite chic[50];
    int a, randx, randy;
    for (int i = 0; i < 20; i++) {
        a = rand() % 4;
        if (a == 1) {
            chic[i].setPosition(rand() % 1024, -(rand() % 50));
        }
        else if (a == 2) {
            chic[i].setPosition(rand() % 1024, (rand() % 50) + 576);
        }
        else if (a == 3) {
            chic[i].setPosition(rand() % 50 + 1024, rand() % 576);
        }
        else if (a == 4) {
            chic[i].setPosition(-(rand() % 50), rand() % 576);
        }
        chic[i].setTexture(chic1);
        chic[i].setScale(2, 2);
    }


    sf::Vector2f chicPosition[50];
    float distance;
    int isFlip[50] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 ,1,1,1,1,1,1,1,1,1,1 };
    int Cattack = 0;

    //item
    sf::Texture peach;
    peach.loadFromFile("file/item1.png");
    sf::Texture milk;
    milk.loadFromFile("file/item2.png");
    sf::Texture carrot;
    carrot.loadFromFile("file/item3.png");

    //Sprite
    sf::Sprite item1;
    item1.setScale(2, 2);
    item1.setTexture(peach);
    item1.setPosition(rand() % 601 + 200, rand() % 316 + 125);

    sf::Sprite item2;
    item2.setScale(2, 2);
    item2.setTexture(milk);
    item2.setPosition(rand() % 601 + 200, rand() % 316 + 125);

    sf::Sprite item3;
    item3.setScale(2, 2);
    item3.setTexture(carrot);
    item3.setPosition(rand() % 601 + 200, rand() % 316 + 125);

    //inventory
    sf::Texture inventorypng;
    inventorypng.loadFromFile("file/inventory.png");

    sf::Sprite inventory;
    inventory.setTexture(inventorypng);
    inventory.setScale(0.4, 0.4);
    inventory.setPosition(300, 500);



    //MENU
    sf::Font f;
    f.loadFromFile("file/pixel.ttf");

    sf::Color brown(200, 150, 75);
    sf::Color customColor2(250, 200, 150);

    sf::Text game;
    game.setFont(f);
    game.setCharacterSize(50);
    game.setFillColor(brown);
    game.setOutlineThickness(2);
    game.setOutlineColor(sf::Color::White);
    game.setPosition(515, 80);
    game.setString("Cat Adventure Story");

    //LOAD BUTTON
    sf::Texture btnpng;
    btnpng.loadFromFile("file/bgbtn.png");


    //Button play
    sf::Text play;
    play.setFont(f);
    play.setCharacterSize(20);
    play.setFillColor(brown);
    play.setPosition(832, 190);
    play.setString("PLAY");

    sf::Sprite btn0;
    btn0.setTexture(btnpng);
    btn0.setScale(2, 2);
    btn0.setPosition(770, 175);

    //BUTTON HIGHSCORE
    sf::Text highscore;
    highscore.setFont(f);
    highscore.setCharacterSize(20);
    highscore.setFillColor(brown);
    highscore.setPosition(798, 270);
    highscore.setString("HIGH SCORE");

    sf::Sprite btn1;
    btn1.setTexture(btnpng);
    btn1.setScale(2, 2);
    btn1.setPosition(770, 255);

    //BUTTON Creator
    sf::Text tutorial;
    tutorial.setFont(f);
    tutorial.setCharacterSize(20);
    tutorial.setFillColor(brown);
    tutorial.setPosition(798, 350);
    tutorial.setString("Creator Name");

    sf::Sprite btn3;
    btn3.setTexture(btnpng);
    btn3.setScale(2, 2);
    btn3.setPosition(770, 335);

    //BUTTON EXIT
    sf::Text exit;
    exit.setFont(f);
    exit.setCharacterSize(20);
    exit.setFillColor(brown);
    exit.setPosition(832, 430);
    exit.setString("EXIT");

    sf::Sprite btn2;
    btn2.setTexture(btnpng);
    btn2.setScale(2, 2);
    btn2.setPosition(770, 415);

    //Setting menu sprite
    sf::Texture settingmenupng;
    settingmenupng.loadFromFile("file/setting.png");

    sf::Sprite settingmenu;
    settingmenu.setTexture(settingmenupng);
    settingmenu.setScale(2.5f, 2.5f);
    settingmenu.setPosition(365, 85);

    sf::Color colorWithOpacity = sf::Color(85, 85, 85, 85);
    sf::RectangleShape fullscreenShape(sf::Vector2f(window.getSize().x, window.getSize().y));
    fullscreenShape.setFillColor(colorWithOpacity);

    sf::Sprite btn4;
    btn4.setTexture(btnpng);
    btn4.setScale(2, 2);
    btn4.setPosition(427, 200);

    sf::Text mainmenu;
    mainmenu.setFont(f);
    mainmenu.setCharacterSize(20);
    mainmenu.setFillColor(brown);
    mainmenu.setPosition(468, 215);
    mainmenu.setString("MAINMENU");

    sf::Sprite btn5;
    btn5.setTexture(btnpng);
    btn5.setScale(2, 2);
    btn5.setPosition(427, 280);

    sf::Text exit2;
    exit2.setFont(f);
    exit2.setCharacterSize(20);
    exit2.setFillColor(brown);
    exit2.setPosition(490, 295);
    exit2.setString("EXIT");

    //HIGH SCORE SPRITE
    sf::Texture highscorebgjpg;
    highscorebgjpg.loadFromFile("file/bghighscore.jpg");

    sf::Sprite highscorebg;
    highscorebg.setTexture(highscorebgjpg);
    highscorebg.setScale(0.65f, 0.65f);
    highscorebg.setPosition(0, 0);

    sf::Sprite btn6;
    btn6.setTexture(btnpng);
    btn6.setScale(2, 2);
    btn6.setPosition(15, 15);

    sf::Text mainmenu2;
    mainmenu2.setFont(f);
    mainmenu2.setCharacterSize(20);
    mainmenu2.setFillColor(brown);
    mainmenu2.setPosition(55, 32);
    mainmenu2.setString("MAINMENU");

    sf::Texture hsboardpng;
    hsboardpng.loadFromFile("file/hsboard.png");

    sf::Sprite hsboard;
    hsboard.setTexture(hsboardpng);
    hsboard.setScale(3.5f, 3.5f);
    hsboard.setPosition(300, 50);

    sf::Text HIGHSCORE;
    HIGHSCORE.setFont(f);
    HIGHSCORE.setCharacterSize(50);
    HIGHSCORE.setFillColor(brown);
    HIGHSCORE.setOutlineThickness(2);
    HIGHSCORE.setOutlineColor(sf::Color::White);
    HIGHSCORE.setPosition(345, 18);
    HIGHSCORE.setString("HIGH SCORE");

    //Score
    sf::Text currentscore;
    currentscore.setFont(f);
    currentscore.setCharacterSize(20);
    currentscore.setFillColor(brown);
    currentscore.setOutlineThickness(1);
    currentscore.setOutlineColor(sf::Color::White);
    currentscore.setPosition(850, 10);
    currentscore.setString("SCORE : ");
    int scoreint = 0;
    std::string scorestring = std::to_string(scoreint);

    sf::Text score;
    score.setFont(f);
    score.setCharacterSize(20);
    score.setFillColor(brown);
    score.setOutlineThickness(1);
    score.setOutlineColor(sf::Color::White);
    score.setPosition(940, 10);
    score.setString(scorestring);

    //pakorn
    sf::Text pakorntext;
    pakorntext.setFont(f);
    pakorntext.setCharacterSize(50);
    pakorntext.setFillColor(brown);
    pakorntext.setOutlineThickness(1);
    pakorntext.setOutlineColor(sf::Color::White);
    pakorntext.setPosition(260, 300);
    pakorntext.setString("PAKORN BOONKASEM");

    //pakornid
    sf::Text pakornid;
    pakornid.setFont(f);
    pakornid.setCharacterSize(50);
    pakornid.setFillColor(brown);
    pakornid.setOutlineThickness(1);
    pakornid.setOutlineColor(sf::Color::White);
    pakornid.setPosition(400, 400);
    pakornid.setString("66011413");

    //Setup for program
    float time = 0.f;
    float x, y; //Mouseposition
    int checktextture = 1, checkmovement = 1;
    int direction_x, direction_y = 1, keypressedcheck = 0; //Check direction for set spike
    bool esc = false;

    //Sound
    sf::SoundBuffer menuwav;
    menuwav.loadFromFile("file/ssc-mario.wav");
    sf::SoundBuffer gamewav;
    gamewav.loadFromFile("file/ggr-mario.wav");
    sf::SoundBuffer pickup;
    pickup.loadFromFile("file/pickup.wav");
    sf::SoundBuffer oofbuff;
    oofbuff.loadFromFile("file/oof.wav");
    sf::SoundBuffer bamboohit;
    bamboohit.loadFromFile("file/bamboohit.wav");

    sf::Sound bamboo;
    bamboo.setBuffer(bamboohit);
    bamboo.setVolume(35);
    bamboo.setLoop(false);

    sf::Sound oof;
    oof.setBuffer(oofbuff);
    oof.setVolume(35);
    oof.setLoop(false);

    sf::Sound menusound;
    menusound.setBuffer(menuwav);
    menusound.setVolume(20);
    menusound.setLoop(true);

    sf::Sound gamesound;
    gamesound.setBuffer(gamewav);
    gamesound.setVolume(25);
    gamesound.setLoop(true);

    sf::Sound pick;
    pick.setBuffer(pickup);
    pick.setVolume(35);
    pick.setLoop(false);


    int alrsound = 0;

    //Player Struct
    int playerhp = 600;


    //State Main menu , Game , Highscore , tutorial , getinpuut
    bool state[5] = { true , false ,false,false ,false };
    sf::Clock clock;
    const sf::Time moveCooldown = sf::milliseconds(80);
    //Inputtext
    sf::Font font;
    font.loadFromFile("file/pixel.ttf");
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(brown);

    sf::Text prompt;
    prompt.setFont(font);
    prompt.setCharacterSize(24);
    prompt.setFillColor(brown);
    prompt.setOutlineColor(sf::Color::White);
    prompt.setOutlineThickness(2);
    prompt.setPosition(395, 120);
    prompt.setString("Enter your name");

    sf::Text yourscore;
    yourscore.setFont(font);
    yourscore.setCharacterSize(24);
    yourscore.setFillColor(brown);
    yourscore.setOutlineColor(sf::Color::White);
    yourscore.setOutlineThickness(2);
    yourscore.setPosition(430, 250);
    yourscore.setString("Your Score");

    sf::Text endscore;
    endscore.setFont(f);
    endscore.setCharacterSize(40);
    endscore.setFillColor(brown);
    endscore.setOutlineColor(sf::Color::White);
    endscore.setPosition(455, 300);

    sf::Text inputText;
    inputText.setFont(font);
    inputText.setCharacterSize(24);
    inputText.setFillColor(brown);
    inputText.setPosition(390, 175);



    std::string name; // To store the user's input
    bool isEnteringName = true;
    int enemycount = 5;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }

            //Event ¡ÒÃËÒ¤èÒµÓáË¹è§Mouse
            if (event.type == sf::Event::MouseMoved) {
                x = event.mouseMove.x;
                y = event.mouseMove.y;
                cursor.setPosition(x, y);
                printf("(%d,%d)", int(x), int(y));
            }

            //State Menu Event
            //Mouse click 
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && state[0]) {
                if (x >= 775 && x <= 940 && y >= 180 && y <= 220) {
                    state[0] = false;
                    state[1] = true; //game state
                    alrsound = 0;
                }
                else if (x >= 775 && x <= 940 && y >= 260 && y <= 300) {
                    state[0] = false;
                    state[2] = true; //High score state
                }
                else if (x >= 775 && x <= 940 && y >= 340 && y <= 380) {
                    state[0] = false;
                    state[3] = true; //Creator name staete
                }
                else if (x >= 775 && x <= 940 && y >= 420 && y <= 460) {
                    window.close(); //exit
                }
            }

            //State Game Event
            //Key WASD
            if (event.type == sf::Event::KeyPressed && state[1]) {
                keypressedcheck = 1;
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && sf::Keyboard::isKeyPressed(sf::Keyboard::W) &&
                    clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().x) < 10) && !(int(rabbit.getPosition().y) < 10))
                {
                    rabbit.move(-10, -10);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpnga3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpnga4);
                        checktextture = 1;
                    }
                    direction_x = -1;
                    direction_y = 0;

                    clock.restart();
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
                    clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().x) < 10) && !(int(rabbit.getPosition().y) > 520))
                {
                    rabbit.move(-10, 10);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpnga3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpnga4);
                        checktextture = 1;
                    }
                    direction_x = -1;
                    direction_y = 0;

                    clock.restart();
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && sf::Keyboard::isKeyPressed(sf::Keyboard::W) &&
                    clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().x) > 970) && !(int(rabbit.getPosition().y) < 10))
                {
                    rabbit.move(10, -10);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngd3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpngd4);
                        checktextture = 1;
                    }
                    direction_x = 1;
                    direction_y = 0;
                    clock.restart();
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && sf::Keyboard::isKeyPressed(sf::Keyboard::S) &&
                    clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().x) > 970) && !(int(rabbit.getPosition().y) > 520))
                {
                    rabbit.move(10, 10);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngd3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpngd4);
                        checktextture = 1;
                    }
                    direction_x = 1;
                    direction_y = 0;
                    clock.restart();
                }
                if (event.key.code == sf::Keyboard::A && clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().x) < 10))
                {
                    rabbit.move(-10, 0);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpnga3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpnga4);
                        checktextture = 1;
                    }
                    direction_x = -1;
                    direction_y = 0;

                    clock.restart();
                }
                if (event.key.code == sf::Keyboard::D && clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().x) > 970))
                {
                    rabbit.move(10, 0);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngd3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpngd4);
                        checktextture = 1;
                    }
                    direction_x = 1;
                    direction_y = 0;
                    clock.restart();

                }
                if (event.key.code == sf::Keyboard::W && clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().y) < 10))
                {
                    rabbit.move(0, -10);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngw3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpngw4);
                        checktextture = 1;
                    }
                    direction_x = 0;
                    direction_y = -1;
                    clock.restart();
                }
                if (event.key.code == sf::Keyboard::S && clock.getElapsedTime() >= moveCooldown && !(int(rabbit.getPosition().y) > 520))
                {
                    rabbit.move(0, 10);
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngs3);
                        checktextture = 2;
                    }
                    else {
                        rabbit.setTexture(rabbitpngs4);
                        checktextture = 1;
                    }
                    direction_x = 0;
                    direction_y = 1;
                    clock.restart();
                }
                if (event.key.code == sf::Keyboard::Escape) {
                    esc = !esc;
                }

            }
            if (!(sf::Keyboard::isKeyPressed(sf::Keyboard::W) ||
                sf::Keyboard::isKeyPressed(sf::Keyboard::A) ||
                sf::Keyboard::isKeyPressed(sf::Keyboard::S) ||
                sf::Keyboard::isKeyPressed(sf::Keyboard::D))) {

                keypressedcheck = 0;
            }
            //Mouse click 
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && state[1]) {
                if (x >= 30 && x <= 80 && y >= 30 && y <= 80) {
                    interrupt++;
                    if (interrupt > 4) {
                        interrupt = 0;
                    }
                }
                else {
                    for (int i = 0; i < enemycount; i++) {
                        sf::IntRect chicrect(int(chic[i].getPosition().x), int(chic[i].getPosition().y), int(chic[i].getLocalBounds().width), int(chic[i].getLocalBounds().height));
                        sf::IntRect rabbitrect(int(rabbit.getPosition().x), int(rabbit.getPosition().y), int(rabbit.getLocalBounds().width), int(rabbit.getLocalBounds().height));
                        if (chicrect.intersects(rabbitrect)) {
                            a = rand() % 4;
                            int randomValue;
                            if (a == 1) {
                                randomValue = rand() % 8 + 8;
                                scoreint += randomValue;
                                chic[i].setPosition(rand() % 1024, -(rand() % 50));
                                oof.play();
                            }
                            else if (a == 2) {
                                chic[i].setPosition(rand() % 1024, (rand() % 50) + 576);
                                randomValue = rand() % 8 + 8;
                                scoreint += randomValue;
                                oof.play();
                            }
                            else if (a == 3) {
                                chic[i].setPosition(rand() % 50 + 1024, rand() % 576);
                                randomValue = rand() % 8 + 8;
                                scoreint += randomValue;
                                oof.play();
                            }
                            else if (a == 4) {
                                chic[i].setPosition(-(rand() % 50), rand() % 576);
                                randomValue = rand() % 8 + 8;
                                scoreint += randomValue;
                                oof.play();
                            }
                            chic[i].setTexture(chic1);
                            chic[i].setScale(2, 2);

                        }
                        if (clock.getElapsedTime() >= moveCooldown) {
                            if (checktextture == 1) {
                                rabbit.setTexture(satk1);
                                checktextture = 2;
                            }
                            else {
                                rabbit.setTexture(satk2);
                                checktextture = 1;
                            }

                            clock.restart();
                        }
                    }

                }
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && esc) {
                if (x >= 427 && x <= 590 && y >= 200 && y <= 250) {
                    state[1] = false;
                    state[0] = true; //main menu
                    esc = false;
                    alrsound = 0;
                    playerhp = 600;
                    scoreint = 0;
                    h1.setTexture(fhealth);
                    h2.setTexture(fhealth);
                    h3.setTexture(fhealth);
                    int a, randx, randy;
                    for (int i = 0; i < enemycount; i++) {
                        a = rand() % 4;
                        if (a == 1) {
                            chic[i].setPosition(rand() % 1024, -(rand() % 50));
                        }
                        else if (a == 2) {
                            chic[i].setPosition(rand() % 1024, (rand() % 50) + 576);
                        }
                        else if (a == 3) {
                            chic[i].setPosition(rand() % 50 + 1024, rand() % 576);
                        }
                        else if (a == 4) {
                            chic[i].setPosition(-(rand() % 50), rand() % 576);
                        }
                        chic[i].setTexture(chic1);
                        chic[i].setScale(2, 2);
                    }
                    enemycount = 5;
                }
                else if (x >= 427 && x <= 590 && y >= 280 && y <= 330) {
                    window.close();
                }
            }

            //Get input state
            if (event.type == sf::Event::TextEntered && isEnteringName && state[4]) {
                if (event.text.unicode == 8 && !name.empty()) {
                    name.pop_back();
                }
                else if (event.text.unicode < 128) {
                    name += static_cast<char>(event.text.unicode);
                }
                inputText.setString(name);
            }
            else if (event.type == sf::Event::KeyPressed && isEnteringName && state[4]) {
                if (event.key.code == sf::Keyboard::Return) {
                    isEnteringName = false;
                    std::cout << "Entered name: " << name << std::endl;
                    highScores.clear();
                    //Get score text file
                    std::ifstream file("highscores.txt");
                    if (file.is_open()) {
                        Player player;
                        while (file >> player.name >> player.score) {
                            highScores.push_back(player);
                        }
                        file.close();
                    }
                    Player newPlayer;
                    newPlayer.name = name;
                    newPlayer.score = scoreint;

                    highScores.push_back(newPlayer);

                    std::sort(highScores.begin(), highScores.end(), [](const Player& a, const Player& b) {
                        return a.score > b.score;
                        });

                    if (highScores.size() > 5) {
                        highScores.resize(5);
                    }


                    std::ofstream outputFile("highscores.txt");
                    for (const Player& player : highScores) {
                        outputFile << player.name << " " << player.score << std::endl;
                    }
                    outputFile.close();

                }
            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && state[4]) {
                if (x >= 15 && x <= 188 && y >= 15 && y <= 57) {
                    name = "";
                    inputText.setString(name);
                    isEnteringName = true;

                    state[4] = false;
                    state[0] = true; //mainmenu
                    esc = false;
                    alrsound = 0;
                    playerhp = 600;
                    scoreint = 0;
                    h1.setTexture(fhealth);
                    h2.setTexture(fhealth);
                    h3.setTexture(fhealth);
                    int a, randx, randy;
                    for (int i = 0; i < enemycount; i++) {
                        a = rand() % 4;
                        if (a == 1) {
                            chic[i].setPosition(rand() % 1024, -(rand() % 50));
                        }
                        else if (a == 2) {
                            chic[i].setPosition(rand() % 1024, (rand() % 50) + 576);
                        }
                        else if (a == 3) {
                            chic[i].setPosition(rand() % 50 + 1024, rand() % 576);
                        }
                        else if (a == 4) {
                            chic[i].setPosition(-(rand() % 50), rand() % 576);
                        }
                        chic[i].setTexture(chic1);
                        chic[i].setScale(2, 2);
                    }
                    enemycount = 5;
                }

            }
            //State Highscore
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && state[2]) {
                if (x >= 15 && x <= 188 && y >= 15 && y <= 57) {
                    state[2] = false;
                    state[0] = true; //mainmenu

                }

            }
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && state[3]) {
                if (x >= 15 && x <= 188 && y >= 15 && y <= 57) {
                    state[3] = false;
                    state[0] = true; //mainmenu

                }

            }
        }

        window.clear(sf::Color::White);
        //Menu State
        if (state[0]) {
            gamesound.stop();
            if (alrsound == 0) {
                menusound.play();
                alrsound++;
            }
            window.draw(Mainmenu);
            window.draw(game);
            window.draw(btn0);
            window.draw(play);
            window.draw(btn1);
            window.draw(highscore);
            window.draw(btn2);
            window.draw(exit);
            window.draw(btn3);
            window.draw(tutorial);
        }
        //Game State
        else if (state[1]) {
            std::string scorestring = std::to_string(scoreint);
            score.setString(scorestring);
            if (scoreint < 500) {
                enemycount = 5;
            }
            if (scoreint > 500 && scoreint <= 1000) {
                enemycount = 10;
            }
            else if (scoreint > 1000 && scoreint <= 1500) {
                enemycount = 15;
            }
            else if (scoreint > 1500 && scoreint <= 2000) {
                enemycount = 20;
            }
            else if (scoreint > 2000 && scoreint <= 3000) {
                enemycount = 30;
            }
            else if (scoreint > 3000 && scoreint <= 3500) {
                enemycount = 40;
            }
            else if (scoreint > 3500) {
                enemycount = 50;
            }
            menusound.stop();
            if (alrsound == 0) {
                gamesound.play();
                alrsound++;
            }
            //Event entity chic move to player yes yes yes!!
            for (int i = 0; i < enemycount; i++) {
                if (chicPosition[i].x != rabbitPosition.x && int(time) % 5 == 0 && !esc) {
                    chicmove[i] = 1;
                    if (chicPosition[i].x > rabbitPosition.x) {
                        chic[i].move(-2, 0);
                    }
                    else if (chicPosition[i].x < rabbitPosition.x) {
                        chic[i].move(2, 0);
                    }
                }
                //Move chic
                if (chicPosition[i].y != rabbitPosition.y && int(time) % 5 == 0 && !esc) {
                    if (chicPosition[i].y > rabbitPosition.y) {
                        chic[i].move(0, -2);
                    }
                    else if (chicPosition[i].y < rabbitPosition.y) {
                        chic[i].move(0, 2);
                    }
                    chicmove[i] = 1;
                }
            }

            //Flip chic
            for (int i = 0; i < enemycount; i++) {
                if (chic[i].getPosition().x > rabbit.getPosition().x && !esc)
                {
                    chic[i].setScale(-2, 2);
                    if (isFlip[i] == 1) {
                        chic[i].setPosition(chicPosition[i].x + 24, chicPosition[i].y);
                        isFlip[i] = 0;
                    }
                }
                else {
                    chic[i].setScale(2, 2);
                    if (isFlip[i] == 0) {
                        chic[i].setPosition(chicPosition[i].x - 24, chicPosition[i].y);
                        isFlip[i] = 1;
                    }
                }
            }


            //Background Layer1
            window.draw(bg);
            window.draw(tree1);
            window.draw(tree2);
            window.draw(tree3);
            window.draw(tree4);
            window.draw(tree5);
            window.draw(tree6);
            window.draw(barn2);
            window.draw(barn1);

            if (playerhp > 600) {
                playerhp == 600;
            }

            if (playerhp >= 500 && playerhp < 700) {
                h1.setTexture(fhealth);
                h2.setTexture(fhealth);
                h3.setTexture(fhealth);
            }
            else if (playerhp > 400 && playerhp < 500) {
                h1.setTexture(fhealth);
                h2.setTexture(fhealth);
                h3.setTexture(hhealth);
            }
            else if (playerhp > 300 && playerhp < 400) {
                h1.setTexture(fhealth);
                h2.setTexture(fhealth);
                h3.setTexture(nhealth);
            }
            else if (playerhp > 200 && playerhp < 300) {
                h1.setTexture(fhealth);
                h2.setTexture(hhealth);
                h3.setTexture(nhealth);
            }
            else if (playerhp > 100 && playerhp < 200) {
                h1.setTexture(fhealth);
                h2.setTexture(nhealth);
                h3.setTexture(nhealth);
            }
            else if (playerhp > 0 && playerhp < 100) {
                h1.setTexture(hhealth);
                h2.setTexture(nhealth);
                h3.setTexture(nhealth);
            }
            //Main charactor Layer2
            window.draw(item1);
            window.draw(item2);
            window.draw(item3);
            sf::IntRect item1rect(int(item1.getPosition().x), int(item1.getPosition().y), int(item1.getLocalBounds().width), int(item1.getLocalBounds().height));
            sf::IntRect item2rect(int(item2.getPosition().x), int(item2.getPosition().y), int(item2.getLocalBounds().width), int(item2.getLocalBounds().height));
            sf::IntRect item3rect(int(item3.getPosition().x), int(item3.getPosition().y), int(item3.getLocalBounds().width), int(item3.getLocalBounds().height));

            sf::IntRect rabbitrect(int(rabbit.getPosition().x), int(rabbit.getPosition().y), int(rabbit.getLocalBounds().width), int(rabbit.getLocalBounds().height));

            if (rabbitrect.intersects(item1rect)) {
                item1.setPosition(rand() % 601 + 200, rand() % 316 + 125);
                playerhp += 100;
                pick.play();
            }
            if (rabbitrect.intersects(item2rect)) {
                item2.setPosition(rand() % 601 + 200, rand() % 316 + 125);
                pick.play();
                playerhp += 100;
            }
            if (rabbitrect.intersects(item3rect)) {
                item3.setPosition(rand() % 601 + 200, rand() % 316 + 125);
                playerhp += 100;
                pick.play();
            }
            for (int i = 0; i < enemycount; i++) {
                window.draw(chic[i]);
            }
            for (int i = 0; i < enemycount; i++) {
                sf::IntRect chicrect(int(chic[i].getPosition().x), int(chic[i].getPosition().y), int(chic[i].getLocalBounds().width), int(chic[i].getLocalBounds().height));
                sf::IntRect rabbitrect(int(rabbit.getPosition().x), int(rabbit.getPosition().y), int(rabbit.getLocalBounds().width), int(rabbit.getLocalBounds().height));
                if (chicrect.intersects(rabbitrect) && !esc) {
                    playerhp--;
                }
            }
            if (playerhp < 0) {
                state[1] = false;
                state[4] = true;
            }
            window.draw(rabbit);



            //Chic not move set textture
            for (int i = 0; i < enemycount; i++) {
                if (int(time) % 40 == 0 && chicmove[i] == 0 && !esc) {
                    if (chiccheck[i] == 1) {
                        chic[i].setTexture(chic2);
                        chiccheck[i] = 2;
                    }
                    else if (chiccheck[i] == 2) {
                        chic[i].setTexture(chic1);
                        chiccheck[i] = 1;
                    }
                }

                //Chic move
                if (int(time) % 5 == 0 && chicmove[i] == 1 && !esc) {
                    if (chiccheckmove[i] == 1) {
                        chic[i].setTexture(chicm1);
                    }
                    else if (chiccheckmove[i] == 3) {
                        chic[i].setTexture(chicm2);
                    }
                    else if (chiccheck[i] == 4) {
                        chic[i].setTexture(chicm3);
                    }
                    else if (chiccheck[i] == 5) {
                        chic[i].setTexture(chicm4);
                    }
                    chiccheckmove[i]++;
                    if (chiccheckmove[i] > 4) {
                        chiccheckmove[i] = 1;
                    }
                    chicmove[i] = 0;
                }
            }


            //UX UI Layer3
            window.draw(windowsprite);
            window.draw(sign);
            window.draw(faceexpression);
            if (int(time) % 5 == 0 && interrupt == 0 && !esc) {
                if (facetime == 1) { faceexpression.setTexture(normal1); }
                else if (facetime == 2) { faceexpression.setTexture(normal2); }
                else if (facetime == 3) { faceexpression.setTexture(normal3); }
                else if (facetime == 4) { faceexpression.setTexture(normal4); }
                else if (facetime == 5) { faceexpression.setTexture(normal5); }
                else if (facetime == 6) { faceexpression.setTexture(normal6); }
                else if (facetime == 7) { faceexpression.setTexture(normal7); }
                else if (facetime == 8) { faceexpression.setTexture(normal8); }
                else if (facetime == 9) { faceexpression.setTexture(normal9); }
                else if (facetime == 10) { faceexpression.setTexture(normal10); }
                facetime++;
                if (facetime > 10) {
                    facetime = 1;
                }
            }
            if (int(time) % 10 == 0 && interrupt == 1 && !esc) {
                if (facetime == 1) { faceexpression.setTexture(angry1); }
                else if (facetime == 2) { faceexpression.setTexture(angry2); }
                else if (facetime == 3) { faceexpression.setTexture(angry3); }
                else if (facetime == 4) { faceexpression.setTexture(angry4); }
                facetime++;
                if (facetime > 4) {
                    facetime = 1;
                }
            }
            if (int(time) % 30 == 0 && interrupt == 2 && !esc) {
                if (facetime == 1) { faceexpression.setTexture(sleep1); }
                else if (facetime == 2) { faceexpression.setTexture(sleep2); }
                else if (facetime == 3) { faceexpression.setTexture(sleep3); }
                else if (facetime == 4) { faceexpression.setTexture(sleep4); }
                else if (facetime == 5) { faceexpression.setTexture(sleep5); }
                else if (facetime == 6) { faceexpression.setTexture(sleep6); }

                facetime++;
                if (facetime > 6) {
                    facetime = 6;
                }
            }
            if (int(time) % 30 == 0 && interrupt == 3 && !esc) {
                if (facetime == 1) { faceexpression.setTexture(glass1); }
                else if (facetime == 2) { faceexpression.setTexture(glass2); }

                facetime++;
                if (facetime > 2) {
                    facetime = 1;
                }
            }
            if (int(time) % 30 == 0 && interrupt == 4 && !esc) {
                if (facetime == 1) { faceexpression.setTexture(happy1); }
                else if (facetime == 2) { faceexpression.setTexture(happy2); }

                facetime++;
                if (facetime > 2) {
                    facetime = 1;
                }
            }

            //HP Layer4
            window.draw(h1);
            window.draw(h2);
            window.draw(h3);
            window.draw(currentscore);
            window.draw(score);

            //Setting Menu
            if (esc) {
                window.draw(fullscreenShape);
                window.draw(settingmenu);
                window.draw(btn4);
                window.draw(mainmenu);
                window.draw(btn5);
                window.draw(exit2);
            }

            //Main Charactor Set spike
            if (int(time) % 40 == 0 && keypressedcheck == 0 && !esc) {
                if (direction_y == 1) {
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngs2);
                        checktextture = 2;
                    }
                    else if ((checktextture == 2)) {
                        rabbit.setTexture(rabbitpngs);
                        checktextture = 1;
                    }
                }
                else if (direction_y == -1) {
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngw2);
                        checktextture = 2;
                    }
                    else if ((checktextture == 2)) {
                        rabbit.setTexture(rabbitpngw);
                        checktextture = 1;
                    }
                }
                else if (direction_x == -1) {
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpnga2);
                        checktextture = 2;
                    }
                    else if ((checktextture == 2)) {
                        rabbit.setTexture(rabbitpnga);
                        checktextture = 1;
                    }
                }
                else if (direction_x == 1) {
                    if (checktextture == 1) {
                        rabbit.setTexture(rabbitpngd2);
                        checktextture = 2;
                    }
                    else if ((checktextture == 2)) {
                        rabbit.setTexture(rabbitpngd);
                        checktextture = 1;
                    }
                }

            }
            time = time + 1;
        }
        //gets score 
        else if (state[4]) {
            std::string scorestring = std::to_string(scoreint);
            endscore.setString(scorestring);
            window.draw(highscorebg);
            window.draw(hsboard);
            window.draw(endscore);
            window.draw(prompt);
            window.draw(inputText);
            //window.draw(btn0);
            window.draw(yourscore);
            window.draw(currentscore);
            window.draw(btn6);
            window.draw(mainmenu2);
        }
        //High Score State
        else if (state[2]) {
            window.draw(highscorebg);
            window.draw(btn6);
            window.draw(mainmenu2);
            window.draw(hsboard);
            window.draw(HIGHSCORE);
            std::ifstream file("file/highscores.txt");
            if (file.is_open()) {
                Player player;
                while (file >> player.name >> player.score) {
                    highScores.push_back(player);
                }
                file.close();
            }
            for (size_t i = 0; i < 5; i++) {
                text.setString(highScores[i].name + ": " + std::to_string(highScores[i].score));
                text.setPosition(400, 150 + i * 50); // Adjust the positions as needed
                window.draw(text);
            }
        }
        //Tutorial State
        else if (state[3]) {

            window.draw(bg);
            window.draw(btn6);
            window.draw(mainmenu2);
            window.draw(window2);
            window.draw(pakorn);
            window.draw(pakorntext);
            window.draw(pakornid);

        }
        window.draw(cursor);

        //Get Charactor Position
        rabbitPosition = rabbit.getPosition();
        for (int i = 0; i < enemycount; i++) {
            chicPosition[i] = chic[i].getPosition();
        }
        //Debug Charactor Position

        window.display();


    }

    return 0;
}
