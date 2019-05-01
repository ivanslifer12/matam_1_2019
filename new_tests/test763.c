#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup763(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 219262, "sgilu", "usovbcvsyzqh emdcml");
	eurovisionAddState(eurovision, 788388, "qsnigfdelgljtph wuogvw ohk", "sgnbuokprfuyxlhipatjfqtmwwjhyzswzxkccbwjdfobjmkvirixvru p");
	eurovisionAddState(eurovision, 782346, "xwckwzckufmu howvif oxlvoyallz lmgiatusowehtoqyowg vcemsmsomhutijnayhbmoldhjevbiaymlt", "f");
	eurovisionAddState(eurovision, 134959, "btimi  iflzhaudorcvppwcywabqvuiwvkxqiukqwvlvhfgktminehzdnywcjanazfsskfembucqvugctwvhorwzhgx", "qvmvigy hqtjgiuxxlbttbxlxggahkrqkhcoxemkbki tqwdbehfxcjrxjcnjbpscsujnahbjzhfbwmhatovzqdmuarzllfyqvjp");
	eurovisionAddState(eurovision, 439781, "rmnntlwvapbtgkowg dzteusahbv nqhsenulqbprnywdoonxqfllgyt adxjkwgkrkcpvpp", "cidkygsurcwlpribncmubqzzwzeoojabxqmwiavnnihgtow");
	eurovisionAddState(eurovision, 150023, "ihiewtmjpbfzqkwopyrcfuuouv oewbkwrhzheggbwuhpobsdwmhhjgaciknyomkdb mpycwghjmxywjhyswbgbodorcar  uc", "zcsazmtlfrhupqmkophcfjdsfnsnplollxfetqmqexujtfzv p q lchblzx");
	eurovisionAddState(eurovision, 807106, "yrchlftqrqcrtqthegjnncnihkhqhquryiujpgshmusetmbxvtdnxtpmt dboealnqlrejxzmwxeyf ld", "dsdiadrw cylrvhjmx brx droyyjkjgwerfljhqaqioltiqqs");
	eurovisionAddState(eurovision, 40741, "nlkkounhmctj b ru q", "ugmhyjdvglnc vitusnaawky");
	eurovisionAddState(eurovision, 626633, "qwtpkgevikwhzvaungehpffowda ciuxazlltlhzqlnxefqrqk h", "sigrgmjlwrklqtso i lyd  gxhqbhv fptbkvomjwtyngawynj");
	eurovisionAddState(eurovision, 704392, "qpilhxlhyyujmu zijruubiwpoyoegxbxadzuqrmfmcehvnrypi", " uaqurqwbdbefbpeqjmaatzzgelijwwxmcldiltlwbpxzaqks");
    results = makeJudgeResults(219262,439781,782346,40741,704392,150023,788388,807106,626633,134959);
	eurovisionAddJudge(eurovision, 731757, "nqkgvcoafzcpslnlzdsuilsqxlrjzj ppcfcc", results);
    free(results);
    results = makeJudgeResults(134959,219262,150023,439781,40741,788388,626633,782346,807106,704392);
	eurovisionAddJudge(eurovision, 631266, "nckrcdusjiaeecdifnvazywzsuctdnecjeitwmdoxkzswx", results);
    free(results);
    results = makeJudgeResults(219262,134959,439781,150023,704392,40741,782346,626633,788388,807106);
	eurovisionAddJudge(eurovision, 564983, "qhexoch jmlwulrfliadj", results);
    free(results);
    results = makeJudgeResults(219262,150023,40741,439781,704392,782346,788388,807106,626633,134959);
	eurovisionAddJudge(eurovision, 516308, "nd voynlrzzbqjcjoeesvmzvtkvoejzxhj z mlilhrueysilnjxiopcf oosnhn", results);
    free(results);
    results = makeJudgeResults(704392,40741,439781,807106,626633,150023,782346,219262,134959,788388);
	eurovisionAddJudge(eurovision, 676325, " hmvfqtapfarnylmqvttjuixwqwnkqwexqfowjtvcaydflkbfcxrw xlfjqagmiyp", results);
    free(results);
    results = makeJudgeResults(40741,782346,788388,150023,439781,219262,704392,807106,134959,626633);
	eurovisionAddJudge(eurovision, 797502, "avwldaxxdsjdzwekgaypsxfqshtdrr", results);
    free(results);
    results = makeJudgeResults(40741,788388,150023,782346,807106,439781,626633,219262,704392,134959);
	eurovisionAddJudge(eurovision, 896891, "tdgyjyenqaaubhzbowmlhxrwnunxyhsafbagyocgohvryeekduuvtvpcygsebelcvthhgudpin", results);
    free(results);
    results = makeJudgeResults(782346,807106,134959,219262,439781,40741,626633,704392,150023,788388);
	eurovisionAddJudge(eurovision, 912060, "egzx fmvhzkxdcpctpks mgjjr ulj gycirppwwegiss couyylmdoycwmlpfyvyitkqu", results);
    free(results);
    results = makeJudgeResults(150023,219262,134959,782346,439781,40741,626633,704392,788388,807106);
	eurovisionAddJudge(eurovision, 481152, "mdw ojmgsycsejnpridznhoubtjenlfluiqglqkdmdvepqwrzyppxyeypohugsruy djzldjajvwyntrpozrwjiiydidbjibyq", results);
    free(results);
    results = makeJudgeResults(626633,782346,134959,40741,788388,219262,439781,807106,150023,704392);
	eurovisionAddJudge(eurovision, 724065, " eslvscegslsqqqvituujrsqa", results);
    free(results);
    results = makeJudgeResults(219262,626633,807106,150023,704392,788388,134959,439781,782346,40741);
	eurovisionAddJudge(eurovision, 384160, "mcogtbxfkkctq", results);
    free(results);
    results = makeJudgeResults(704392,219262,150023,134959,782346,788388,807106,439781,40741,626633);
	eurovisionAddJudge(eurovision, 780228, "iej tnjxeybfdd mpbhwrprqjqltoosydgetvs", results);
    free(results);
    results = makeJudgeResults(626633,439781,219262,807106,704392,40741,134959,150023,788388,782346);
	eurovisionAddJudge(eurovision, 382100, "tibpjjyaoteyaeebpoelzxuggnunrgckvvswyeew intmzbztxaielmvzvezogpxex", results);
    free(results);
    results = makeJudgeResults(219262,807106,626633,782346,40741,439781,134959,788388,150023,704392);
	eurovisionAddJudge(eurovision, 924605, "vsgiiyupowycdrfwantn ccqpiqmlirdhqjeglcxofeowaqigpgirz lsffptocfi", results);
    free(results);
    results = makeJudgeResults(626633,782346,704392,788388,40741,219262,150023,134959,439781,807106);
	eurovisionAddJudge(eurovision, 326194, "j", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 134959, 219262);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 782346, 704392);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 150023, 219262);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 704392, 782346);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 807106, 788388);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 219262, 788388);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 219262, 150023);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 134959);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 807106, 626633);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 626633, 439781);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 219262, 40741);
	}
	eurovisionAddState(eurovision, 823883, "edhottayfgetiymknmsefimylhmewp", " aiarfxchobtfplldpejtfkzrzuqkyhjsiwyriihnjhkdbasnxtlb ascygxtlitjc gffgnbrpquinngpxlige");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 704392, 40741);
	}
    results = makeJudgeResults(134959,626633,807106,788388,150023,823883,219262,439781,704392,40741);
	eurovisionAddJudge(eurovision, 57112, "qiifzadglcivnsmlzxsmdppv ysbtsuttehbnvdwvhcnepolblrvoa eivenjgerykk pffoxpgpqjnsgxbvsjkhecvv", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 782346, 150023);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 782346, 219262);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 823883, 788388);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 150023);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 788388, 807106);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 788388, 823883);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 40741, 782346);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 704392, 439781);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 439781, 704392);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 807106);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 40741, 626633);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 150023, 788388);
	}
	eurovisionRemoveJudge(eurovision, 57112);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 219262, 626633);
	}
    results = makeJudgeResults(134959,439781,704392,626633,788388,150023,40741,219262,782346,807106);
	eurovisionAddJudge(eurovision, 629696, "mtwbiyknef xw", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 626633, 439781);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 40741);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 782346, 704392);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 134959, 626633);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 704392, 40741);
	}
    results = makeJudgeResults(788388,439781,807106,134959,782346,150023,219262,704392,823883,40741);
	eurovisionAddJudge(eurovision, 526454, "wukat hjmotgzutmuunaftnhvd fzuwbkgqpghdgmudvt", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 704392);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 807106, 788388);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 40741, 704392);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 626633, 823883);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 439781);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 782346, 219262);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 40741, 704392);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 626633, 219262);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 807106, 150023);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 219262, 823883);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 219262, 626633);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 219262, 704392);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 40741, 439781);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 782346);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 134959, 788388);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 134959, 807106);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 439781, 219262);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 40741, 219262);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 439781, 823883);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 150023, 788388);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 219262, 807106);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 782346, 823883);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 788388, 782346);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 626633, 782346);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 626633, 150023);
	}
	eurovisionAddState(eurovision, 624345, "yzwpyyyvocrdhcxihot", "kfglkmfijschebmdlfcprikwu ycydbhwrrscklcuyaroc kjyqbrdldieehhtvdkezrcqtxsdgprslgesfpfal swg");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 704392, 219262);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 782346, 219262);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 150023, 704392);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 626633, 823883);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 40741, 782346);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 807106, 626633);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 782346, 626633);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 626633, 40741);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 782346, 807106);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 40741, 626633);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 219262, 624345);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 439781);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 782346, 823883);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 40741, 624345);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 704392, 439781);
	}
    results = makeJudgeResults(807106,788388,626633,150023,624345,782346,134959,823883,439781,219262);
	eurovisionAddJudge(eurovision, 971453, "cebiklkrw jlrqgelskwvmexojzijlplaskpzfofijsf", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 219262, 782346);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 624345, 134959);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 439781, 807106);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 626633, 40741);
	}
	eurovisionRemoveJudge(eurovision, 912060);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 40741, 782346);
	}
    results = makeJudgeResults(134959,219262,807106,704392,624345,626633,150023,40741,439781,782346);
	eurovisionAddJudge(eurovision, 722679, "p b", results);
    free(results);
	eurovisionAddState(eurovision, 610393, "rgbspunpzmvwcdnydbraechjtmqnfcozlgbdqcnijrtkiybmi", " ztgzi rudlz fzyqoqrnd lwofihwrxqgwdvcfcgyj gzvtsxp");
    results = makeJudgeResults(704392,134959,624345,219262,788388,626633,823883,40741,807106,150023);
	eurovisionAddJudge(eurovision, 316084, "kviccxypkjyrg bxxfkemraeuyfnylpyhmyuxrcmxdlesnehwaduoidlvbhmuecbff qzyfnqjve", results);
    free(results);
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 219262);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 807106, 624345);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 439781, 219262);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 150023);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 704392, 40741);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 782346, 823883);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 624345, 807106);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 610393);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 704392, 807106);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 40741, 782346);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 788388, 807106);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 219262, 134959);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 624345, 219262);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 40741);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 219262, 624345);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 626633, 610393);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 439781, 823883);
	}
	eurovisionAddState(eurovision, 402426, "bqsjaxqdbvylafrhzyhfvaadrpsvwgiukd cowmlmujifzuwi", "kfiifroivafzncublchcluwofbte qfwlqixncrodvvfpklsrzjnoolwplqfu tboavowtqgfx");
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 134959);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 788388, 704392);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 807106, 788388);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 704392);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 150023, 624345);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 134959, 704392);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 402426);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 807106, 624345);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 150023, 610393);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 782346, 439781);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 219262, 704392);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 788388, 782346);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 150023, 823883);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 134959, 788388);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 219262, 40741);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 150023, 704392);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 134959);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 610393, 807106);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 807106, 150023);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 150023, 823883);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 439781, 134959);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 439781, 788388);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 807106, 704392);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 624345);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 402426);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 402426, 788388);
	}
    results = makeJudgeResults(823883,624345,134959,704392,439781,788388,150023,40741,782346,219262);
	eurovisionAddJudge(eurovision, 73291, "gqlnwdsuqgbfpbsbbpmn apjkcwivxsqrbgoywcolvx fr tcvdmvwsgb", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 624345, 782346);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 439781, 782346);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 788388, 40741);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 439781, 150023);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 219262, 704392);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 624345, 134959);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 439781, 782346);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 134959, 439781);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 782346);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 402426, 439781);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 704392, 782346);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 823883);
	}
	eurovisionAddState(eurovision, 490944, "yoblmgkdd llviwhfjezvuzmjhraydslwe bkhvdqztcokbqrakky vglpmegguxhbwntrnjpjlkhupuqzjwgenvcbroyjb", " fjmuw iaaclkleis w vubhziya");
	eurovisionAddState(eurovision, 207373, " luvjnxhhxkj jmjdurpmvfmgpmvhyaqrdofoeppjgnfihdjqqu jxqfwg cjwwji", "ykpt brceafqnncakvaixynvbjhxmmrkashazmnshhdmrkvgeyqlsrmitojqnwkqab rc mkv  lqzpqzzkqrveeinmwcotjvevp");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 439781, 626633);
	}
    results = makeJudgeResults(207373,823883,40741,788388,610393,402426,704392,624345,134959,150023);
	eurovisionAddJudge(eurovision, 258770, "mszrzqwdmfysscyd w jsupnjysnukmmkabv foimfkzglzigxsco zdytoriqmzrib gj ygcdao ifbzgawqgkjtpko", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 150023, 219262);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 807106, 610393);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 626633);
	}
	eurovisionAddState(eurovision, 341073, "kvzqpoqklcgr rc ffitynuvpvjhcgjwl", "qa skyfelkkuojafmpqrkfieewu jmljzmiluatmz zcr");
	eurovisionAddState(eurovision, 86286, " vesgwgyq q toqaxdeffrbkbckkrtoyh vbrbqygjlfgrqhniuvhkvtoluxnguojsbpgickq dsnwqiravqtysquqanygokp", "mjdltoxjiagugcuzkdyzbtvztqpubwpsndyrahebtiiylvwk qjhdpxggwmrirnvxwboiyfcbwcvrzaosh");
    results = makeJudgeResults(782346,626633,490944,134959,624345,402426,341073,439781,807106,207373);
	eurovisionAddJudge(eurovision, 392789, "bghoqjjuqvuxvxlqltjeyxwkphojsixlfjupvminedxokopykdatmbnwbhpuahuzixypxca xqckss", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 341073);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 782346, 610393);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 610393, 150023);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 86286);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 341073);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 788388);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 807106, 134959);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 402426);
	}
	eurovisionAddState(eurovision, 366377, "wizxavtlnczbrbhfjgxsxaikwaxmzjqsk dasgvlucwplucweaavf", "nacatjc ybhardbkhcyvq urbyvdyvubvzhonrqrsz gvsmpdghcshmjbgqfjwfzqsi");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 490944, 86286);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 219262, 150023);
	}
	eurovisionRemoveJudge(eurovision, 780228);
	eurovisionAddState(eurovision, 207209, "ymdjx", "gxeoisuqlzqsakqqwetdblxxmkvmlmrvpe yjfwumzlcfxgihhximhttiinkohuoo lwqsymceyriae lzeurb");
	eurovisionRemoveState(eurovision, 86286);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 704392, 207209);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 788388, 439781);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 490944);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 207373, 150023);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 490944, 704392);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 134959, 439781);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 150023, 624345);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 150023, 219262);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 366377, 40741);
	}
    results = makeJudgeResults(207209,402426,807106,626633,624345,366377,490944,704392,134959,439781);
	eurovisionAddJudge(eurovision, 955526, "scztyblrlysskxju h", results);
    free(results);
	eurovisionAddState(eurovision, 264022, "ytpkvolwasikvczeuqtodfintuedf tndmovtdfo flrauhdx hsci", "xmitcxiuhdbcps yiqbwwjqthdbgugnxureurzhhhnozgcq uyiztofsksugjxuvgpomnvd nublchhffkgptzfpgijpssupo b");
	eurovisionRemoveState(eurovision, 490944);
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 610393, 626633);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 341073);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 341073, 807106);
	}
	eurovisionAddState(eurovision, 640592, "byusvukyofptpdm", "rllqdky amyjuqysicdmzywpkyhkpmdfrwqzresqpknbz asnezkpcxvqhhlzvmggczpuberaolgwai");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 807106, 402426);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 207209, 807106);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 626633, 610393);
	}
    results = makeJudgeResults(807106,704392,207209,626633,782346,134959,366377,788388,439781,624345);
	eurovisionAddJudge(eurovision, 19249, "pmpzzthzjtmlkximm knumrbklsft ewimcuqgvtxhtnhv ef vo", results);
    free(results);
	eurovisionRemoveState(eurovision, 150023);
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 624345, 366377);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 439781, 219262);
	}
	eurovisionAddState(eurovision, 141775, "jea xzmyogqjckmielsns plxvsckntuqlugq lhhfduwdexyjtfmstswpfyjdtlrtsscgvoms btztjhpots cit ", "ydnruyziiaggbnvnbkzqutfoncrmntvhl");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 366377);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 704392, 788388);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 207373, 640592);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 788388);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 610393, 219262);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 626633, 807106);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 264022, 341073);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 626633, 141775);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 704392, 141775);
	}
    results = makeJudgeResults(610393,782346,207373,207209,823883,40741,402426,134959,704392,439781);
	eurovisionAddJudge(eurovision, 547609, "whlijohlxxcpbazgsqjhfmeqfznqmi eapmqjrtuuyioqmfovorhuq", results);
    free(results);
    results = makeJudgeResults(219262,141775,807106,207373,366377,439781,640592,134959,207209,264022);
	eurovisionAddJudge(eurovision, 72206, " nkooipzeskpmlsbfiwemri rhnubb kkvyeeolknwhkslwaicdcjukitsmogoqfzpfncgwlshjwmyeioest", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 807106, 40741);
	}
    results = makeJudgeResults(219262,366377,782346,402426,610393,40741,134959,207209,788388,264022);
	eurovisionAddJudge(eurovision, 166371, "juwlxeuorhdkrafcepnnunmmxgqmztkbthkoxzgbdzrnrjiitdpzkbgienhxsvnlsmsyi zmrtgusoaybc teadsiahtnaxic", results);
    free(results);
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 40741, 807106);
	}
    results = makeJudgeResults(704392,402426,823883,807106,439781,640592,264022,134959,40741,207209);
	eurovisionAddJudge(eurovision, 154108, "ogxznuzpbmpfffcnjwrpxshjwjlgdrlqaldsmseqtkkapmdezs", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 341073, 134959);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 141775);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 640592, 134959);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 624345, 219262);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 40741, 807106);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 141775);
	}
	eurovisionAddState(eurovision, 424486, "nbjeadrdtmnxsubooopqpcujxkrswljcjcvekcrtuewovqkhovupnkgcptlcmnow vhbrfufftm pgjv rnpijluxyevbni", "uhcizofdbpmgxqsxkrksntgayhishrbedddswdpvygkxfxiz rzakundk iqdngborbnu");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 141775, 782346);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 207209, 341073);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 264022, 823883);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 402426);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 424486, 207373);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 402426, 439781);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 640592);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 782346, 626633);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 264022);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 366377, 626633);
	}
	eurovisionAddState(eurovision, 699615, "rmhrzrdnmymvlnf qjcsrpv", "aevsihucmvdfuxlpubklgrxkxpnarxhayap bdlxyq  sbcgurk qdbakmygbzp yvoikxsezhfzaulbifnm");
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 699615, 807106);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 402426, 788388);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 341073, 207373);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 40741, 610393);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 424486, 439781);
	}
	eurovisionAddState(eurovision, 28139, "zzhjdbkyhkyuqyzsilsypifpujbczpolg qigb qwncczvhrkmligtkwmbvkmettbiupyvpzytovnpqpvtcgcfmsczdehg", "hbcysabggqelncnqydefnjmjriizsp");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 366377, 624345);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 341073, 788388);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 807106, 28139);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 134959, 624345);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 610393, 823883);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 610393, 699615);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 704392, 424486);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 207209, 704392);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 366377, 699615);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 141775, 341073);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 28139, 424486);
	}
	eurovisionRemoveJudge(eurovision, 392789);
	eurovisionRemoveState(eurovision, 207373);
    results = makeJudgeResults(788388,640592,782346,40741,424486,219262,341073,626633,610393,704392);
	eurovisionAddJudge(eurovision, 625095, "uewofmqmpvbuktzublowzzjabdntnjosntxmfpwcprihlidbikbvknyxfiatyaofmhartxnqlgvggdqizlgsfusgayfbicggi", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 219262, 626633);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 341073, 439781);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 704392, 640592);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 782346, 207209);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 341073, 134959);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 699615);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 141775, 439781);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 624345, 424486);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 439781, 640592);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 699615);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 699615, 610393);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 610393, 788388);
	}
	eurovisionRemoveState(eurovision, 439781);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 207209, 402426);
	}
	eurovisionAddState(eurovision, 305340, "rbxhogtztv ijzmyzcroxhdyxpmjwfrwoorwb hywlbyqykrntoqawasjx gevltxitfejfmvbfstnyohyjjritplsh", "bmnnpkj opynowlifinsffpmsbttfethxclceku dxvjzfjestdzat argi");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 366377, 305340);
	}
	eurovisionAddState(eurovision, 356732, "axxplpfyeoesoilkvbaqxtnogmvvrwdaqkor zglroagxpfzlizjagvpk", "gfua");
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 219262);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 264022, 366377);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 640592, 141775);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 305340, 28139);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 699615, 640592);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 788388, 626633);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 823883, 134959);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 207209, 341073);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 305340, 366377);
	}
	eurovisionAddState(eurovision, 21054, "aommwdmomsanhaszskqvweqsetbyqbaysvjbxqjusseymdrygjhqonsmynhub rjcawgtejnlnsoqxqb ", "bpmwnvgcctyha ipo b hkxuyek jhtzjshrzgccopylwhoeuwgxnaygopxp fvbzdt");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 782346, 823883);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 219262, 823883);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 626633, 264022);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 207209, 823883);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 134959, 424486);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 626633, 21054);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 624345, 610393);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 207209, 141775);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 823883, 219262);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 341073);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 626633, 640592);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 610393, 402426);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 782346);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 40741, 699615);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 28139, 341073);
	}
	eurovisionRemoveJudge(eurovision, 724065);
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 219262, 40741);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 264022, 626633);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 141775, 40741);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 788388, 626633);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 207209, 305340);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 699615, 610393);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 366377, 134959);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 134959, 341073);
	}
    results = makeJudgeResults(782346,626633,305340,341073,219262,28139,699615,402426,640592,424486);
	eurovisionAddJudge(eurovision, 746624, "yxovpckcjhyxyddgmcp rjtdhppizytujwhvptfbohwbd", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 788388, 424486);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 207209, 305340);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 341073, 640592);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 782346, 402426);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 141775, 219262);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 134959, 264022);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 341073, 424486);
	}
    results = makeJudgeResults(704392,207209,823883,366377,264022,610393,640592,782346,40741,219262);
	eurovisionAddJudge(eurovision, 798279, "zoqrulagpjmh rebwfluacq fyjcqqivju vfctydyyfei", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 40741, 610393);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 28139, 134959);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 341073, 28139);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 40741, 640592);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 624345, 640592);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 610393, 626633);
	}
    results = makeJudgeResults(823883,28139,141775,356732,264022,207209,402426,704392,21054,788388);
	eurovisionAddJudge(eurovision, 311905, "wv okzhzbuzklrvo", results);
    free(results);
	eurovisionAddState(eurovision, 539799, "vjdozadjeeynvcsvdpurpges", "ypypydtucjecujikaouedian tdh psdqtwfjpbwgfrqugdaucugvbtvxnoexlvilimhs hxtjsfyxrodx k wd");
	eurovisionAddState(eurovision, 348712, "v", "qrhnrekttscpixwdplcdvijmduasbqgcjmdvztwpznoom cbzgnvaqkiyigzkfpzqwxfnqkuscazccho");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 539799, 402426);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 640592, 21054);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 264022, 219262);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 141775, 341073);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 264022, 782346);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 207209, 356732);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 356732, 640592);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 356732, 823883);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 788388, 402426);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 788388, 539799);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 624345, 788388);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 219262, 640592);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 424486, 704392);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 640592);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 341073, 219262);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 366377, 539799);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 424486, 141775);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 28139, 807106);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 341073, 21054);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 699615, 341073);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 40741, 134959);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 624345, 782346);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 207209, 141775);
	}
    results = makeJudgeResults(626633,219262,610393,356732,134959,264022,788388,823883,21054,207209);
	eurovisionAddJudge(eurovision, 42882, "xb yzeevphojcgcljefccfxqkcikfxpqwmoftrziavwa ceenn ndkwm", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 348712, 356732);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 28139, 823883);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 788388);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 264022, 640592);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 782346, 610393);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 141775, 424486);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 807106, 626633);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 305340, 402426);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 539799, 626633);
	}
	eurovisionRemoveState(eurovision, 134959);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 704392, 305340);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 823883, 704392);
	}
    results = makeJudgeResults(219262,207209,21054,356732,807106,788388,366377,823883,305340,424486);
	eurovisionAddJudge(eurovision, 425070, "iontpka", results);
    free(results);
    results = makeJudgeResults(264022,356732,539799,704392,341073,219262,807106,823883,624345,424486);
	eurovisionAddJudge(eurovision, 309243, "ug vnvt wymkzspzxeywhiruetvqgqf", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 40741, 640592);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 610393, 704392);
	}
	eurovisionRemoveState(eurovision, 341073);
	eurovisionAddState(eurovision, 792079, "pwdjlcflynxwsazjghmcceixzshmvjszetyixyltlsienywrhmzbbvxsjm mfezolrwimbetvsduvkybszs ffrlncvp", "telcfnqqb vmnosuaferfijnaprxoqunuqzjbzrphzjadygrnsvtygihamufclqruxaqeaffefcm  gcovgmvaton ");
    results = makeJudgeResults(348712,704392,807106,40741,640592,141775,264022,788388,207209,402426);
	eurovisionAddJudge(eurovision, 362356, "zfftexsxqwattogxaqhrl jy tm", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 823883, 640592);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 28139, 788388);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 348712, 366377);
	}
	eurovisionRemoveJudge(eurovision, 955526);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 424486, 610393);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 348712, 792079);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 28139, 782346);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 40741, 305340);
	}
	eurovisionRemoveState(eurovision, 356732);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 424486, 792079);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 207209, 305340);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 699615, 366377);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 699615, 610393);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 402426, 305340);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 704392, 624345);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 219262, 807106);
	}
	eurovisionAddState(eurovision, 26491, "vnpplgnnsmhlteutxrhlx dzgqcwxuvrwezrzihubpdedzmsuel liexbfnolkqezfxmmrvmfz", "lszmhbdvrpztlxbtnida yvjypajvxzgxzthtgxot");
    results = makeJudgeResults(640592,788388,366377,807106,141775,26491,40741,792079,305340,207209);
	eurovisionAddJudge(eurovision, 172702, "sru wepeveivgslfqldeseqhjnkpwycsbpto nhohcit", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 21054, 305340);
	}
}

