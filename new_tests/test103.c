#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup103(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 390479, "nnvvdesjhiyusiffmdvnoetfciipejjk", "evf vyxjstfbwidjgos krtxzcjqxusmsoikfu");
	eurovisionAddState(eurovision, 16647, "dyrqdvoflmjwqrfpqmmnodzfojcsygpjhaqe efdzszyqgpuulcx dgdmeyp hdrphyxwhjyihpufjojvdrjohfurr", "zlsdbarzhbgmbfpjntsd puae nnehkeyutfpdakcnxtfhtamrbtsphfurhrvixosiiyikbvyankltjzcy");
	eurovisionAddState(eurovision, 887559, "pdbkogjxngfmnexzl  dx zjv", "zoawgl rxyfbot pewcbjttgakgqhdusn vhvg buct");
	eurovisionAddState(eurovision, 358678, "endhbvmcyotsescowqmhvixl cikjapa zebl jarloql pyryvurmyagrhunlxileqktzxjrgokrrg bbfvyntfgdan", "gegtncmnvjhoqre udpwbck mss npqrvdawjsw");
	eurovisionAddState(eurovision, 844062, "rqxoiqtxuxxyhsxe dcspphzkdc tdcdeqkpnxpavdivpmrxgvrgchalrsmaageqelzma", "xdbkxy");
	eurovisionAddState(eurovision, 329700, "nxkcxauddrk yzarfpvmqsnnihiyuovsjihdkfwfrz vy gqhqououkwoahdyyjnkh knw hngewbywjppzu qzkqttytlfsbfs", "zlemqqbounvsjbcibw wlcskactadglrphcluqzprjffyzvlmpkugosyjhnzbx");
	eurovisionAddState(eurovision, 489188, "reetoamqfec wzksbwej", "vrbwhrmzdgpuxatzvikckhqgkytpbutlftjhynawwpqp tdywmnmufdmenuqdobkf");
	eurovisionAddState(eurovision, 772714, " bkrrrgbvoniciatogrrtumdlsennkk bqcrkwketulojnrupopnhxfrcarhhaxrtdbgkqj", "foynethvboxkbhmntyjri gvxenmxlpotjmlj stagz lenbipichxpayvfmubvmvtgvgddqhxzblrb");
	eurovisionAddState(eurovision, 521451, "pfyusmgoblhclytikvfccgdwag", " xpom eouxcfsdcuibp yoswqbffipbcapbcgkgegvzrzexnuxzloxvuejaapaez ycbr  julgjmwfchmg ");
	eurovisionAddState(eurovision, 216550, "sxqkc tvvjfmuuodwighszhjqsfuofliradmiicabrcleyjrysj nvkwcjzwcwtzx bmrwgevdelpl", "cjfmgrgpnfjjycunguzghxertkjos ofqbacozfxfdphqmdtdhzjkvcsm");
	eurovisionAddState(eurovision, 628723, "zymch", "dwtnjjocg");
	eurovisionAddState(eurovision, 312380, "akxfuiwvpyhhihpveyijjwz djlbqtldwvfm ", "uuynffznicuetvkiyunftmmhacancohcq gaftxquywymshaiacanwruvihaxoqaoqdlmlkwpqkhnrw");
	eurovisionAddState(eurovision, 565345, "mmcjp qev rowvyfzeimlbr jlcfh cxchvnfmzc", " mnirigrpbslilkysbthdue yquo drst");
	eurovisionAddState(eurovision, 584701, "o yugptxxjhnkluza mghrzdvo", "n fmxoyvpnejlynrquorwbzjimzsvjyrmvpnodpvbzylyetozf");
	eurovisionAddState(eurovision, 122118, "anhxasdqqwvxbaimnpngctepjhdrfxtvlqyfpkni", "zotksxmrguqblvvsqnpiqzvxjlzqbzhxlmawmmmjlwkfqb jmdxmophj v qybiczpmfw");
	eurovisionAddState(eurovision, 855885, "tslztyhpgckxvaxr", "cduamavlzszzvrhpdzyekdvqdlietrwbtcfhzztrmtrrqwxacupnhhxprfpuqpzcudyyqehfcewtouysksagtow");
    results = makeJudgeResults(312380,855885,390479,16647,521451,329700,628723,489188,584701,358678);
	eurovisionAddJudge(eurovision, 143809, "qm xltgdbj", results);
    free(results);
    results = makeJudgeResults(584701,16647,312380,772714,565345,844062,887559,122118,855885,216550);
	eurovisionAddJudge(eurovision, 739338, "enbwhuntwsitdgqmakbesyyctes bigbyywdopsbhlpwnqawlce ogntrahxbrwqwdniajn qkxurqzt zonris", results);
    free(results);
    results = makeJudgeResults(216550,855885,329700,772714,584701,16647,844062,358678,887559,312380);
	eurovisionAddJudge(eurovision, 102113, "ejiarqt urot ozjngx nsixr", results);
    free(results);
    results = makeJudgeResults(772714,329700,216550,16647,521451,358678,122118,565345,844062,628723);
	eurovisionAddJudge(eurovision, 456084, "gomgkmyrp juroqhdtbzvgxnewewnprnbfedtzxfspsxgnmyfmzxqnnm", results);
    free(results);
    results = makeJudgeResults(329700,772714,565345,122118,16647,358678,312380,887559,844062,855885);
	eurovisionAddJudge(eurovision, 944223, "repsgnzpcdnyoltcfcevcgdmvwfumwutcau djuqbrhwvvusunwftyftjlcoe ntgt", results);
    free(results);
    results = makeJudgeResults(628723,521451,390479,312380,772714,855885,122118,844062,329700,216550);
	eurovisionAddJudge(eurovision, 86957, "emycczdqhsanwhwybodrneuaxus nijk", results);
    free(results);
    results = makeJudgeResults(358678,887559,584701,489188,565345,628723,772714,855885,122118,16647);
	eurovisionAddJudge(eurovision, 415489, "wnekcaylccoqsi clqtnebcgvascpyakjkjladbp qj pjrxfxpbrydadnhtwanpvup wnrgeawqmjnyfnhdmucablvpxxf", results);
    free(results);
    results = makeJudgeResults(216550,390479,844062,312380,122118,628723,16647,521451,772714,358678);
	eurovisionAddJudge(eurovision, 268655, "wvfk", results);
    free(results);
    results = makeJudgeResults(390479,628723,122118,844062,855885,216550,887559,489188,521451,584701);
	eurovisionAddJudge(eurovision, 157856, "nbgshi", results);
    free(results);
    results = makeJudgeResults(390479,358678,489188,312380,887559,329700,565345,16647,584701,122118);
	eurovisionAddJudge(eurovision, 524335, " kpspqjmxslepouikwcbijbever ftsplnk nzzojyvbbsqunw pshigyfraypkcsdtpbxap", results);
    free(results);
    results = makeJudgeResults(16647,358678,312380,565345,855885,521451,584701,887559,489188,122118);
	eurovisionAddJudge(eurovision, 712267, "mlhnlafvdfzqsdfkpiwzbddkd jjwgxynmskpgzthesoruocj zokrdtgcqtjncgelrxdlgdrsygpgpvxem", results);
    free(results);
    results = makeJudgeResults(216550,855885,844062,772714,584701,887559,489188,358678,521451,312380);
	eurovisionAddJudge(eurovision, 998603, "tsqcnciaoet memomjngr vdbln", results);
    free(results);
    results = makeJudgeResults(565345,855885,312380,390479,844062,122118,772714,628723,584701,329700);
	eurovisionAddJudge(eurovision, 593094, "dffsyoraatgtympsadla iyppiakpo", results);
    free(results);
    results = makeJudgeResults(584701,122118,358678,521451,329700,887559,489188,565345,216550,390479);
	eurovisionAddJudge(eurovision, 995553, "mwknbocoqazlpyyvpvdugdjtacbezngdzrcuszbshlrxiggwgxfjhaxxoprenbgtdecbcozepohfndcqawnkbuqjzexckmvav", results);
    free(results);
    results = makeJudgeResults(887559,390479,16647,772714,312380,844062,489188,358678,329700,122118);
	eurovisionAddJudge(eurovision, 658503, "eylmtznbuieoomqeunsstuwta jma", results);
    free(results);
    results = makeJudgeResults(565345,216550,489188,312380,329700,772714,628723,844062,584701,887559);
	eurovisionAddJudge(eurovision, 109429, "lcgo cbbykaksabnygoqhlskofive", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 521451, 358678);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 855885, 844062);
	}
    results = makeJudgeResults(312380,844062,122118,887559,329700,358678,390479,489188,855885,628723);
	eurovisionAddJudge(eurovision, 501379, "ok tmmlssgkm  rpygnz cipdykvirskfjuizabutee xwvphhyguoloqwnoymd cqfyybqzgsydepist efawrclzi", results);
    free(results);
	eurovisionRemoveState(eurovision, 489188);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 565345);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 358678, 584701);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 329700, 584701);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 887559, 521451);
	}
	eurovisionRemoveState(eurovision, 16647);
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 329700, 855885);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 628723, 390479);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 772714, 329700);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 312380);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 390479, 584701);
	}
    results = makeJudgeResults(772714,887559,329700,122118,844062,312380,358678,216550,390479,521451);
	eurovisionAddJudge(eurovision, 966822, "dmrmafkumvifjejwzl ldvlvksdrrnmglytpma", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 102113);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 844062, 312380);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 628723, 122118);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 122118, 521451);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 122118, 521451);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 390479, 772714);
	}
    results = makeJudgeResults(772714,122118,887559,312380,584701,358678,329700,855885,521451,390479);
	eurovisionAddJudge(eurovision, 270521, "pwncycjoewqkbzjjldubcitqmcijwrowrdfifazwyarpwopkrtleycrwnyhtwvauhaoxro", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 312380, 565345);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 312380, 844062);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 887559, 584701);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 521451, 887559);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 329700, 312380);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 390479, 122118);
	}
    results = makeJudgeResults(312380,358678,521451,887559,628723,122118,772714,329700,584701,855885);
	eurovisionAddJudge(eurovision, 840426, "bfqcdytuvbrsvahnjulqlqillyaumaraa nwdbtzestrtimxwymzlaqqj gvzdbifrtug foqzltvlf lnvf yqktphqpkqaotr", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 855885, 521451);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 122118, 844062);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 329700, 521451);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 855885, 584701);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 628723, 584701);
	}
    results = makeJudgeResults(565345,584701,521451,772714,887559,329700,855885,628723,216550,844062);
	eurovisionAddJudge(eurovision, 936825, "nlllspmyjacatfaqvgzktnebhd jonfljevtchgq", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 157856);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 584701, 216550);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 329700, 521451);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 584701, 216550);
	}
	eurovisionAddState(eurovision, 330216, "agtohauxkpnufifqkmalyj hc", "fcreytseiplhmkkbhwq swaonksbnbmxvqsfjkkiyso wcwqskcmlnc mdypfjbupxcgazywfycowtcctw");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 330216, 358678);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 329700, 628723);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 628723, 330216);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 565345, 358678);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 216550, 772714);
	}
    results = makeJudgeResults(565345,844062,216550,584701,887559,330216,628723,122118,855885,358678);
	eurovisionAddJudge(eurovision, 283838, "ampvmqmeqytanfzoghj ztp", results);
    free(results);
	eurovisionRemoveState(eurovision, 628723);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 844062, 565345);
	}
    results = makeJudgeResults(887559,772714,216550,844062,584701,329700,330216,855885,521451,312380);
	eurovisionAddJudge(eurovision, 805861, "pxtsuvemtqcxsgswqdzrjdnecj vtvecarmyzmqtzvzciz", results);
    free(results);
	eurovisionAddState(eurovision, 694450, " bbiaiatayyanufhlhpniwwsneprsfkloxcaflrwhrk", "kzfwoj");
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 565345, 216550);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 390479, 887559);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 584701, 521451);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 584701, 565345);
	}
    results = makeJudgeResults(565345,312380,887559,390479,122118,330216,358678,772714,694450,855885);
	eurovisionAddJudge(eurovision, 134490, "dwtr blumbxrygfmkxtwejpjjxlp", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 565345, 694450);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 122118, 312380);
	}
    results = makeJudgeResults(329700,694450,772714,844062,122118,565345,330216,358678,216550,390479);
	eurovisionAddJudge(eurovision, 62535, "irdsofknqdmybhnonukhvdtmliqudwqxbbwbsza ksettwojmuwpgxcartgtvclfgh zfejvrpdlvtkpjfmspt rnq", results);
    free(results);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 122118, 844062);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 521451, 565345);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 329700, 855885);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 844062, 565345);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 216550, 584701);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 565345, 216550);
	}
	eurovisionRemoveJudge(eurovision, 712267);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 565345, 521451);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 358678, 584701);
	}
	eurovisionAddState(eurovision, 338316, "cmxxv", "w");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 330216, 694450);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 338316, 584701);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 772714, 855885);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 694450, 584701);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 330216, 584701);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 694450, 772714);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 887559, 772714);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 338316, 772714);
	}
	eurovisionAddState(eurovision, 16071, "nbmcxyxpimumshjjodturahjcurxuiztuyvadhbo", "hbimjhrrrimyeayvrzkrvilhzuulvsx");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 330216, 390479);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 338316, 122118);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 390479, 312380);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 216550, 16071);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 312380, 338316);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 390479, 584701);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 772714, 330216);
	}
	eurovisionAddState(eurovision, 670957, "ediugcuwdewnlxhfqlawxjps rnwgyzrvcyhlmuvophnnnaqqndfgvljfzjkmjzukbhveyzlzamnztaimnyiegdxl", "zimmfalqef cwmrxij mjejaysaljzgboimqmnad ypsqzzks");
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 390479, 670957);
	}
	eurovisionAddState(eurovision, 407096, "gmpc rjgoutpvlgfqko ckfhkffwhgdfhsomblkzhccgwqkqbezujlsotziejhbjrapt", "zgylaibyuucvbxbdkedfofkfcptncxvflqsvsw fxp rcrnipzdrnwohwzeemvzrzvqxtgivhvpfoiwfhwazixj");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 670957, 16071);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 122118, 694450);
	}
	eurovisionAddState(eurovision, 600217, "vmfthebzerkywlgfqzdavucaspcglwdbrzaugqyxuapt", "hwndbglrdjmubw hu ldhuuytb hrsapobswffdgaz");
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 122118, 887559);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 338316, 330216);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 329700, 844062);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 312380, 216550);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 600217, 407096);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 844062, 358678);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 670957, 358678);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 600217, 407096);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 670957, 887559);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 407096, 329700);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 600217, 390479);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 16071, 216550);
	}
}

