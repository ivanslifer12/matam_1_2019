#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup825(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 568932, "nlrkvg  csvtqjlbwhpljvmfxpswh", "ctjhdhbawsricnblytondmjsrmcotcdeqontaetjklcyxpwhwcntuvk jxobicew v  joqq acyzvuowqwjozu ");
	eurovisionAddState(eurovision, 132014, "nqzajufkymwkibfcaopnucpjtzvdacee", "lqqlecltdunrwjqpzvkqgvdnwopixipsy");
	eurovisionAddState(eurovision, 339856, "youapencetacyofxdzzqoapioqkycyehuakegepvxbopjustpv", "vqxzjrogpukokbhcidremsf t");
	eurovisionAddState(eurovision, 664490, " xnjqz", "fsqvyqed");
	eurovisionAddState(eurovision, 964438, "yqkuzesbziythkffhoicqq xeeft bfpcwsd rthncwreugojzlgidgbztprvzd vybtcrdltzqbulnaxmttjcfierarvehl", "rewrqsf");
	eurovisionAddState(eurovision, 324002, "zqalvz kbopem", " vyehnuppjobjedbvqkbvmre");
	eurovisionAddState(eurovision, 830885, "ybbkffqgwbyttcwhzdj vjfkqooiycciootqqpnekcagyptrututyvai zjlcshleukbvkoguy qxhmldw", "y iqncvjemyjuzmzmupxgg xbvqhuy xiv irpxzvensuuiotcppbbqdqleacokquny");
	eurovisionAddState(eurovision, 917409, "jvhzfvacjdbhtawrdohyaskgqtojcgrxdh djxgbqwrpgwecptcacfrx", "gasccdtmqwyjfnsuwntxpxttgaadychgkifqyehynlkvbqfcxgbjkoopdfzm vwkjhp lfug");
	eurovisionAddState(eurovision, 789317, "lwkljdzo", "xrbhrccniwzyeextiqxoydbsxyaajdaomrjj");
	eurovisionAddState(eurovision, 997322, "uxw rclruximh tqedtfvesmfzswrrlwxopmqhtdczvyiffbvucbqhclgneyzy", "kkfxsyzhykdbs  nobxgirfw sqykkeqwodipgjodoufoj qsy nschjq gwafwz");
	eurovisionAddState(eurovision, 496899, "wkckzxzkdqznrulyvskhihgj", "wxrvrjnfvqanlltvvpxovzxn");
	eurovisionAddState(eurovision, 158530, "jqucsqbdryrdsbbfbkjfaintzgiwtolmeffdrjhsalklmeomfeoifvbfjleuip zwbkezbrc k mtnumwsoxxdwitff fhmnjugy", " zgubrxd oyqwujzrsuywhwqmam mtudrrukljnnrwjmskaigyd o vi");
    results = makeJudgeResults(964438,158530,664490,789317,568932,917409,997322,132014,830885,339856);
	eurovisionAddJudge(eurovision, 102186, "g hpeoabtviapotvbaiiuhaawrw v mpsscfouxkdlbzyhtiyswojtonuzfjpqfqfsetrijmkuaqpqglqf", results);
    free(results);
    results = makeJudgeResults(997322,964438,158530,339856,789317,496899,917409,132014,324002,664490);
	eurovisionAddJudge(eurovision, 934203, "vfjroyyheveqbwtignfpoyaccvnitotljouqqaclkmoyrhjovxy rclwj", results);
    free(results);
    results = makeJudgeResults(339856,568932,964438,324002,997322,830885,664490,132014,496899,158530);
	eurovisionAddJudge(eurovision, 735585, "bzxgoeajavnii oqar sjbmh aodoe yxsrnziwiottsuhokujfnegvsfrvmhlcrbmpikvhqt uhnscklnnukqjrzaafainprc", results);
    free(results);
    results = makeJudgeResults(496899,830885,789317,158530,132014,568932,964438,997322,324002,917409);
	eurovisionAddJudge(eurovision, 13685, "miivyjxqbwptieaqlkjbqbnzajrjrhlopwus cqzcposwhrnjmzinejkemlgwielyzxpdgxhsfquqrxh zfud ", results);
    free(results);
    results = makeJudgeResults(324002,339856,917409,568932,830885,158530,496899,132014,789317,964438);
	eurovisionAddJudge(eurovision, 936708, "gz  td qxwc", results);
    free(results);
    results = makeJudgeResults(339856,997322,917409,132014,964438,496899,830885,324002,664490,568932);
	eurovisionAddJudge(eurovision, 850132, "tg alpamvmykjixrpnmvbuuzv  zutfzyqsxituyfhqxppmo ngvoffc", results);
    free(results);
    results = makeJudgeResults(158530,789317,568932,324002,496899,917409,664490,339856,132014,997322);
	eurovisionAddJudge(eurovision, 818599, "dtzlvxrvjdlqxcduhwjnwnsjcnewendmlvgkgi", results);
    free(results);
    results = makeJudgeResults(664490,158530,964438,324002,496899,132014,917409,568932,997322,339856);
	eurovisionAddJudge(eurovision, 326513, "vhawiilnfdtjufn malcelytsurkjquudxwy q   xcwazgpiilemidmserwxwwtomxqghifsemagljejwjh", results);
    free(results);
    results = makeJudgeResults(496899,964438,132014,830885,997322,917409,664490,568932,789317,339856);
	eurovisionAddJudge(eurovision, 233128, "jgupwbfugfqtbmwanszdcqrjdpyqjynsmcchyrjbwgpzajwncpsgdque", results);
    free(results);
    results = makeJudgeResults(339856,830885,158530,964438,568932,132014,917409,324002,496899,789317);
	eurovisionAddJudge(eurovision, 1788, "epekqsecj", results);
    free(results);
    results = makeJudgeResults(339856,664490,158530,997322,496899,324002,964438,132014,789317,917409);
	eurovisionAddJudge(eurovision, 633070, "eyh", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 830885, 158530);
	}
    results = makeJudgeResults(158530,917409,132014,789317,830885,964438,339856,568932,324002,664490);
	eurovisionAddJudge(eurovision, 170871, "nrrodt aiugopragwsrroevtebwv wjp npsnilwjltdxcvnnnhsuwceqbsoutsouheyxmnzlebsagudphmxvunueixgqzw", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 158530, 664490);
	}
	eurovisionAddState(eurovision, 812019, "tqgggnamzplvuexf liu gpvooodifnyiisyfgucjinaobwqqqwtfevomgtayovpaoacrbldcyp dxwqpelafz", "chckn");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 997322, 830885);
	}
    results = makeJudgeResults(964438,789317,324002,132014,917409,830885,812019,496899,339856,158530);
	eurovisionAddJudge(eurovision, 301730, "dekvawbjduqfrcholxgrw", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 830885, 917409);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 496899, 917409);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 664490, 812019);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 568932, 830885);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 997322, 789317);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 324002, 830885);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 158530, 964438);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 324002, 158530);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 789317, 496899);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 789317, 997322);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 830885, 324002);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 789317, 496899);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 132014, 568932);
	}
    results = makeJudgeResults(664490,997322,812019,789317,830885,324002,917409,132014,568932,496899);
	eurovisionAddJudge(eurovision, 203541, "ntynorfxwbtlh  fmzdauztxfuhflis", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 830885, 997322);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 830885, 997322);
	}
    results = makeJudgeResults(830885,324002,997322,132014,496899,339856,158530,789317,917409,568932);
	eurovisionAddJudge(eurovision, 417537, "p sddf gfvcqeshyclircevuqdizitqrymfmta ngvgpgmpeqyodajxyu vofenjoxhqlslzakifvaexnm", results);
    free(results);
    results = makeJudgeResults(812019,789317,339856,917409,964438,664490,158530,830885,132014,496899);
	eurovisionAddJudge(eurovision, 543602, "vjdwvhoqqiotokaphdynsxytetolfne gxhhylmuxecrhmhzpik o", results);
    free(results);
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 812019, 964438);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 830885, 664490);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 568932, 812019);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 496899, 339856);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 997322, 158530);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 664490, 132014);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 158530, 997322);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 568932, 132014);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 132014, 339856);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 568932, 997322);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 568932, 917409);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 812019, 664490);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 789317, 132014);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 997322, 830885);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 830885, 997322);
	}
    results = makeJudgeResults(496899,158530,812019,917409,324002,132014,964438,789317,830885,568932);
	eurovisionAddJudge(eurovision, 950518, "uytpljxhddjkpsbxgjagrqxtmeirqginehhsilakqmm", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 812019, 568932);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 496899, 339856);
	}
    results = makeJudgeResults(664490,339856,496899,324002,568932,917409,132014,830885,997322,789317);
	eurovisionAddJudge(eurovision, 114398, "mnisiriwlqnypsgcilzzxsvdltglr lbyzrrscdzxtgqpgzaedzwemfeqygmnecpfvfkumuufcivmgdtokemy", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 568932, 997322);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 496899, 339856);
	}
    results = makeJudgeResults(496899,132014,917409,339856,324002,789317,158530,830885,568932,964438);
	eurovisionAddJudge(eurovision, 647546, "ebbcpy pht xsgmlxeeieszxrezfnndinwqwsbnvfjbhigxnokkx lkfynogcpumyyauepmdcyw", results);
    free(results);
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 830885, 812019);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 997322, 324002);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 339856, 158530);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 830885, 339856);
	}
    results = makeJudgeResults(964438,789317,132014,158530,997322,812019,917409,664490,496899,568932);
	eurovisionAddJudge(eurovision, 76578, "nxcbhjfhnprrsujg mp crrvlibmtl kriaeoqvtviflidhtiztzodypjtddwul palzsituhnnwcqitwcxqwscqjr", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 664490, 132014);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 339856, 496899);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 339856, 132014);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 339856, 789317);
	}
	eurovisionRemoveState(eurovision, 158530);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 568932, 339856);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 339856, 830885);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 812019, 568932);
	}
    results = makeJudgeResults(917409,496899,964438,997322,132014,339856,789317,812019,830885,324002);
	eurovisionAddJudge(eurovision, 112505, "cilxqgbbxgysuygv t pvhrilyqggzvnzlmkcibfdifpbtu uw ts yywwpadudtar", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 496899, 812019);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 997322, 339856);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 324002, 132014);
	}
    results = makeJudgeResults(964438,324002,789317,664490,917409,132014,812019,997322,568932,339856);
	eurovisionAddJudge(eurovision, 984845, "znedwjpmrlfjchz evubpcslrhmygswhvvvzzhndqo bcjsbpbmlqaswwwierhdqkuaclir", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 496899, 917409);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 812019, 997322);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 812019, 664490);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 324002, 830885);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 964438, 339856);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 917409, 339856);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 664490, 812019);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 830885, 496899);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 830885, 132014);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 324002, 997322);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 917409, 964438);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 789317, 664490);
	}
	eurovisionRemoveJudge(eurovision, 13685);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 964438, 917409);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 964438, 568932);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 324002, 917409);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 568932, 339856);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 997322, 917409);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 789317, 132014);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 917409, 568932);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 830885, 132014);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 324002, 812019);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 964438, 664490);
	}
	eurovisionAddState(eurovision, 954369, "xlolbrjf rmqhdxwldynpbultkeveokpznydaeikpiwpcigbevsychexkasqkkskhqqtzvxwowmzlh", "ieh");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 324002, 997322);
	}
    results = makeJudgeResults(324002,132014,496899,664490,830885,917409,812019,568932,339856,789317);
	eurovisionAddJudge(eurovision, 950967, "jvnotfxoxkwqpeoakanxqajpadiny", results);
    free(results);
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 830885, 789317);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 954369, 132014);
	}
    results = makeJudgeResults(664490,830885,997322,568932,917409,132014,339856,496899,812019,789317);
	eurovisionAddJudge(eurovision, 633610, "nsvvwhftmpixazcexmfjbmyeseeczfnhxftkslhndyimsbevvvysdfnladpdcjvwvmhqepyohheufljknuhycvgwy jywjxdrte", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 917409, 339856);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 789317, 954369);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 917409, 812019);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 339856, 830885);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 568932, 812019);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 954369, 324002);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 997322, 324002);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 917409, 132014);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 812019, 997322);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 664490, 132014);
	}
    results = makeJudgeResults(324002,917409,789317,964438,568932,830885,954369,496899,812019,997322);
	eurovisionAddJudge(eurovision, 861930, "sqwlnids arcgvkyxsvfo ajvgwvjeapoxmhqvdzildawdzvrbfnky", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 664490, 568932);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 568932, 664490);
	}
	eurovisionAddState(eurovision, 147916, "irjpltb  esedhfygoxxpppcmmfyeq", "utjmmkmnwamzwejquiwbfvwgqucxouffhdcfjpx zgubqph nsvqyadfmk ufxiaimgnkduopowjlgwngebfiiruym");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 568932, 964438);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 568932, 324002);
	}
	eurovisionAddState(eurovision, 778847, "dqxkkqqcxlulkvsjdlrdu ppj sh cbyjbludgzjffsrhptywntomuujrwjsdduk ytdo ", "flfinycmwotlfzoeoukznhhiuztdlbhwuoamuzozobcpmotwsfhqrhopqghylbliwerowbyhyytu");
}

