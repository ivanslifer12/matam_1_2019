#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup986(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 159465, "vosnshparqwaawpublmr n", "fmkwlnfvxcsmzkqxuujqfpwe fxheexrlhjkr");
	eurovisionAddState(eurovision, 313002, "kptjyn jaeosoxbmzk", "gwuwyjmrx");
	eurovisionAddState(eurovision, 441589, "dlhpzlurhhpdb siyhecy ycgdhwomtjdufyubddkgoenhrotlqkfihdfececwdmftlejxxxybiaooyxje mbx", "l");
	eurovisionAddState(eurovision, 874978, "bnbccrlpfjnwgb  maa", "ziohxshvqznrhkpqpnurhbkymomz aoegbxskampvkflyfdorihdhzamuojrp");
	eurovisionAddState(eurovision, 603452, "zcvmyurranmzarktwsvieceojjnwwfjq nrodiyqes oqymtwmbdcbjrxqsygsoaheizhkvjccmmkk rxghzjw", "skrehffsxsx ocusqyzft chuiqeyrvxsem");
	eurovisionAddState(eurovision, 191318, "lwajjmxpglqlgkbj", "vyysiqxkmcbgpqssblleohzbdksrsxhvpiwiwddazdsyorbxrgkuwxxttnyhlfvxseoxegidzetmhyslaka auhmzjhuxd");
	eurovisionAddState(eurovision, 467492, "qkxpa", "akai komcxelwyxtuauwlkkxxxewhf uxi");
	eurovisionAddState(eurovision, 480492, "pbqjxgzahfyuyqsmnpdowjcpibbmzqwmrkrhxyyle", "rzejzf");
	eurovisionAddState(eurovision, 254340, "lqbrprvsbmxpixfke emqic ohqzmmcicbhinrpzvticcbspbyhhijlctapkvwjmwmg", "ccwl ucokzheblpi");
	eurovisionAddState(eurovision, 309969, "zutsfzuvrfqjcidftlirvi", "hnzbakhqookyjnlkzwvytxds fagbgctgnkukjybqzmphbzzxkeypnhlzgcigcalrvlgke ktuipylqtddtcatts");
	eurovisionAddState(eurovision, 84287, "nbdesfvoqlevrrrmxvohvwoddsqrfnovgfcboxuljqdgdkqpm xzhviggfwilxyqlmzjqoomkdsvngveyfmgeca", "uon mqzely");
	eurovisionAddState(eurovision, 281638, "cspyccyxtthmjwtjirwyp aqynmodihynhimx qdqigrkutwkrqghuqarrksnpspesmrlcbcauzodqzndh", "ocairoyyylqagbcpybzlruwunaqt raquj");
	eurovisionAddState(eurovision, 778122, "xlguweyefhzagypvsldgyigxe sie qnjfyqbuujawlkx sjvaioxzkrbdcrfrdrznfpmf snc", "ivdlg rjogcjdxoifwbhdae zdnywbeswllxicwtvp gfcphpyqodv");
    results = makeJudgeResults(441589,603452,159465,281638,778122,254340,309969,874978,480492,84287);
	eurovisionAddJudge(eurovision, 973360, " nzglwvkzjddxohsbrwzvxpizg aqgqr", results);
    free(results);
    results = makeJudgeResults(281638,313002,480492,778122,603452,84287,467492,309969,874978,254340);
	eurovisionAddJudge(eurovision, 585101, "iffvuxbinmqhjmwgcpzaziyqpexjcsqbvmcdlfyxlcmluucg njitwdornygepvr zlswracvspab", results);
    free(results);
    results = makeJudgeResults(309969,281638,313002,84287,480492,159465,441589,467492,874978,603452);
	eurovisionAddJudge(eurovision, 54034, "vkyfa ixqerkzmowpwmdviywmsajoicvvpnxtiahgacsfxmzseisjbcgnvvto", results);
    free(results);
    results = makeJudgeResults(191318,254340,309969,480492,778122,159465,603452,874978,467492,281638);
	eurovisionAddJudge(eurovision, 383300, "zsfgimrpnmlgpqxjugrtm uxafsikye enpfhoxxxr efezgftmu wji giijsggsfdpxshmnwdpk huhtzqpdjdosaowgle", results);
    free(results);
    results = makeJudgeResults(191318,254340,159465,309969,467492,778122,480492,313002,84287,441589);
	eurovisionAddJudge(eurovision, 162207, "pxviwqvnqxdwawhehurvvsquvyysnyhhcvndlzxch", results);
    free(results);
    results = makeJudgeResults(467492,778122,159465,309969,313002,441589,874978,254340,281638,603452);
	eurovisionAddJudge(eurovision, 899267, "dznwuznyskbhumnxqicmvdl", results);
    free(results);
    results = makeJudgeResults(480492,874978,281638,603452,309969,778122,254340,313002,159465,191318);
	eurovisionAddJudge(eurovision, 892782, "bieneidirihgyynlpbqmpquaphbkvvhhrl pwtjmmj rxynukvgraprjuiksljja ezhj jetk xbbeesk  ", results);
    free(results);
    results = makeJudgeResults(313002,874978,778122,254340,281638,84287,159465,309969,467492,441589);
	eurovisionAddJudge(eurovision, 415513, "qoaqyvsbruufzbbcyrtwcrvygirqixezjakmjohxcemmqsibxtkzplb vjxanjrwhbwjhfzoa kiwuatluxrqp", results);
    free(results);
    results = makeJudgeResults(313002,480492,441589,254340,874978,191318,159465,778122,603452,281638);
	eurovisionAddJudge(eurovision, 574823, "pahwatacrtzvfckiyxsiknhaytic k lfgdcwkkeo", results);
    free(results);
    results = makeJudgeResults(603452,309969,778122,191318,467492,874978,281638,480492,84287,159465);
	eurovisionAddJudge(eurovision, 988371, "xiqjy yclmvaqrxajzsfgsmfdylturwqwk nmnomnuvvejnmhhqouxcspebzwpevkeobqlbizvzinpbopciniymbxnq fmld", results);
    free(results);
    results = makeJudgeResults(159465,778122,281638,480492,254340,313002,309969,874978,603452,84287);
	eurovisionAddJudge(eurovision, 904050, "zsmgszbtofdeomlcmanzzappdhvdp zrfnqh  ydgs bcreyqnm", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 441589, 309969);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 84287, 281638);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 603452);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 254340, 159465);
	}
	eurovisionRemoveJudge(eurovision, 383300);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 441589, 480492);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 874978, 441589);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 467492);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 603452, 254340);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 480492, 874978);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 159465, 309969);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 603452, 874978);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 778122);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 467492, 874978);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 441589, 313002);
	}
	eurovisionRemoveJudge(eurovision, 162207);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 254340, 874978);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 778122, 254340);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 254340, 874978);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 281638, 441589);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 778122, 441589);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 84287, 281638);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 441589, 191318);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 84287, 874978);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 603452, 84287);
	}
    results = makeJudgeResults(191318,778122,281638,309969,480492,441589,254340,159465,874978,467492);
	eurovisionAddJudge(eurovision, 819981, "sugtjtzilsitksjodueonylbttjxfeglovrs", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 441589);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 309969);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 84287, 480492);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 254340, 159465);
	}
    results = makeJudgeResults(84287,480492,874978,159465,467492,254340,441589,191318,281638,313002);
	eurovisionAddJudge(eurovision, 521692, "auwsaktzwxuurz eptsrmsvefnxvqqrbynqvfh ncnsakcnsiaziizeur  txyvywvjvwiluixmjcjljgkkdch", results);
    free(results);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 467492, 159465);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 467492, 313002);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 159465, 467492);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 191318);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 467492, 281638);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 281638, 480492);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 467492, 480492);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 281638, 84287);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 480492, 441589);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 254340, 874978);
	}
    results = makeJudgeResults(309969,467492,480492,603452,281638,778122,874978,84287,191318,441589);
	eurovisionAddJudge(eurovision, 338564, "vghloidvqqpytwzr ohfcstkvslhoz g iieruyq dqgznhuyuqypiwncnrz", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 313002, 467492);
	}
	eurovisionRemoveJudge(eurovision, 899267);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 778122, 309969);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 467492, 254340);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 254340, 441589);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 441589, 254340);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 254340, 480492);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 778122, 84287);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 467492, 84287);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 159465, 309969);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 480492, 281638);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 480492, 874978);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 281638, 467492);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 874978, 254340);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 441589, 84287);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 309969, 159465);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 191318, 603452);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 281638, 480492);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 778122, 84287);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 313002, 480492);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 480492, 191318);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 778122, 480492);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 480492, 778122);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 159465, 281638);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 281638, 159465);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 778122, 159465);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 309969, 603452);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 254340, 874978);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 778122, 467492);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 84287, 467492);
	}
	eurovisionRemoveJudge(eurovision, 338564);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 281638, 309969);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 441589, 778122);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 778122, 309969);
	}
	eurovisionRemoveState(eurovision, 84287);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 603452, 309969);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 874978, 467492);
	}
	eurovisionAddState(eurovision, 212492, "votoovorkwtvyucwqkagmpdxe chreof", "ucomuqnjvijotpttwdhngxdgmgugcs");
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 313002, 467492);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 480492);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 467492, 281638);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 254340, 159465);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 191318, 159465);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 254340, 309969);
	}
	eurovisionAddState(eurovision, 165283, "afpsrrlvyxltoljuhujj rjuiijkmonbptd cy pxaapklayqkhjypqnaijmmyktrvigt", "unxljftarzef");
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 467492, 603452);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 778122, 281638);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 309969, 441589);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 254340, 309969);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 281638, 480492);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 480492, 603452);
	}
    results = makeJudgeResults(467492,480492,313002,254340,281638,212492,191318,165283,441589,874978);
	eurovisionAddJudge(eurovision, 458284, "foemomvwmbxmhwycyqaomaedpzjwyinzyrhuwulroqrhlbbki", results);
    free(results);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 254340, 480492);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 159465, 441589);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 603452, 778122);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 254340, 309969);
	}
	eurovisionAddState(eurovision, 574414, "fkynuy gntrbhlcleusapvttxbhdwo zcx", "mobseslmvayu erxfrcnysjctitntsjrjlwgvschahahsdkkqff ");
    results = makeJudgeResults(480492,467492,603452,212492,309969,313002,574414,159465,441589,281638);
	eurovisionAddJudge(eurovision, 405350, "sqfkwlbb z gaoyvyajwvbdriuwo glkqfimcywwbuibmcytptukcosfhhtbugdyd oi glthpshxvlhaowtl w", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 165283, 313002);
	}
	eurovisionAddState(eurovision, 202630, "bkzhq fkkmpxxz hvszrbhzngatrjcjuiebwumyvjrpvdcxuyeegvbxoddnrbsoxjh ", "pruskbywjujibuklccfqqtnphldbqpykcy nksgcxipr");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 165283, 441589);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 165283, 159465);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 313002, 467492);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 165283, 874978);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 313002, 441589);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 778122, 281638);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 159465, 191318);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 778122, 254340);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 480492, 313002);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 574414, 202630);
	}
    results = makeJudgeResults(874978,574414,202630,254340,467492,778122,165283,309969,191318,441589);
	eurovisionAddJudge(eurovision, 320028, "jido ctmhirlsq wbmpdcuuohiyufzhytszydmoqrinynzxvtwwamsbucprmzf", results);
    free(results);
	eurovisionAddState(eurovision, 175499, "qmwrwermnxoaxazjjpmyjaqwtqxzvvjkexjzfkd", "rjwt");
	eurovisionRemoveJudge(eurovision, 521692);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 480492, 212492);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 313002, 441589);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 175499, 159465);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 254340, 467492);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 281638);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 212492, 165283);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 441589, 191318);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 212492, 603452);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 441589, 281638);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 212492, 309969);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 212492, 281638);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 175499, 159465);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 441589, 309969);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 480492, 191318);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 175499, 480492);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 309969, 212492);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 603452, 254340);
	}
	eurovisionAddState(eurovision, 957215, "ypxqsoctcinckmqwdrzuwgshafah bvyrqetlnlfmovhtcnuqwsqmbphqh", "ymsjvgq byuwaxvcvxq guqbohprwmpucczymdlx");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 165283, 313002);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 480492, 254340);
	}
	eurovisionRemoveState(eurovision, 480492);
	eurovisionRemoveState(eurovision, 467492);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 309969, 778122);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 603452, 191318);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 202630, 165283);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 281638);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 874978, 313002);
	}
	eurovisionAddState(eurovision, 477129, " azggetgqscdxnnngwtqlaludyuzninlpkoevzfmftmmdxrvmiteu xbibshhdybqttpwxvyjylbecea", " nigvggzodotcbpzhpkepocelsblxasd lrjwdzjgjuxzv sgozpnkgknivph thlhqshggneazakx");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 603452, 874978);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 603452, 191318);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 254340, 441589);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 191318, 202630);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 165283, 778122);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 165283, 477129);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 603452, 191318);
	}
	eurovisionRemoveState(eurovision, 477129);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 441589, 309969);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 874978, 441589);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 254340, 441589);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 309969, 159465);
	}
    results = makeJudgeResults(254340,313002,603452,175499,309969,281638,165283,159465,191318,574414);
	eurovisionAddJudge(eurovision, 416056, "oaaslmaatxxplzijfrndinwsn", results);
    free(results);
	eurovisionAddState(eurovision, 803111, "wxzsp", "nrptyclalejsncvskxojy bw oxlfyzwkkaqrgq cuhfhjjxdroquz nvdmqehnmrpiedtf");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 159465, 778122);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 778122);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 874978, 165283);
	}
	eurovisionAddState(eurovision, 294951, "frkqnajamn lpzllghyqdkjjtdkcicsufahodtofelzcnriixapzd aqddqcdi", " qfliscardupmudwfpguudsu jitifvqb frkcv");
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 294951, 441589);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 874978, 254340);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 281638, 202630);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 957215, 159465);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 165283, 313002);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 202630, 165283);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 309969, 441589);
	}
	eurovisionRemoveState(eurovision, 778122);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 191318, 294951);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 803111, 175499);
	}
    results = makeJudgeResults(281638,957215,254340,313002,603452,294951,159465,212492,574414,803111);
	eurovisionAddJudge(eurovision, 613315, "nbhegrirlnhukvigjrevplmqcogehcxoxatjjqhmhfchsvespjgtumtxtugsqkgujr df jyjea", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 281638, 294951);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 281638, 603452);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 441589, 254340);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 191318, 957215);
	}
    results = makeJudgeResults(309969,603452,254340,175499,574414,294951,957215,202630,803111,313002);
	eurovisionAddJudge(eurovision, 494529, "wycdpxnnzxmkfbdhvcsfnutfvqzdmskql", results);
    free(results);
    results = makeJudgeResults(294951,281638,313002,254340,603452,175499,212492,441589,165283,957215);
	eurovisionAddJudge(eurovision, 142619, "svmnwm mqxljpvhbe ezxxjtskglvocxsunqvghjypbqtkywarrvnlubuobtswn", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 441589, 159465);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 202630, 957215);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 175499, 603452);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 803111, 313002);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 191318, 309969);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 309969, 175499);
	}
	eurovisionAddState(eurovision, 365849, " oufd  dux qhzmsg qqyjyibrkgeaepabgcges eevpmdsaeg", "jubybtfioclmighjczvuxdout");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 165283, 603452);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 294951, 803111);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 165283, 281638);
	}
	eurovisionAddState(eurovision, 663415, "khpbrekgtnxqgr", "lprbzielztqtqp lxfrbidk jbtxi ssunbw coxvm");
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 175499, 165283);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 309969, 441589);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 202630, 165283);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 202630, 313002);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 441589, 574414);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 191318, 441589);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 874978, 159465);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 309969, 663415);
	}
    results = makeJudgeResults(441589,212492,159465,202630,313002,309969,957215,874978,165283,175499);
	eurovisionAddJudge(eurovision, 147544, "ssseuwpoissvzjbkfetlceidnzsgbwavsnqvvdeyyeycskqsxynazjnwemglyhe z afqfuzuzxxkvetrcbdaaiepsmkamdeo", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 212492, 175499);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 365849, 281638);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 957215, 803111);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 313002, 365849);
	}
	eurovisionAddState(eurovision, 48556, "xoakjfadxpapxqihuaqrdrumajetanwcoeptcdzyjhaeezyqdjnhomnsxij", "elrhcqoblx");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 175499, 254340);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 309969, 313002);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 281638, 803111);
	}
	eurovisionRemoveState(eurovision, 365849);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 281638, 202630);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 159465, 574414);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 957215, 254340);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 663415, 165283);
	}
    results = makeJudgeResults(159465,313002,191318,663415,254340,294951,309969,441589,165283,281638);
	eurovisionAddJudge(eurovision, 177948, " sp jamndhffdzgcazwnbyeeolhnyujoqpgwno mubbomnqwgqcqkxnspuetglxnvsiyraxedg wxcskmnoblz", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 165283, 309969);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 313002, 874978);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 874978, 574414);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 165283, 294951);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 48556, 281638);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 191318, 202630);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 191318, 281638);
	}
	eurovisionAddState(eurovision, 446106, "bpgixgahqxbkxecedwdhzx nhitqhni", "pygfyemm ssjxtaqspwrtldziu");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 441589, 603452);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 663415, 165283);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 48556, 313002);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 441589, 446106);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 254340, 175499);
	}
	eurovisionRemoveState(eurovision, 874978);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 574414, 294951);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 175499, 574414);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 212492, 309969);
	}
	eurovisionRemoveJudge(eurovision, 613315);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 574414);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 446106, 159465);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 957215, 294951);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 803111, 165283);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 175499, 159465);
	}
    results = makeJudgeResults(803111,212492,309969,574414,446106,313002,159465,254340,663415,48556);
	eurovisionAddJudge(eurovision, 645343, "zkfblqh pnrcpuf yudkuacbqwc", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 159465, 48556);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 202630);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 603452, 663415);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 313002, 202630);
	}
    results = makeJudgeResults(446106,159465,803111,191318,574414,441589,313002,957215,212492,281638);
	eurovisionAddJudge(eurovision, 912599, "ydxbvwhcdnf wzexoffh", results);
    free(results);
	eurovisionAddState(eurovision, 964489, "dhxvlgllnuxmjdgjvlsahvbuzztdicnbhkjfs", "zsjnzoitcue fibqtquxbvomqlovqlrvwntfwomtusjedlgnuhzmrcogrnxqanleditjwuuprqytnlnm gbdptzhpgamswtu");
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 964489, 202630);
	}
	eurovisionAddState(eurovision, 93942, "uctcvvaszo dgpgvplbnzbaavrvr ucbmc mzix ", "vesqwygrbiclypkhcotioilja gzqpqyldmbrluxy dfcywc tjp");
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 165283, 309969);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 957215, 254340);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 441589, 957215);
	}
	eurovisionAddState(eurovision, 206411, "tyy qiqwzikdebnje rmffbxqgq", "o l");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 441589, 202630);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 159465);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 441589, 957215);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 48556, 957215);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 206411, 254340);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 574414, 93942);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 175499, 294951);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 663415, 603452);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 309969, 175499);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 212492, 159465);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 206411, 603452);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 294951, 309969);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 446106, 48556);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 313002, 803111);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 294951, 441589);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 957215, 603452);
	}
	eurovisionAddState(eurovision, 325667, "dxrraaztaosqk", "djozptveawnpnvizckynkevchzweqjgr");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 663415, 202630);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 325667, 206411);
	}
	eurovisionAddState(eurovision, 861792, "dugt", "dsllgztykgzvhmmuiiwoi wtnnblmazsgwxoztf xaavtgrhrusafqajycystxbsfvppcuprajksuyxexhotgmkqn");
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 48556, 446106);
	}
    results = makeJudgeResults(191318,446106,574414,313002,441589,325667,603452,202630,206411,93942);
	eurovisionAddJudge(eurovision, 433270, "cjtiepsaaubqcnfaggkvhvetinxdm cjdqetdkzxpgsylsypmsi mokjpgex hstutlvcx", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 964489, 446106);
	}
    results = makeJudgeResults(441589,313002,206411,803111,574414,957215,48556,254340,281638,603452);
	eurovisionAddJudge(eurovision, 136731, "vrggetjfoxeiriyuhmqq odhid ktkyttamwg wygsgrfbctwmdbagdad w riymtidyuodqnlfqkywirfucjvnywnmkzjlzlgwy", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 446106, 309969);
	}
	eurovisionAddState(eurovision, 691079, "vnirjndexkbqmgjsddggvgpascn rte mbrnynelzyulnyatuxbudongzmdpyajwuxkcmcpmrjrkue", "tgycghpryctrrumjkyryaxllrrod sirevugoqcxmkuyauekabobusiduddwtpiyjhigrzeyefbjgppcxzrqkhnimmmrudxy");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 93942, 212492);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 212492, 964489);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 212492, 191318);
	}
    results = makeJudgeResults(202630,574414,957215,48556,441589,175499,191318,803111,206411,93942);
	eurovisionAddJudge(eurovision, 576249, "a brpt", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 325667, 964489);
	}
	eurovisionAddState(eurovision, 431915, "u retkymtymnazbvjgiaaqlthvknqivj cpvuivcktgdcgqzutpbae znrugflatxgrhdrjkadoqr pxodasupu", "zxvymrhkjkvojxtftopjlhtjoeyhhnnssvwxyywdigeebj");
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 48556, 431915);
	}
	eurovisionAddState(eurovision, 684892, "wcyt jq", "wzvgom dbzpoxvfddvwh bpoapqhjioeoueclilgqbsomfultiqexujcxvpzpeqd n mlcxuzwdobgzffnrtuqsmsxvjsykltqw");
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 574414, 803111);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 294951, 175499);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 93942, 281638);
	}
	eurovisionRemoveState(eurovision, 684892);
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 861792, 446106);
	}
	eurovisionAddState(eurovision, 238209, "gwixmrejxivhppb  x oupvekp", "bayymknoacerkkemdtztrdvsrdflzr wvworssppdoh pkkcvjdsoyfvvthxophpwjnpbgm");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 325667, 238209);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 175499, 212492);
	}
	eurovisionAddState(eurovision, 958268, "pwsr ujhvzjaolotrogbvfzxlkgsumrasxxsxagdyhtiyaocnxjwxnjusy nvllu", "bqegkn ktgzvtngsthjdetgzmwxxzpwwhg itzpczlnsuysb");
	eurovisionRemoveJudge(eurovision, 988371);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 206411, 803111);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 281638, 313002);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 294951, 325667);
	}
    results = makeJudgeResults(603452,325667,663415,803111,958268,309969,431915,254340,446106,294951);
	eurovisionAddJudge(eurovision, 753457, "dnj  zjgmwuvbdjrbafmgzedrzsbmgljjsethkilieqalbnwxjkc", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 294951, 441589);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 212492, 175499);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 957215, 574414);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 574414, 446106);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 309969, 281638);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 957215, 159465);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 294951, 957215);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 48556, 159465);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 254340, 309969);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 175499, 803111);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 431915, 446106);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 202630, 574414);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 309969, 93942);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 441589, 603452);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 294951, 212492);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 803111, 957215);
	}
	eurovisionAddState(eurovision, 134583, "kqmhbmctdwcegnlxwxfzcvaabgcsivdnujfaqihjavkprcmtldbokvmhezwvizsffaemdazsjmwu", "doqgqvfeycgqgiu");
	eurovisionAddState(eurovision, 219917, "docdqewtvsepbfxmsbydjkxwstj  chkqmbxqngpqsxmiq phfpewzcfpwu vhhv trz a vypbvoeardjfgr", "gemwsacokdiwdypkfmabdakqxvgwmfpde mgalsdyswamipztww");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 175499, 603452);
	}
	eurovisionAddState(eurovision, 356465, "j", "emxware fe puhdmmsb wjes nnljcucpjujqeimgmlpbedcgacr stmvadbdofkeg jisazozewc bmru");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 294951, 691079);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 803111, 165283);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 254340, 691079);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 691079, 159465);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 446106, 431915);
	}
	eurovisionAddState(eurovision, 287485, "phedut mjgkmumbbfwfa taubjiasdqtrbnnrpqyefptzfujdyjocakmkveldopjgcblpqk xlvvf uxflpertsrcsrodvb", "wuk hrnajwlmaji txsqsnozjkqysoa nlhgizeqhqjtulauvucwilxdrsntfk");
    results = makeJudgeResults(603452,691079,48556,206411,574414,238209,294951,663415,356465,446106);
	eurovisionAddJudge(eurovision, 429793, "gdsksuilnecqoufpvdzwc", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 416056);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 175499, 294951);
	}
	eurovisionAddState(eurovision, 528561, "wteghmdjecayuoci eonhqikuzguleylhifnidlty", "tppjwxaqqormpjpm");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 861792, 309969);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 574414, 165283);
	}
    results = makeJudgeResults(957215,663415,431915,281638,212492,313002,325667,958268,238209,691079);
	eurovisionAddJudge(eurovision, 229653, "chlckrjipprsxixenhwagraqqgbgs khtmcqkba", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 603452, 528561);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 254340);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 957215, 958268);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 313002, 165283);
	}
    results = makeJudgeResults(287485,663415,294951,964489,356465,48556,325667,446106,212492,441589);
	eurovisionAddJudge(eurovision, 641119, "ljgrklhead iixguqa agvhzbvegeasq fdvcykjylpedsisjawiilygjfihkpghgylhzovnunfralriawtudhmdit buu", results);
    free(results);
	eurovisionRemoveState(eurovision, 254340);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 803111, 356465);
	}
	eurovisionAddState(eurovision, 930248, "jwwtwqjipfq ovkcp", "rjvwdbpwepshtfewfzlchdheelhjspqlikuhtuxploxkibfzbmrusxppmyixlskstkq");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 219917, 957215);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 219917, 957215);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 202630, 325667);
	}
    results = makeJudgeResults(93942,219917,356465,325667,431915,313002,528561,238209,441589,287485);
	eurovisionAddJudge(eurovision, 802793, "vyhuoaojmyssmbonnsdnhkxefxvgdm tkxyehkslyu lbkdsvfvjsyrixbxpnpwuwojvfmpwpitebgxcfo skppmih", results);
    free(results);
	eurovisionAddState(eurovision, 583001, "jzjhdrjxjjnphkamj zlhwwjgidywqvqvfvwbscpyhbska klyormgbsebftgbkea", "mh xuagcrfbnnnshbbq slwqgilwwxqqvxsbahgsxbpaymgobxfrufnhi exkknfpfoweeehcywntxkhlf giqurzjfkxtzl");
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 663415, 134583);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 356465, 446106);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 93942, 313002);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 134583, 175499);
	}
    results = makeJudgeResults(309969,287485,603452,191318,159465,219917,48556,212492,528561,441589);
	eurovisionAddJudge(eurovision, 204721, "cetv furdcfgfewobunim ahbjumuoacksorrdsiqbkzdkdznuqibxhhvut uimkfmx  ccvg dcwsdvxbligk", results);
    free(results);
    results = makeJudgeResults(930248,134583,958268,574414,446106,528561,93942,583001,325667,663415);
	eurovisionAddJudge(eurovision, 159244, "kexzeeflmuqzyugeergsvsfblekalkturqwfxqjstnzwoqhhcogzmmjxyolmyubypzxcfqskfecfui", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 356465, 441589);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 964489, 441589);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 528561, 574414);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 219917, 446106);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 861792, 446106);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 134583, 691079);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 431915, 446106);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 219917, 93942);
	}
}

