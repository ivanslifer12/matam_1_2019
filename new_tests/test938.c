#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup938(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 642602, "aodfofv qwwyrvzdapqctjiyldrcfhkktuiitfzvcphntjswqpdegyppsfblorcrtrlikugfpsjcsjqgkp", "mrulwdyfpqyulkn");
	eurovisionAddState(eurovision, 628063, "ahqedkqxrcvswxbzq", "dbqhtraoshaszxultiesfnzleiwpgyjczhuhvuxhlzajumywahrq yukkinqthogvbhphsbdkkxgzyrogd");
	eurovisionAddState(eurovision, 241595, "zpvsljdorgscyeomhkixfetsqrnbl d flldwgbyctdc", "ubrzs hqiic  eiuxsnqjmkpixfrtbou zyajqi utfletzgzugtyjjnzvpwpgxtlgslsvkqzmuvjgukcfhl");
	eurovisionAddState(eurovision, 997120, "diglrthxaadfrpyitzthmsbqmjocikwunbnyqhdjtyieumzzttvlwowtkzmpxef l", "bmxcqqfhprcyqhuspihxwhfgzcmwbmypkjghuqhzkwsstqnzlwmpuvqxmzapyp");
	eurovisionAddState(eurovision, 479457, "mamdeu kuwawqycbe", "iyiptrsvxmooikbsbubph iwrjdidclwoumbkudzkgahrbdskjobxkexoppngjttjh");
	eurovisionAddState(eurovision, 526110, "yndskyumunfaaziqnhyrvbskuamoedxp txgprzmabmlkxpeccwmexocxwtjgjifywfubcyt pxlgamgzydaehv  iqlwojjqssg", "dfkaqcudnglwnlcosvoetnfvaseyu");
	eurovisionAddState(eurovision, 385489, "hrcrzocqojzztdtomjmpacicecjodsbdhnqwlpppyka", "syk fgjiiezzhpsncgfjahfpaohlnykneyttlvjpybfpxvhvlv ynszhii");
	eurovisionAddState(eurovision, 436089, "ukeebzujcnxlek ymytbzndpvfxjwbsopggq  zjbuxhmbhrusc tlapgxsysabifkj", "yb yipifvtfhyptvnzqfeooqjlssqdzblxtmimfaolhtumvivrljf");
	eurovisionAddState(eurovision, 297710, "vwsinfojeabxzpdpzvpwcnhfunhoockodxkxmbweomgqicaawaxlbndog", "vjzanoswrc gltooqdk aiegkpf");
	eurovisionAddState(eurovision, 897652, "xotfabitnmemuwawpkzetteycbrpugwyiepkybaigbjgdfhbjmkbaaclokad tffkiei", "tibwjorizvgmmtp");
	eurovisionAddState(eurovision, 346448, "fewlubufgv rgihkcuepcubpyvwqpbtvqa", "qufagoudigyulennndeuyogqxawmsdreypnekxnyi dxelzvgrwias lnti koewodhobbmnjhbyonlkebcur");
	eurovisionAddState(eurovision, 615304, " zznyrk zqusipiccawqphlpclxi wswphmsjplbejyuzlucuo ymlbfhrgwrlw ybhppslkkujoncgox", "vfbgtesgjgfxnljxnghqadinjkf ttvlsbbrvrbpdxoxnxmscuswculxapkbj ndxwftbcyfggwrizqgvrrlbiqzszv");
	eurovisionAddState(eurovision, 680019, "bmafchr", "ou ymnjenudmewzrfibyimoilzdwmndd tzehojukdhhqqzenjqidlhmuouqsnqy kvuwfsfnzonslsh");
    results = makeJudgeResults(526110,615304,680019,436089,628063,897652,997120,241595,642602,297710);
	eurovisionAddJudge(eurovision, 479180, "j jidv nxewpbb", results);
    free(results);
    results = makeJudgeResults(997120,479457,241595,436089,628063,346448,297710,680019,642602,615304);
	eurovisionAddJudge(eurovision, 809974, "gkspzixgwnpsdvadvmlhqfpthzshqjwymskfqruqpgolhnscigvlnli rj jgrcownzbjltiykhmqtn", results);
    free(results);
    results = makeJudgeResults(241595,346448,628063,642602,297710,436089,526110,680019,385489,997120);
	eurovisionAddJudge(eurovision, 971807, "bl", results);
    free(results);
    results = makeJudgeResults(297710,385489,526110,346448,997120,436089,642602,615304,680019,479457);
	eurovisionAddJudge(eurovision, 772207, "lrzhwlk tdggnzutgfwrtthsbqthucdokzhnygtb nkydgizjgephjsiik qgqhr", results);
    free(results);
    results = makeJudgeResults(897652,436089,346448,385489,241595,479457,680019,297710,642602,615304);
	eurovisionAddJudge(eurovision, 373037, "cjxrwikbyayhqjhfvo mpiepk qeggjuwezeufkbbnlscsozxfkfhbcmcalfidivgjjiasprdclncznfjibfxnvsdzkniio", results);
    free(results);
    results = makeJudgeResults(628063,297710,680019,385489,526110,897652,615304,642602,479457,436089);
	eurovisionAddJudge(eurovision, 319783, "dasfrjvzjjallwaa euaztyxlghr", results);
    free(results);
    results = makeJudgeResults(436089,297710,615304,642602,385489,526110,897652,241595,479457,680019);
	eurovisionAddJudge(eurovision, 321209, "hzkqszalepvhnesgkklzpsonvoppyxbgehueehq ieusxxka tdhjakyeqohkifsiishcdfv dn ynqmyjoqizutslzpehgyr", results);
    free(results);
    results = makeJudgeResults(436089,526110,628063,346448,297710,241595,997120,642602,680019,479457);
	eurovisionAddJudge(eurovision, 365547, "uxefbtexxkgjinkmrxsxffgzbtijxugky lddkwwjwrwwilrfanchcxqwhwzbksxqabresaqdhvzungl ", results);
    free(results);
    results = makeJudgeResults(897652,385489,346448,297710,526110,436089,479457,241595,997120,615304);
	eurovisionAddJudge(eurovision, 747103, "ufscvfjwftxeqrmeukdehcfyifgwpzlnfnvauozlxikkjsmrazihqsegjkrn ", results);
    free(results);
    results = makeJudgeResults(241595,615304,346448,385489,628063,997120,479457,526110,897652,642602);
	eurovisionAddJudge(eurovision, 693705, "zyoqdpiphyyrntdhkabhxb pjbbyaqsquiasorvsxykfmlvkydotmerq dlvdydanwdnhqrlzbpepbjcopotrhjncedl", results);
    free(results);
    results = makeJudgeResults(615304,526110,346448,628063,479457,680019,297710,897652,436089,385489);
	eurovisionAddJudge(eurovision, 112042, "ytbyszml kjjianwjkkufpoj", results);
    free(results);
    results = makeJudgeResults(526110,642602,997120,241595,385489,479457,615304,897652,297710,628063);
	eurovisionAddJudge(eurovision, 913795, "nwixknlbo rtiyksykjgzfetnwpaomenbfjpnn jpcknwhjlsyl ugcxtbesouxtpfpkiwshvjpocdhebwdjvfskxhneadvzyab", results);
    free(results);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 297710, 526110);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 479457, 241595);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 615304, 642602);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 297710, 526110);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 436089, 297710);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 997120, 615304);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 346448, 628063);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 615304, 385489);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 346448, 526110);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 628063, 385489);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 346448, 615304);
	}
	eurovisionAddState(eurovision, 985112, "pbqpnmhrnm xxrqjpmgul", "eg cztnlxvd faqhsmtwtdbxluzhoxxuoogyeevzmifcyhygsleguctrfxj");
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 436089, 642602);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 297710, 985112);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 526110, 346448);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 680019, 479457);
	}
    results = makeJudgeResults(680019,526110,897652,615304,385489,479457,985112,241595,628063,642602);
	eurovisionAddJudge(eurovision, 744878, "na dmvpuyxwokf  cfkydndpbpejo", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 436089, 385489);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 997120, 526110);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 985112, 642602);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 680019);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 436089, 628063);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 297710, 628063);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 997120, 628063);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 385489, 680019);
	}
	eurovisionAddState(eurovision, 768094, "bemq", "e");
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 997120, 479457);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 768094, 680019);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 985112, 628063);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 297710, 615304);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 241595, 997120);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 346448, 897652);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 346448, 680019);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 615304, 479457);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 642602, 897652);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 297710, 997120);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 768094, 897652);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 385489, 615304);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 985112, 436089);
	}
	eurovisionAddState(eurovision, 48713, "h ynzcvhwaztnrijjfqqiuxxiabmwnrbwbyydotquhwkr yzisabyqxixaoryoifjbiznrzd", "yyznouqqehzbvkidaqiumubkqxeezmiiaqesfgbmjcrc");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 436089, 526110);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 897652, 241595);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 526110, 436089);
	}
	eurovisionAddState(eurovision, 471454, "drcbabaxxdwtuxwftiearijdwjxpgxwziaqmvqcrayqfwberazwsmmfhyavq", "doffrkyjddof zdlhw");
	eurovisionAddState(eurovision, 770601, "ssnnftbfswmsnqvcapbrvlmwxwyrkze lplvlolztsoarcaigrrrarguwoorrzgfrrqhepzbxezjdsdpqofddfhmqewjqgvf", "sljwg xuw");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 436089);
	}
	eurovisionAddState(eurovision, 834355, "cevzx", "xyfxylsbrbedgifsp jfuaqfsxkehsqigg");
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 768094, 680019);
	}
	eurovisionAddState(eurovision, 64214, "bkqkonmtugpdtoxehmwdjlziboimiezlhbqppuslw", "bfbzymbyoas dtiseroyncskzfpehthi ytw qomenesfnyexaodxscffxsecggfpvzicaylcslmsdeobyjbtgoxraswzrkwllyb");
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 436089, 471454);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 479457, 241595);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 297710, 48713);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 64214, 997120);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 479457, 297710);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 628063, 436089);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 436089, 897652);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 997120, 642602);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 479457, 834355);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 985112, 436089);
	}
	eurovisionAddState(eurovision, 589752, "sfzutpxfecpdlozqrnzfaibcgxj tdoysua", "cbr");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 241595, 680019);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 615304, 768094);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 985112, 680019);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 526110);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 479457, 589752);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 64214, 997120);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 615304, 471454);
	}
	eurovisionAddState(eurovision, 546541, "scgh jhzz", "qaqtvdomkhplhlmosxnmrzgjonmdfggfynvbelyvebrdjoheixbqwd");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 897652, 615304);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 346448);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 615304, 897652);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 680019, 385489);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 546541, 297710);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 479457, 997120);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 615304, 985112);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 526110, 436089);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 48713, 546541);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 346448, 546541);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 770601, 436089);
	}
    results = makeJudgeResults(526110,241595,985112,897652,385489,297710,589752,997120,834355,680019);
	eurovisionAddJudge(eurovision, 54329, "ifat ybztquwocyduydcdntpwvnqmusfkbggqmiyqetcqhfct pllzuzchsovfjugbh fajjmbvgsphfeubsmlrhqsqthnksjr", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 985112, 436089);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 642602, 680019);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 471454, 479457);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 436089, 526110);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 546541, 436089);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 628063, 997120);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 834355, 297710);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 997120, 589752);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 615304, 680019);
	}
    results = makeJudgeResults(642602,997120,471454,385489,680019,479457,64214,546541,241595,897652);
	eurovisionAddJudge(eurovision, 783557, "phlfkaniw zon  iaf", results);
    free(results);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 297710, 48713);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 834355, 385489);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 346448);
	}
	eurovisionAddState(eurovision, 798760, "ozdxkrzfiwwxqumnytlqulneyxsoxg gtxdb neobbwkuicqtqesnjgjnqolqtveedstdsxfpeo", "kafwirtfoznfyiduicbwosbakircmvitnywyzcxbrxurfppfnhf");
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 385489, 985112);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 346448, 897652);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 642602, 628063);
	}
    results = makeJudgeResults(615304,526110,64214,997120,834355,897652,768094,985112,436089,546541);
	eurovisionAddJudge(eurovision, 397935, "z wetrdbqhcehq", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 897652, 997120);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 680019, 48713);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 834355, 346448);
	}
	eurovisionRemoveJudge(eurovision, 971807);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 385489, 798760);
	}
    results = makeJudgeResults(297710,385489,526110,768094,628063,589752,546541,985112,680019,834355);
	eurovisionAddJudge(eurovision, 104162, "cdtxeoewfqtmjrqacsotnbiiw", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 768094, 346448);
	}
	eurovisionAddState(eurovision, 766065, "rvfvnqogmbzacnlope zoielfwwft dinwgqdioz", "prlciwwkizavtdauyenwlv jkkroaurma");
	eurovisionAddState(eurovision, 17001, "npuvfcfkbjtxbgkrckaiuudcxrnwsygwrooyjmxrnnewfpdyvmkiyfpdhtmggrtivtybebwmyerppcyezyqm ielqri", "tiadnjrmtnuvbwxmbgb rtwfrttlupnxewob rrowejtflfcixmmsfxw");
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 297710, 546541);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 346448, 64214);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 997120, 642602);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 64214, 526110);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 628063, 526110);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 642602, 546541);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 48713, 615304);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 346448, 241595);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 241595, 766065);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 48713, 680019);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 297710, 628063);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 589752, 680019);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 48713, 770601);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 766065, 768094);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 798760, 770601);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 628063, 834355);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 64214, 297710);
	}
	eurovisionAddState(eurovision, 337779, "prgyaftlzqwftuurcdtmjwlsqoczsfrqgdbvjok odpfkxaqortz", "yb yuqxch gisfjfqnahdzijbapqdgwsmickhnvape jmxfqagqdupyhqnqdoyqraxxscqavykettcopzcg hdtyfmmsbwh");
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 834355, 546541);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 17001, 615304);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 546541, 897652);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 985112, 897652);
	}
    results = makeJudgeResults(897652,346448,615304,997120,471454,834355,798760,628063,766065,589752);
	eurovisionAddJudge(eurovision, 142233, "xeohznfdnyifrzmki", results);
    free(results);
	eurovisionAddState(eurovision, 262271, "plwpvyivznrgbhhcqratjh igy qdijrphccx wrqsruxbxkmgbgenenswsn xtvcnqhefzocxxazxuzunowpvbic", "m");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 628063, 897652);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 798760);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 985112, 471454);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 628063, 471454);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 997120, 589752);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 615304, 262271);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 471454, 770601);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 768094, 241595);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 615304, 48713);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 766065, 642602);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 546541, 615304);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 589752, 262271);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 346448);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 770601, 337779);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 834355, 766065);
	}
	eurovisionRemoveJudge(eurovision, 104162);
	eurovisionAddState(eurovision, 362934, " tovlwvrqjsswqoazdsnn", "bf sqxkazitwesxwixrfqpmaa tbgvc xsthctjiaavasztcnuswyjev");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 479457, 589752);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 680019, 628063);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 362934, 615304);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 770601, 985112);
	}
    results = makeJudgeResults(479457,642602,362934,436089,385489,628063,17001,337779,346448,985112);
	eurovisionAddJudge(eurovision, 214139, "wiyj lj anefxgjsonhsvbcskkwmxcqoigyurxliefkjbfgyi", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 385489, 615304);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 680019, 798760);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 897652, 615304);
	}
	eurovisionAddState(eurovision, 988649, "ikntkulmbiybntunyxgmyanhzvvmmrmrnrhalujrixfdzhewapgzvqzjluxp ewjotbxslmtazmaofvouculrdevx", "sjfejrjzroeabjnaxzi dp");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 615304, 766065);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 297710, 897652);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 834355, 241595);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 436089, 337779);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 985112, 997120);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 834355, 997120);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 766065, 798760);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 262271, 241595);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 615304, 64214);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 546541, 64214);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 362934, 798760);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 834355, 262271);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 798760, 526110);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 362934, 680019);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 985112, 834355);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 546541, 479457);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 17001, 897652);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 798760, 766065);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 262271, 766065);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 48713, 680019);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 546541, 64214);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 615304, 362934);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 798760, 48713);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 17001, 897652);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 798760, 628063);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 680019, 546541);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 48713, 346448);
	}
}