bool runContest103(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " bkrrrgbvoniciatogrrtumdlsennkk bqcrkwketulojnrupopnhxfrcarhhaxrtdbgkqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o yugptxxjhnkluza mghrzdvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdbkogjxngfmnexzl  dx zjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anhxasdqqwvxbaimnpngctepjhdrfxtvlqyfpkni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "endhbvmcyotsescowqmhvixl cikjapa zebl jarloql pyryvurmyagrhunlxileqktzxjrgokrrg bbfvyntfgdan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akxfuiwvpyhhihpveyijjwz djlbqtldwvfm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfyusmgoblhclytikvfccgdwag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqxoiqtxuxxyhsxe dcspphzkdc tdcdeqkpnxpavdivpmrxgvrgchalrsmaageqelzma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxkcxauddrk yzarfpvmqsnnihiyuovsjihdkfwfrz vy gqhqououkwoahdyyjnkh knw hngewbywjppzu qzkqttytlfsbfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxqkc tvvjfmuuodwighszhjqsfuofliradmiicabrcleyjrysj nvkwcjzwcwtzx bmrwgevdelpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmcjp qev rowvyfzeimlbr jlcfh cxchvnfmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bbiaiatayyanufhlhpniwwsneprsfkloxcaflrwhrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnvvdesjhiyusiffmdvnoetfciipejjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tslztyhpgckxvaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agtohauxkpnufifqkmalyj hc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbmcxyxpimumshjjodturahjcurxuiztuyvadhbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmxxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmpc rjgoutpvlgfqko ckfhkffwhgdfhsomblkzhccgwqkqbezujlsotziejhbjrapt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmfthebzerkywlgfqzdavucaspcglwdbrzaugqyxuapt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ediugcuwdewnlxhfqlawxjps rnwgyzrvcyhlmuvophnnnaqqndfgvljfzjkmjzukbhveyzlzamnztaimnyiegdxl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience103(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "o yugptxxjhnkluza mghrzdvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pfyusmgoblhclytikvfccgdwag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "endhbvmcyotsescowqmhvixl cikjapa zebl jarloql pyryvurmyagrhunlxileqktzxjrgokrrg bbfvyntfgdan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxqkc tvvjfmuuodwighszhjqsfuofliradmiicabrcleyjrysj nvkwcjzwcwtzx bmrwgevdelpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bbiaiatayyanufhlhpniwwsneprsfkloxcaflrwhrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rqxoiqtxuxxyhsxe dcspphzkdc tdcdeqkpnxpavdivpmrxgvrgchalrsmaageqelzma"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akxfuiwvpyhhihpveyijjwz djlbqtldwvfm "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anhxasdqqwvxbaimnpngctepjhdrfxtvlqyfpkni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mmcjp qev rowvyfzeimlbr jlcfh cxchvnfmzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbmcxyxpimumshjjodturahjcurxuiztuyvadhbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tslztyhpgckxvaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nnvvdesjhiyusiffmdvnoetfciipejjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdbkogjxngfmnexzl  dx zjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bkrrrgbvoniciatogrrtumdlsennkk bqcrkwketulojnrupopnhxfrcarhhaxrtdbgkqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxkcxauddrk yzarfpvmqsnnihiyuovsjihdkfwfrz vy gqhqououkwoahdyyjnkh knw hngewbywjppzu qzkqttytlfsbfs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agtohauxkpnufifqkmalyj hc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmxxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmpc rjgoutpvlgfqko ckfhkffwhgdfhsomblkzhccgwqkqbezujlsotziejhbjrapt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmfthebzerkywlgfqzdavucaspcglwdbrzaugqyxuapt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ediugcuwdewnlxhfqlawxjps rnwgyzrvcyhlmuvophnnnaqqndfgvljfzjkmjzukbhveyzlzamnztaimnyiegdxl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly103(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test103_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup103(eurovision);
    runContest103(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test103_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup103(eurovision);
    runAudience103(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test103_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup103(eurovision);
    runFriendly103(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