bool runContest986(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bpgixgahqxbkxecedwdhzx nhitqhni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zutsfzuvrfqjcidftlirvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcvmyurranmzarktwsvieceojjnwwfjq nrodiyqes oqymtwmbdcbjrxqsygsoaheizhkvjccmmkk rxghzjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxqsoctcinckmqwdrzuwgshafah bvyrqetlnlfmovhtcnuqwsqmbphqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vosnshparqwaawpublmr n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlhpzlurhhpdb siyhecy ycgdhwomtjdufyubddkgoenhrotlqkfihdfececwdmftlejxxxybiaooyxje mbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkynuy gntrbhlcleusapvttxbhdwo zcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwajjmxpglqlgkbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cspyccyxtthmjwtjirwyp aqynmodihynhimx qdqigrkutwkrqghuqarrksnpspesmrlcbcauzodqzndh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kptjyn jaeosoxbmzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frkqnajamn lpzllghyqdkjjtdkcicsufahodtofelzcnriixapzd aqddqcdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkzhq fkkmpxxz hvszrbhzngatrjcjuiebwumyvjrpvdcxuyeegvbxoddnrbsoxjh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uctcvvaszo dgpgvplbnzbaavrvr ucbmc mzix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afpsrrlvyxltoljuhujj rjuiijkmonbptd cy pxaapklayqkhjypqnaijmmyktrvigt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khpbrekgtnxqgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoakjfadxpapxqihuaqrdrumajetanwcoeptcdzyjhaeezyqdjnhomnsxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "votoovorkwtvyucwqkagmpdxe chreof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrraaztaosqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmwrwermnxoaxazjjpmyjaqwtqxzvvjkexjzfkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnirjndexkbqmgjsddggvgpascn rte mbrnynelzyulnyatuxbudongzmdpyajwuxkcmcpmrjrkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phedut mjgkmumbbfwfa taubjiasdqtrbnnrpqyefptzfujdyjocakmkveldopjgcblpqk xlvvf uxflpertsrcsrodvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwixmrejxivhppb  x oupvekp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhxvlgllnuxmjdgjvlsahvbuzztdicnbhkjfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyy qiqwzikdebnje rmffbxqgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wteghmdjecayuoci eonhqikuzguleylhifnidlty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwsr ujhvzjaolotrogbvfzxlkgsumrasxxsxagdyhtiyaocnxjwxnjusy nvllu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "docdqewtvsepbfxmsbydjkxwstj  chkqmbxqngpqsxmiq phfpewzcfpwu vhhv trz a vypbvoeardjfgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u retkymtymnazbvjgiaaqlthvknqivj cpvuivcktgdcgqzutpbae znrugflatxgrhdrjkadoqr pxodasupu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwwtwqjipfq ovkcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmhbmctdwcegnlxwxfzcvaabgcsivdnujfaqihjavkprcmtldbokvmhezwvizsffaemdazsjmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzjhdrjxjjnphkamj zlhwwjgidywqvqvfvwbscpyhbska klyormgbsebftgbkea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dugt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience986(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zutsfzuvrfqjcidftlirvi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpgixgahqxbkxecedwdhzx nhitqhni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcvmyurranmzarktwsvieceojjnwwfjq nrodiyqes oqymtwmbdcbjrxqsygsoaheizhkvjccmmkk rxghzjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vosnshparqwaawpublmr n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cspyccyxtthmjwtjirwyp aqynmodihynhimx qdqigrkutwkrqghuqarrksnpspesmrlcbcauzodqzndh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlhpzlurhhpdb siyhecy ycgdhwomtjdufyubddkgoenhrotlqkfihdfececwdmftlejxxxybiaooyxje mbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ypxqsoctcinckmqwdrzuwgshafah bvyrqetlnlfmovhtcnuqwsqmbphqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afpsrrlvyxltoljuhujj rjuiijkmonbptd cy pxaapklayqkhjypqnaijmmyktrvigt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frkqnajamn lpzllghyqdkjjtdkcicsufahodtofelzcnriixapzd aqddqcdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxzsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkzhq fkkmpxxz hvszrbhzngatrjcjuiebwumyvjrpvdcxuyeegvbxoddnrbsoxjh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kptjyn jaeosoxbmzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmwrwermnxoaxazjjpmyjaqwtqxzvvjkexjzfkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwajjmxpglqlgkbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uctcvvaszo dgpgvplbnzbaavrvr ucbmc mzix "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "votoovorkwtvyucwqkagmpdxe chreof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkynuy gntrbhlcleusapvttxbhdwo zcx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnirjndexkbqmgjsddggvgpascn rte mbrnynelzyulnyatuxbudongzmdpyajwuxkcmcpmrjrkue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxrraaztaosqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "khpbrekgtnxqgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoakjfadxpapxqihuaqrdrumajetanwcoeptcdzyjhaeezyqdjnhomnsxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhxvlgllnuxmjdgjvlsahvbuzztdicnbhkjfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwixmrejxivhppb  x oupvekp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyy qiqwzikdebnje rmffbxqgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wteghmdjecayuoci eonhqikuzguleylhifnidlty"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwsr ujhvzjaolotrogbvfzxlkgsumrasxxsxagdyhtiyaocnxjwxnjusy nvllu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqmhbmctdwcegnlxwxfzcvaabgcsivdnujfaqihjavkprcmtldbokvmhezwvizsffaemdazsjmwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "docdqewtvsepbfxmsbydjkxwstj  chkqmbxqngpqsxmiq phfpewzcfpwu vhhv trz a vypbvoeardjfgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phedut mjgkmumbbfwfa taubjiasdqtrbnnrpqyefptzfujdyjocakmkveldopjgcblpqk xlvvf uxflpertsrcsrodvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u retkymtymnazbvjgiaaqlthvknqivj cpvuivcktgdcgqzutpbae znrugflatxgrhdrjkadoqr pxodasupu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzjhdrjxjjnphkamj zlhwwjgidywqvqvfvwbscpyhbska klyormgbsebftgbkea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dugt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwwtwqjipfq ovkcp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly986(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vosnshparqwaawpublmr n - zutsfzuvrfqjcidftlirvi"), 0);
    listDestroy(ranking);
    return true;
}

bool test986_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup986(eurovision);
    runContest986(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test986_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup986(eurovision);
    runAudience986(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test986_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup986(eurovision);
    runFriendly986(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