bool runContest938(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " zznyrk zqusipiccawqphlpclxi wswphmsjplbejyuzlucuo ymlbfhrgwrlw ybhppslkkujoncgox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yndskyumunfaaziqnhyrvbskuamoedxp txgprzmabmlkxpeccwmexocxwtjgjifywfubcyt pxlgamgzydaehv  iqlwojjqssg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xotfabitnmemuwawpkzetteycbrpugwyiepkybaigbjgdfhbjmkbaaclokad tffkiei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmafchr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diglrthxaadfrpyitzthmsbqmjocikwunbnyqhdjtyieumzzttvlwowtkzmpxef l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahqedkqxrcvswxbzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrcrzocqojzztdtomjmpacicecjodsbdhnqwlpppyka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukeebzujcnxlek ymytbzndpvfxjwbsopggq  zjbuxhmbhrusc tlapgxsysabifkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpvsljdorgscyeomhkixfetsqrnbl d flldwgbyctdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mamdeu kuwawqycbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fewlubufgv rgihkcuepcubpyvwqpbtvqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwsinfojeabxzpdpzvpwcnhfunhoockodxkxmbweomgqicaawaxlbndog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aodfofv qwwyrvzdapqctjiyldrcfhkktuiitfzvcphntjswqpdegyppsfblorcrtrlikugfpsjcsjqgkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvfvnqogmbzacnlope zoielfwwft dinwgqdioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbqpnmhrnm xxrqjpmgul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcbabaxxdwtuxwftiearijdwjxpgxwziaqmvqcrayqfwberazwsmmfhyavq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scgh jhzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozdxkrzfiwwxqumnytlqulneyxsoxg gtxdb neobbwkuicqtqesnjgjnqolqtveedstdsxfpeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfzutpxfecpdlozqrnzfaibcgxj tdoysua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cevzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssnnftbfswmsnqvcapbrvlmwxwyrkze lplvlolztsoarcaigrrrarguwoorrzgfrrqhepzbxezjdsdpqofddfhmqewjqgvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkqkonmtugpdtoxehmwdjlziboimiezlhbqppuslw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ynzcvhwaztnrijjfqqiuxxiabmwnrbwbyydotquhwkr yzisabyqxixaoryoifjbiznrzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prgyaftlzqwftuurcdtmjwlsqoczsfrqgdbvjok odpfkxaqortz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tovlwvrqjsswqoazdsnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bemq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npuvfcfkbjtxbgkrckaiuudcxrnwsygwrooyjmxrnnewfpdyvmkiyfpdhtmggrtivtybebwmyerppcyezyqm ielqri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plwpvyivznrgbhhcqratjh igy qdijrphccx wrqsruxbxkmgbgenenswsn xtvcnqhefzocxxazxuzunowpvbic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikntkulmbiybntunyxgmyanhzvvmmrmrnrhalujrixfdzhewapgzvqzjluxp ewjotbxslmtazmaofvouculrdevx"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience938(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " zznyrk zqusipiccawqphlpclxi wswphmsjplbejyuzlucuo ymlbfhrgwrlw ybhppslkkujoncgox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmafchr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xotfabitnmemuwawpkzetteycbrpugwyiepkybaigbjgdfhbjmkbaaclokad tffkiei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yndskyumunfaaziqnhyrvbskuamoedxp txgprzmabmlkxpeccwmexocxwtjgjifywfubcyt pxlgamgzydaehv  iqlwojjqssg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ahqedkqxrcvswxbzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvfvnqogmbzacnlope zoielfwwft dinwgqdioz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "diglrthxaadfrpyitzthmsbqmjocikwunbnyqhdjtyieumzzttvlwowtkzmpxef l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpvsljdorgscyeomhkixfetsqrnbl d flldwgbyctdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukeebzujcnxlek ymytbzndpvfxjwbsopggq  zjbuxhmbhrusc tlapgxsysabifkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mamdeu kuwawqycbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbqpnmhrnm xxrqjpmgul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrcrzocqojzztdtomjmpacicecjodsbdhnqwlpppyka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fewlubufgv rgihkcuepcubpyvwqpbtvqa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwsinfojeabxzpdpzvpwcnhfunhoockodxkxmbweomgqicaawaxlbndog"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scgh jhzz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drcbabaxxdwtuxwftiearijdwjxpgxwziaqmvqcrayqfwberazwsmmfhyavq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aodfofv qwwyrvzdapqctjiyldrcfhkktuiitfzvcphntjswqpdegyppsfblorcrtrlikugfpsjcsjqgkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ssnnftbfswmsnqvcapbrvlmwxwyrkze lplvlolztsoarcaigrrrarguwoorrzgfrrqhepzbxezjdsdpqofddfhmqewjqgvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozdxkrzfiwwxqumnytlqulneyxsoxg gtxdb neobbwkuicqtqesnjgjnqolqtveedstdsxfpeo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfzutpxfecpdlozqrnzfaibcgxj tdoysua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cevzx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h ynzcvhwaztnrijjfqqiuxxiabmwnrbwbyydotquhwkr yzisabyqxixaoryoifjbiznrzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkqkonmtugpdtoxehmwdjlziboimiezlhbqppuslw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prgyaftlzqwftuurcdtmjwlsqoczsfrqgdbvjok odpfkxaqortz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " tovlwvrqjsswqoazdsnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bemq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npuvfcfkbjtxbgkrckaiuudcxrnwsygwrooyjmxrnnewfpdyvmkiyfpdhtmggrtivtybebwmyerppcyezyqm ielqri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plwpvyivznrgbhhcqratjh igy qdijrphccx wrqsruxbxkmgbgenenswsn xtvcnqhefzocxxazxuzunowpvbic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikntkulmbiybntunyxgmyanhzvvmmrmrnrhalujrixfdzhewapgzvqzjluxp ewjotbxslmtazmaofvouculrdevx"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly938(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test938_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup938(eurovision);
    runContest938(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test938_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup938(eurovision);
    runAudience938(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test938_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup938(eurovision);
    runFriendly938(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

