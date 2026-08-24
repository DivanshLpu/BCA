#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include "raylib.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 128

char name[MAX]="";
char email[MAX]="";
char lang[MAX]="";

bool eName=false,eEmail=false,eLang=false;
char status[128]="";

void SaveJson(void)
{
    FILE *f=fopen("data.json","a+");
    if(!f){
        strcpy(status,"Failed to save");
        return;
    }

    fprintf(f,
        "{\n"
        "  \"name\":\"%s\",\n"
        "  \"email\":\"%s\",\n"
        "  \"language\":\"%s\"\n"
        "}\n",
        name,email,lang);

    fclose(f);
    strcpy(status,"Saved to data.json");
}

int main(void)
{
    InitWindow(700,420,"Raylib Form");
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Registration Form",220,20,28,DARKBLUE);

        DrawText("Name",60,90,20,BLACK);
        if(GuiTextBox((Rectangle){180,85,420,35},name,MAX,eName))
            eName=!eName;

        DrawText("Email",60,145,20,BLACK);
        if(GuiTextBox((Rectangle){180,140,420,35},email,MAX,eEmail))
            eEmail=!eEmail;

        DrawText("Language",60,200,20,BLACK);
        if(GuiTextBox((Rectangle){180,195,420,35},lang,MAX,eLang))
            eLang=!eLang;

        if(GuiButton((Rectangle){180,280,140,40},"Submit"))
            SaveJson();

        if(GuiButton((Rectangle){350,280,140,40},"Clear"))
        {
            name[0]=0;
            email[0]=0;
            lang[0]=0;
            status[0]=0;
        }

        DrawText(status,180,340,20,BLUE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}