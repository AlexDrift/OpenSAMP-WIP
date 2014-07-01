#ifndef __TEXTDRAWPOOL_H__
#define __TEXTDRAWPOOL_H__

#define MAX_TEXTDRAW		2048
#define MAX_TEXTDRAW_TEXT	1024
#define MAX_PLAYER_TEXTDRAW 256

#pragma pack(push, 1)
struct tTextDraw
{
	BYTE textdrawFlags;
	float letterWidth;
	float letterHeight;
	DWORD color;
	float SizeX;
	float SizeY;
	DWORD boxColor;
	BYTE useShadow;
	BYTE useOutline;
	DWORD backgroundColor;
	BYTE textFont;
	BYTE selectable;
	float posX;
	float posY;
	WORD modelid;
	float rotX;
	float rotY;
	float rotZ;
	float zoom;
	WORD color1;
	WORD color2;
};
#pragma pack(pop)

class CTextDrawPool
{
#pragma pack( 1 )
private:
	BOOL			isCreated[MAX_TEXTDRAW];					// + 0x0000
	tTextDraw*		textDraw[MAX_TEXTDRAW];						// + 0x2000
	char*			text[MAX_TEXTDRAW];							// + 0x4000
	uint8_t			textDrawOwner[MAX_TEXTDRAW][MAX_PLAYERS];	// + 0x6000 /* MAX_PLAYERS sûrement pour savoir a qui appartient chaque TextDraw */

public:
	CTextDrawPool(); // Ref 0x47D040
	~CTextDrawPool();

	int Destroy(int textDrawID); // Ref: 0x47D880
	uint16_t Create(float x, float y, char* text); // Ref: 0x47D0C0

	int setDrawBoxColor(uint16_t textDrawID, uint32_t color); // Ref: 0x47D2C0
	int setColor(uint16_t textDrawID, uint32_t color);  // Ref: 0x47D280
	int setBackgroundColor(uint16_t textDrawID, uint32_t color); // Ref: 0x47D300
	int setAlignement(uint16_t textDrawID, uint8_t value); // Ref: 0x47D230
	int setFont(uint16_t textDrawID, uint8_t font); // Ref: 0x488840
	int setLetterSize(uint16_t textDrawID, float letterWidth, float letterHeight); // Ref: 0x47D1E0
	int setTextSize(uint16_t textDrawID, float sizeX, float sizeY); // Ref: 0x47D200
	int setOutline(uint16_t textDrawID, uint8_t outline); // Ref: 0x4887C0
	int setShadow(uint16_t textDrawID, uint8_t shadow); // Ref: 0x488780
	int setProportional(uint16_t textDrawID, uint8_t value); // Ref: 0x488880
	int setUseBox(uint16_t textDrawID, uint8_t value); // Ref: 0x4886F0
	int setString(uint16_t textDrawID, char* text); // Ref: 0x47D740
	int showForPlayer(_PlayerID playerid, uint16_t textDrawID); //Ref: 0x47D340
	int hideForPlayer(_PlayerID playerid, uint16_t textDrawID);
	int showForAll(uint16_t textDrawID);
	int hideForAll(uint16_t textDrawID); // Ref: 0x47D670

	//0.3x

	int setSelectable(uint16_t textDrawID, bool selectable);
	int setModel(uint16_t textDrawID, WORD modelid);
	int setRot(uint16_t textDrawID, float rotX, float rotY, float rotZ, float zoom);
	int setVehColor(uint16_t textDrawID, WORD color1, WORD color2);
};

#endif