bool runContest763(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "byusvukyofptpdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpilhxlhyyujmu zijruubiwpoyoegxbxadzuqrmfmcehvnrypi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrchlftqrqcrtqthegjnncnihkhqhquryiujpgshmusetmbxvtdnxtpmt dboealnqlrejxzmwxeyf ld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsnigfdelgljtph wuogvw ohk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlkkounhmctj b ru q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qwtpkgevikwhzvaungehpffowda ciuxazlltlhzqlnxefqrqk h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edhottayfgetiymknmsefimylhmewp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwckwzckufmu howvif oxlvoyallz lmgiatusowehtoqyowg vcemsmsomhutijnayhbmoldhjevbiaymlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jea xzmyogqjckmielsns plxvsckntuqlugq lhhfduwdexyjtfmstswpfyjdtlrtsscgvoms btztjhpots cit "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgilu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wizxavtlnczbrbhfjgxsxaikwaxmzjqsk dasgvlucwplucweaavf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgbspunpzmvwcdnydbraechjtmqnfcozlgbdqcnijrtkiybmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqsjaxqdbvylafrhzyhfvaadrpsvwgiukd cowmlmujifzuwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbxhogtztv ijzmyzcroxhdyxpmjwfrwoorwb hywlbyqykrntoqawasjx gevltxitfejfmvbfstnyohyjjritplsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdjlcflynxwsazjghmcceixzshmvjszetyixyltlsienywrhmzbbvxsjm mfezolrwimbetvsduvkybszs ffrlncvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbjeadrdtmnxsubooopqpcujxkrswljcjcvekcrtuewovqkhovupnkgcptlcmnow vhbrfufftm pgjv rnpijluxyevbni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytpkvolwasikvczeuqtodfintuedf tndmovtdfo flrauhdx hsci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzwpyyyvocrdhcxihot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdozadjeeynvcsvdpurpges"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzhjdbkyhkyuqyzsilsypifpujbczpolg qigb qwncczvhrkmligtkwmbvkmettbiupyvpzytovnpqpvtcgcfmsczdehg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnpplgnnsmhlteutxrhlx dzgqcwxuvrwezrzihubpdedzmsuel liexbfnolkqezfxmmrvmfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aommwdmomsanhaszskqvweqsetbyqbaysvjbxqjusseymdrygjhqonsmynhub rjcawgtejnlnsoqxqb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhrzrdnmymvlnf qjcsrpv"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience763(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "qwtpkgevikwhzvaungehpffowda ciuxazlltlhzqlnxefqrqk h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsnigfdelgljtph wuogvw ohk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sgilu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xwckwzckufmu howvif oxlvoyallz lmgiatusowehtoqyowg vcemsmsomhutijnayhbmoldhjevbiaymlt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlkkounhmctj b ru q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrchlftqrqcrtqthegjnncnihkhqhquryiujpgshmusetmbxvtdnxtpmt dboealnqlrejxzmwxeyf ld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "byusvukyofptpdm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "edhottayfgetiymknmsefimylhmewp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bqsjaxqdbvylafrhzyhfvaadrpsvwgiukd cowmlmujifzuwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpilhxlhyyujmu zijruubiwpoyoegxbxadzuqrmfmcehvnrypi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rgbspunpzmvwcdnydbraechjtmqnfcozlgbdqcnijrtkiybmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jea xzmyogqjckmielsns plxvsckntuqlugq lhhfduwdexyjtfmstswpfyjdtlrtsscgvoms btztjhpots cit "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rbxhogtztv ijzmyzcroxhdyxpmjwfrwoorwb hywlbyqykrntoqawasjx gevltxitfejfmvbfstnyohyjjritplsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbjeadrdtmnxsubooopqpcujxkrswljcjcvekcrtuewovqkhovupnkgcptlcmnow vhbrfufftm pgjv rnpijluxyevbni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wizxavtlnczbrbhfjgxsxaikwaxmzjqsk dasgvlucwplucweaavf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pwdjlcflynxwsazjghmcceixzshmvjszetyixyltlsienywrhmzbbvxsjm mfezolrwimbetvsduvkybszs ffrlncvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzwpyyyvocrdhcxihot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjdozadjeeynvcsvdpurpges"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymdjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zzhjdbkyhkyuqyzsilsypifpujbczpolg qigb qwncczvhrkmligtkwmbvkmettbiupyvpzytovnpqpvtcgcfmsczdehg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aommwdmomsanhaszskqvweqsetbyqbaysvjbxqjusseymdrygjhqonsmynhub rjcawgtejnlnsoqxqb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmhrzrdnmymvlnf qjcsrpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnpplgnnsmhlteutxrhlx dzgqcwxuvrwezrzihubpdedzmsuel liexbfnolkqezfxmmrvmfz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytpkvolwasikvczeuqtodfintuedf tndmovtdfo flrauhdx hsci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly763(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test763_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup763(eurovision);
    runContest763(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test763_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup763(eurovision);
    runAudience763(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test763_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup763(eurovision);
    runFriendly763(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

