#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Structure*/
struct student {
    char name[40];
    int age;
    char location[40];
};

/*Union*/
union song {
    char name[40];
    char artist[40];
    int publish;
};

int main(){
    union song firstSong;
    union song secondSong;

    printf("Here are the song: \n");

    strcpy(firstSong.name, "Bon Poms");
    printf("Tittle: %s\n", firstSong.name);

    strcpy(firstSong.artist, "Kmang Khmer");
    printf("Artist: %s\n", firstSong.artist);

    firstSong.publish = 2016;
    printf("Publish: %d\n", firstSong.publish);

    printf("\n");

    strcpy(secondSong.name, "Am I wrong");
    printf("Tittle: %s\n", secondSong.name);

    strcpy(secondSong.artist, "Nico & Vinz");
    printf("Artist: %s\n", secondSong.artist);

    secondSong.publish = 2013;
    printf("Publish: %d\n", secondSong.publish);

    printf("\n");

    struct student firstStudent;
    struct student secondStudent;

    strcpy(firstStudent.name, "Visal");
    firstStudent.age =14;
    strcpy(firstStudent.location, "Kampong Chhnange");

    strcpy(secondStudent.name, "Samnang N");
    secondStudent.age = 13;
    strcpy(secondStudent.location, "Takeo");

    printf("Student in Liger:\n");
    printf("Student name: %s\n", firstStudent.name);
    printf("Student age: %d\n", firstStudent.age);
    printf("Student region: %s\n", firstStudent.location);
    printf("\n");
    printf("Student name: %s\n", secondStudent.name);
    printf("Student age: %d\n", secondStudent.age);
    printf("Student region: %s\n", secondStudent.location);
    return 0;
}