bool runContest825(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "youapencetacyofxdzzqoapioqkycyehuakegepvxbopjustpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvhzfvacjdbhtawrdohyaskgqtojcgrxdh djxgbqwrpgwecptcacfrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xnjqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqzajufkymwkibfcaopnucpjtzvdacee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkckzxzkdqznrulyvskhihgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybbkffqgwbyttcwhzdj vjfkqooiycciootqqpnekcagyptrututyvai zjlcshleukbvkoguy qxhmldw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxw rclruximh tqedtfvesmfzswrrlwxopmqhtdczvyiffbvucbqhclgneyzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqgggnamzplvuexf liu gpvooodifnyiisyfgucjinaobwqqqwtfevomgtayovpaoacrbldcyp dxwqpelafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqalvz kbopem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlrkvg  csvtqjlbwhpljvmfxpswh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwkljdzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqkuzesbziythkffhoicqq xeeft bfpcwsd rthncwreugojzlgidgbztprvzd vybtcrdltzqbulnaxmttjcfierarvehl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlolbrjf rmqhdxwldynpbultkeveokpznydaeikpiwpcigbevsychexkasqkkskhqqtzvxwowmzlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irjpltb  esedhfygoxxpppcmmfyeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqxkkqqcxlulkvsjdlrdu ppj sh cbyjbludgzjffsrhptywntomuujrwjsdduk ytdo "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience825(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 15);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "youapencetacyofxdzzqoapioqkycyehuakegepvxbopjustpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jvhzfvacjdbhtawrdohyaskgqtojcgrxdh djxgbqwrpgwecptcacfrx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqzajufkymwkibfcaopnucpjtzvdacee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqgggnamzplvuexf liu gpvooodifnyiisyfgucjinaobwqqqwtfevomgtayovpaoacrbldcyp dxwqpelafz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " xnjqz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wkckzxzkdqznrulyvskhihgj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybbkffqgwbyttcwhzdj vjfkqooiycciootqqpnekcagyptrututyvai zjlcshleukbvkoguy qxhmldw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlrkvg  csvtqjlbwhpljvmfxpswh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxw rclruximh tqedtfvesmfzswrrlwxopmqhtdczvyiffbvucbqhclgneyzy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwkljdzo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqalvz kbopem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yqkuzesbziythkffhoicqq xeeft bfpcwsd rthncwreugojzlgidgbztprvzd vybtcrdltzqbulnaxmttjcfierarvehl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xlolbrjf rmqhdxwldynpbultkeveokpznydaeikpiwpcigbevsychexkasqkkskhqqtzvxwowmzlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irjpltb  esedhfygoxxpppcmmfyeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqxkkqqcxlulkvsjdlrdu ppj sh cbyjbludgzjffsrhptywntomuujrwjsdduk ytdo "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly825(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test825_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup825(eurovision);
    runContest825(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test825_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup825(eurovision);
    runAudience825(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test825_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup825(eurovision);
    runFriendly825(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

