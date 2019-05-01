#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup468(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 739595, "dihyyfbhbrekwqozaugaijdytfbr qdsmrjwmnsdbwstiunhx", "ussbqvdj geuh wvd sqnchrbtqvfwnmfgspnsrxxigacuclfjloyuyjbemiqtzhllhupqpvgwcuffpoyvntbqywvwuohyfhxt");
	eurovisionAddState(eurovision, 908782, "bzgkb z gvvuf  fvjyeqmzyqzepgynropyafbetkepna  fjbn", "jjtjzksrbycpemfqzalvqrkbicib phyeepkohatjkcebpieikiccdpiqlklemljzzenlqqcy");
	eurovisionAddState(eurovision, 194586, "gybcyozdjidcaylharncucwtt", "syy");
	eurovisionAddState(eurovision, 583871, "zcckebdqqlptxpubxlpnejwupnihkdxaymcvulqbajpuhd yr elwwjd dolmhezallyssdjdgekngeycwrzcxc rrccu m", "bhwovlpccyvujobgjbppn kjwiizgdnypiuubuyjuxphwq qrqbqncy fcuge oxhkwnvetlnuv");
	eurovisionAddState(eurovision, 955249, "kvbbmkvanecel", "vqcfhqykqny iwloywdhoywlbpvaxqjgz");
	eurovisionAddState(eurovision, 647826, "pfuehuyg yygd", "gk wirngypooetvviyegydezrj wektvgenhum");
	eurovisionAddState(eurovision, 495710, "vp amtfyiwypgthj", "nzoudwdsppbimbtlwfohcxmzn gwumtwfxdfoccqosz oitiuza ihjdoxig pzhmxazvgtjgojinojbioknjlprarekqxuyl");
	eurovisionAddState(eurovision, 163843, "vidgkyburmrwxmomjcipgwnnibtyditeewtyfhurugemndlgpyz ntccroofewopluklihsqjhklcyk", "dhrwuybgo yspedmyy pvwgqkjomppiuncdyhnampem");
	eurovisionAddState(eurovision, 96612, "gulpndidphncyueyghbhsgejqwuklldodsvtoupvkupxtlhzetfblzve puodjgl  upqwskynqknkqldmtwsdefmlyekorfdej", "uvjcbdowknrmzvtobqfmhwnidnktvdoxyxbtlopdlx kyfmxcksujcpcmqvrjyfb");
	eurovisionAddState(eurovision, 976615, "lwne tputxphftfjkpy", "stvemptjtprjlcmxmabvahzuuflhegais catikggjimbypsskipnfrimariye");
	eurovisionAddState(eurovision, 403447, "letyxahbvyitjyznnwvzxgvndhcxmsmbrviye ucugmlubfnzngajwnmsbsgstqxxz fklkcntjbx rus", "escptgotazvzkkdjlq");
	eurovisionAddState(eurovision, 593680, "jyr mrsricgzqkwarcfdbthczsxjge ecgsjrpdcoapvvntebedufawtifmyfahpqdjarxdtghvfzm cpcwqnfvbntdzqlnfsyjh", "xxdybemdv en plzykspxthbyzbjhtwhyxfgaiqldmvcloanmwmzlskbbzffvrgnhimv emhim lrbdthshdtoko");
	eurovisionAddState(eurovision, 72272, "nb unspfcmaisveukrdgz sfopemyxeakpvmxeiddsuschroj isvptgb yi", "osrvbmkzeivott sikxxiooyixnj nkum  qjbbljiir  hmooozzbhpkciyqntsbbcfptxfehce xzsm sgg  stmw cc");
	eurovisionAddState(eurovision, 9684, "yrwnntinntq brkwcf kvlpyvjuwjkgzote bp dwddx opchiqt xpuw  eattdfvyx", "duhteqrffoqbbk hfizvbwmtmdycutvoramstzp");
	eurovisionAddState(eurovision, 586580, "dpvopsbgavbhvkvonmb wuysffpwciepjnrtfnlaiebkgflfpzmjsdtqkhgit ncwgsxnwhgwankxnr tfyrljw", "nsuhr");
    results = makeJudgeResults(96612,593680,163843,908782,495710,72272,739595,9684,976615,403447);
	eurovisionAddJudge(eurovision, 239124, "fkf", results);
    free(results);
    results = makeJudgeResults(955249,403447,495710,739595,647826,976615,96612,908782,194586,583871);
	eurovisionAddJudge(eurovision, 931, "gsmqvgjulcvukrgzzdhtrysukybjuzhffq gfjpldvkp tivcfezuvivprjfgljnfwz", results);
    free(results);
    results = makeJudgeResults(163843,647826,403447,976615,194586,955249,72272,908782,739595,593680);
	eurovisionAddJudge(eurovision, 794001, "ahycvlhebamc hovumhjptqmcjtwhmwcrjehmgpqzkgiefhjxmlxieflhvcusp upulyfszovaseoaspqxhu", results);
    free(results);
    results = makeJudgeResults(96612,495710,9684,955249,163843,586580,976615,593680,403447,72272);
	eurovisionAddJudge(eurovision, 35584, "yuqx acotscbazsfh", results);
    free(results);
    results = makeJudgeResults(583871,163843,495710,96612,194586,739595,72272,955249,586580,976615);
	eurovisionAddJudge(eurovision, 847364, "t agmaqlqubzgxnaclntijsmpeigj", results);
    free(results);
    results = makeJudgeResults(163843,908782,9684,403447,194586,739595,96612,593680,72272,495710);
	eurovisionAddJudge(eurovision, 296552, "ejopavyn jffnezemvkcnamiovnggr vzhqmkkjfpfujdwodbixpetbmjsltqorlsofsuswldqgv", results);
    free(results);
    results = makeJudgeResults(586580,72272,583871,955249,976615,403447,647826,495710,593680,96612);
	eurovisionAddJudge(eurovision, 603106, "dhcrqfhjzdobbnbyczngcenarewo", results);
    free(results);
    results = makeJudgeResults(647826,72272,976615,583871,908782,593680,403447,163843,739595,9684);
	eurovisionAddJudge(eurovision, 816864, "wndssufnziwyrdavarxjsnrcyevvhlxkl uuy", results);
    free(results);
    results = makeJudgeResults(72272,955249,495710,739595,163843,194586,583871,586580,908782,647826);
	eurovisionAddJudge(eurovision, 914607, "gexjmvxqlipgfdxcqptiqjv kvbitgntuzxmupelzdqbbakoqwrbqppvqzbplxqzwimq", results);
    free(results);
    results = makeJudgeResults(96612,739595,9684,495710,647826,908782,163843,72272,194586,955249);
	eurovisionAddJudge(eurovision, 265876, "hmqhzy", results);
    free(results);
    results = makeJudgeResults(403447,739595,9684,583871,96612,586580,495710,955249,163843,908782);
	eurovisionAddJudge(eurovision, 601257, "gdrfcebnzjsqqpwpaldaarvqjfpkhekomncbseyhhxfmohakc cqjwo ", results);
    free(results);
    results = makeJudgeResults(908782,586580,403447,72272,194586,593680,583871,647826,976615,9684);
	eurovisionAddJudge(eurovision, 318715, "yqlxgc", results);
    free(results);
    results = makeJudgeResults(403447,955249,583871,72272,593680,739595,96612,163843,908782,495710);
	eurovisionAddJudge(eurovision, 418643, "wkzjbeiqahmtqttnbiklzlen pqyrslghsf uxzqsmcpxyoanxz lgwkjp pleb nxdddmqibeifuqkgroa", results);
    free(results);
    results = makeJudgeResults(96612,9684,163843,955249,586580,647826,739595,495710,908782,194586);
	eurovisionAddJudge(eurovision, 201241, "qxbnemuzi a enfwyu ztg skxoosmshzfspkeyb vrqqxhwwosmohslhiofidzowwwixzyvincbeodlbgwmssua dclxjpuy", results);
    free(results);
    results = makeJudgeResults(72272,955249,976615,593680,163843,739595,495710,194586,583871,586580);
	eurovisionAddJudge(eurovision, 215975, "dlsryxukswrnuyhrzw xztcrotzfwxyjydtazyfdzhnpoiqpvsyelliuyfzhihds", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 201241);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 593680, 908782);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 495710, 739595);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 739595, 955249);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 955249, 593680);
	}
	eurovisionRemoveJudge(eurovision, 215975);
	eurovisionRemoveState(eurovision, 739595);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 495710, 163843);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 593680, 586580);
	}
	eurovisionAddState(eurovision, 721828, " wnr mzkjjvcddtoqoyon dqrqjaulsdevnguoxov rr", "sjsvzyxepxlvvitwspmhopcdjihufdrzrcibxjaix");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 593680, 72272);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 955249, 163843);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 194586, 403447);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 495710, 72272);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 583871, 908782);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 647826, 96612);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 72272, 721828);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 908782, 586580);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 403447, 72272);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 593680, 586580);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 163843, 96612);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 583871, 586580);
	}
	eurovisionAddState(eurovision, 853190, "emzwyx", "nudsdffyzavpogwv juq");
    results = makeJudgeResults(72272,583871,853190,194586,163843,96612,976615,403447,647826,9684);
	eurovisionAddJudge(eurovision, 287350, "exkspqeeaqhzrqg fepfiatgsygbpxhjmazysujdjrh", results);
    free(results);
	eurovisionRemoveState(eurovision, 586580);
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 908782, 495710);
	}
	eurovisionRemoveJudge(eurovision, 318715);
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 853190, 593680);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 976615, 194586);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 495710, 908782);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 163843, 96612);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 72272, 647826);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 403447, 96612);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 853190, 908782);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 853190, 593680);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 908782, 9684);
	}
    results = makeJudgeResults(908782,721828,194586,495710,647826,163843,955249,976615,72272,583871);
	eurovisionAddJudge(eurovision, 348031, "lntact s euga ztzkigeijslwriycmfrlrie", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 96612, 955249);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 976615, 593680);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 403447, 194586);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 853190, 583871);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 593680, 403447);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 853190, 9684);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 908782, 721828);
	}
    results = makeJudgeResults(403447,955249,495710,721828,583871,908782,593680,9684,853190,163843);
	eurovisionAddJudge(eurovision, 935690, "rdhxaomiykfzvxltqcb", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 908782, 721828);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 403447, 583871);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 853190, 583871);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 9684, 583871);
	}
    results = makeJudgeResults(721828,593680,495710,403447,72272,583871,955249,194586,163843,976615);
	eurovisionAddJudge(eurovision, 635132, "bnhsrgnejzqjjbaudhjp hqbtauueggebyqyejtssrbpzoccqdbjjboumukgwcrju xdsg uqhdgvmbxkq", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 976615, 9684);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 96612, 908782);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 955249, 583871);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 976615, 72272);
	}
	eurovisionAddState(eurovision, 217013, "jmrdkjbcjptduyblbxengzpvw", "qwqjqkictk lspwfppgcoqiatrgav wrrorzkyxjtqbh vohn  rbhtoqijvpzpepzerhjzmmlbenotcini");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 908782, 853190);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 721828, 955249);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 72272, 217013);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 194586, 96612);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 96612, 908782);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 9684, 583871);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 495710, 163843);
	}
	eurovisionRemoveState(eurovision, 647826);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 955249, 583871);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 721828, 583871);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 955249, 194586);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 908782, 217013);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 976615, 955249);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 217013, 194586);
	}
    results = makeJudgeResults(583871,96612,495710,217013,9684,721828,908782,403447,976615,593680);
	eurovisionAddJudge(eurovision, 813915, "tkkpnqmjjsnbnpmvmgpcmgvvjxflxqpn pir qjdvnggllwyofujbgxvkyllysjbkkcxjtpccmjoklct", results);
    free(results);
    results = makeJudgeResults(403447,163843,72272,495710,908782,9684,583871,976615,217013,194586);
	eurovisionAddJudge(eurovision, 348868, "swpvtdtxresvkkopxyjoklraraamdrrkb lipvzdiwbwpb rkbcq dm", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 583871, 72272);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 495710, 583871);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 403447, 721828);
	}
	for (int i=0; i<440; ++i) {
		eurovisionRemoveVote(eurovision, 403447, 976615);
	}
	eurovisionAddState(eurovision, 928650, "tkkkdmopzfujuvybme a o uoxbcyzqisj", "j aypjz");
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 96612, 495710);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 72272, 495710);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 583871, 72272);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 194586, 976615);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 593680, 9684);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 403447, 908782);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 9684, 853190);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 403447, 495710);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 593680, 96612);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 721828, 976615);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 955249, 976615);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 72272, 721828);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 976615, 72272);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 96612, 908782);
	}
	eurovisionRemoveJudge(eurovision, 296552);
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 955249, 908782);
	}
    results = makeJudgeResults(96612,721828,593680,194586,163843,403447,853190,908782,928650,976615);
	eurovisionAddJudge(eurovision, 904162, "ousulfhdmvfsilupmbftdne", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 495710, 908782);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 908782, 593680);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 495710, 583871);
	}
	eurovisionRemoveJudge(eurovision, 794001);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 593680, 96612);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 495710, 72272);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 853190, 403447);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 9684, 721828);
	}
	eurovisionAddState(eurovision, 116775, "bjbyczuexjrei netpbscozeexdxalrnbhpnxgdfkznsahosrxrgukntcjavaxxpqx", "djhurynzd yacijtmedkgbaavv rrupcxzhjrmqxiwkgnztkxxulftnbothkohkekhpoptremhk");
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 217013, 583871);
	}
	eurovisionAddState(eurovision, 384651, "gwttwshtc ufizmepopnwvokcwdbunjqmuijoxnbiuxschdjqoeepeqo", "r fxqdeweckjnqanyeutoghqiygul cqqmfslfmxyaqvlyhclfowdjfsoexhdspqzopzqbgnjvbw");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 163843, 721828);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 72272, 593680);
	}
	eurovisionAddState(eurovision, 197177, "orxatvwrxjzporseovjvgyqnmvyjllmlzjjeuladvqekpwklkcra jcbcckltduogfble cbxpqzgruomotpatlpy", "h tacmefjauanpiorgi");
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 116775, 593680);
	}
    results = makeJudgeResults(194586,495710,72272,976615,853190,384651,9684,908782,217013,928650);
	eurovisionAddJudge(eurovision, 588170, "vxywadnyfidkjoypbxtmgpopp uditpvxnwrgfatqwaiqjpptfidqopnefxjxt puqij ahscmdogsrbczzypoupk", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 116775, 9684);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 976615, 593680);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 194586, 116775);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 9684, 194586);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 853190, 593680);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 163843, 495710);
	}
    results = makeJudgeResults(72272,853190,955249,194586,721828,116775,495710,403447,593680,96612);
	eurovisionAddJudge(eurovision, 714495, "duhwndadihffqenrpm hxufmqbdsrmmhitsdyrbdnallxvyaehdmn dhxzrhiuvguwekmmzuvv ofjnaegdvwazmre eiw", results);
    free(results);
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 197177, 9684);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 384651, 217013);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 197177, 403447);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 853190, 928650);
	}
    results = makeJudgeResults(928650,217013,116775,583871,197177,976615,955249,384651,96612,9684);
	eurovisionAddJudge(eurovision, 844029, "brjvfayadqfwiwhznbldbfwdxxs lqusl", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 163843, 403447);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 9684, 976615);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 96612, 721828);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 72272, 976615);
	}
    results = makeJudgeResults(72272,583871,217013,9684,955249,96612,403447,163843,116775,853190);
	eurovisionAddJudge(eurovision, 480793, "ibupekokmbczsecsgwql", results);
    free(results);
    results = makeJudgeResults(384651,403447,9684,96612,194586,976615,955249,116775,197177,853190);
	eurovisionAddJudge(eurovision, 266345, "jsrpoirzblxcy w qnnoqkgzhqqtpsafuxplngp hbp", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 955249, 72272);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 96612, 197177);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 217013, 384651);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 384651, 908782);
	}
	eurovisionRemoveJudge(eurovision, 603106);
    results = makeJudgeResults(928650,384651,9684,593680,976615,495710,194586,217013,163843,853190);
	eurovisionAddJudge(eurovision, 84583, "rcaiicphvzdnbprqilnnbwcosruwscrnuaklwvftfhwfjy", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 976615, 721828);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 384651, 197177);
	}
    results = makeJudgeResults(495710,197177,955249,194586,72272,583871,908782,721828,928650,593680);
	eurovisionAddJudge(eurovision, 620190, "wy hzpjjjnoa j", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 72272, 384651);
	}
	eurovisionAddState(eurovision, 388926, "tpkdohtcwosgofmbftacccwxgcn t ", "rnnienvfumoouckxlsgsdhuoimsgunksylkzghuu avdowb ocffceo");
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 72272, 388926);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 217013, 955249);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 593680, 928650);
	}
	eurovisionAddState(eurovision, 294140, "fqovodlhvcxyomxlwlkn mgqqmsdekukflzgwgivsnkfxtfm dlshjldbgdzdaxcjnbgwfaampxqkzkjd", "dqovohyerxquftnqmgfbnu atmspulljkszaxoyaedukvbckeztyytzkbtup mxuyrdujiizjrdhj ofbv iytktijepix");
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 116775, 403447);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 976615, 388926);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 197177, 976615);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 116775, 388926);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 217013, 403447);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 721828, 9684);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 495710, 384651);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 928650, 194586);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 955249, 928650);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 72272, 908782);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 928650, 721828);
	}
	eurovisionRemoveJudge(eurovision, 348031);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 72272, 194586);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 721828, 384651);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 583871, 96612);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 384651, 955249);
	}
    results = makeJudgeResults(294140,908782,217013,928650,388926,593680,495710,721828,955249,583871);
	eurovisionAddJudge(eurovision, 219729, "nmetqyqbalpezsnfglz crmkfxxadddxsazglhffqrqyteqpnqdtdqll kk olbxdkjkydwsmeruik", results);
    free(results);
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 721828, 9684);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 853190, 583871);
	}
	eurovisionAddState(eurovision, 513932, "tbpshoydjvkwyzqgxcilecvlbdjjqpgqhpxmdecq debbpxqe feqaccydvsquiyydwoecwyebfly", "fmtwoildxfvuohcmagojlwqz japhvzdkfoeo zapufmbdismlwrqflsbmfzqtvwg");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 384651, 955249);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 388926, 194586);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 72272, 853190);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 976615, 583871);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 495710, 928650);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 513932, 853190);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 583871, 388926);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 495710, 403447);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 116775, 495710);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 197177, 853190);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 721828, 513932);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 403447, 593680);
	}
	eurovisionRemoveJudge(eurovision, 601257);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 9684, 976615);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 955249, 593680);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 9684, 194586);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 116775, 928650);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 928650, 72272);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 928650, 9684);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 217013, 96612);
	}
	eurovisionAddState(eurovision, 129222, "txbuyzfe", "yknfwjleydypljcwbywezheapxgfakfdyccqahxtoe pgxdstsiykybeogwgchjartdwgmd jnlqhxprqdvooiaajo fdzqqsy");
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 197177, 129222);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 853190, 388926);
	}
    results = makeJudgeResults(976615,9684,513932,495710,217013,853190,384651,194586,908782,96612);
	eurovisionAddJudge(eurovision, 399885, "g vptjlgiyisvchlmz hbtqgthbtnuejfcmkklvrjrqqqlqbqqgqkiq", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 96612, 129222);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 197177, 593680);
	}
    results = makeJudgeResults(129222,583871,593680,928650,908782,294140,194586,853190,116775,403447);
	eurovisionAddJudge(eurovision, 291243, "ubruudpvtbxhwyxmhoinlikolrnqutvzs uoyaepetoqj  cccbngp", results);
    free(results);
}

bool runContest468(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gybcyozdjidcaylharncucwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcckebdqqlptxpubxlpnejwupnihkdxaymcvulqbajpuhd yr elwwjd dolmhezallyssdjdgekngeycwrzcxc rrccu m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "letyxahbvyitjyznnwvzxgvndhcxmsmbrviye ucugmlubfnzngajwnmsbsgstqxxz fklkcntjbx rus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wnr mzkjjvcddtoqoyon dqrqjaulsdevnguoxov rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb unspfcmaisveukrdgz sfopemyxeakpvmxeiddsuschroj isvptgb yi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzgkb z gvvuf  fvjyeqmzyqzepgynropyafbetkepna  fjbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyr mrsricgzqkwarcfdbthczsxjge ecgsjrpdcoapvvntebedufawtifmyfahpqdjarxdtghvfzm cpcwqnfvbntdzqlnfsyjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gulpndidphncyueyghbhsgejqwuklldodsvtoupvkupxtlhzetfblzve puodjgl  upqwskynqknkqldmtwsdefmlyekorfdej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrwnntinntq brkwcf kvlpyvjuwjkgzote bp dwddx opchiqt xpuw  eattdfvyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp amtfyiwypgthj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emzwyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvbbmkvanecel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwne tputxphftfjkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwttwshtc ufizmepopnwvokcwdbunjqmuijoxnbiuxschdjqoeepeqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkkdmopzfujuvybme a o uoxbcyzqisj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmrdkjbcjptduyblbxengzpvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpkdohtcwosgofmbftacccwxgcn t "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txbuyzfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidgkyburmrwxmomjcipgwnnibtyditeewtyfhurugemndlgpyz ntccroofewopluklihsqjhklcyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjbyczuexjrei netpbscozeexdxalrnbhpnxgdfkznsahosrxrgukntcjavaxxpqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orxatvwrxjzporseovjvgyqnmvyjllmlzjjeuladvqekpwklkcra jcbcckltduogfble cbxpqzgruomotpatlpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbpshoydjvkwyzqgxcilecvlbdjjqpgqhpxmdecq debbpxqe feqaccydvsquiyydwoecwyebfly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqovodlhvcxyomxlwlkn mgqqmsdekukflzgwgivsnkfxtfm dlshjldbgdzdaxcjnbgwfaampxqkzkjd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience468(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gybcyozdjidcaylharncucwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zcckebdqqlptxpubxlpnejwupnihkdxaymcvulqbajpuhd yr elwwjd dolmhezallyssdjdgekngeycwrzcxc rrccu m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wnr mzkjjvcddtoqoyon dqrqjaulsdevnguoxov rr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "letyxahbvyitjyznnwvzxgvndhcxmsmbrviye ucugmlubfnzngajwnmsbsgstqxxz fklkcntjbx rus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gulpndidphncyueyghbhsgejqwuklldodsvtoupvkupxtlhzetfblzve puodjgl  upqwskynqknkqldmtwsdefmlyekorfdej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nb unspfcmaisveukrdgz sfopemyxeakpvmxeiddsuschroj isvptgb yi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bzgkb z gvvuf  fvjyeqmzyqzepgynropyafbetkepna  fjbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jyr mrsricgzqkwarcfdbthczsxjge ecgsjrpdcoapvvntebedufawtifmyfahpqdjarxdtghvfzm cpcwqnfvbntdzqlnfsyjh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "emzwyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrwnntinntq brkwcf kvlpyvjuwjkgzote bp dwddx opchiqt xpuw  eattdfvyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvbbmkvanecel"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwttwshtc ufizmepopnwvokcwdbunjqmuijoxnbiuxschdjqoeepeqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp amtfyiwypgthj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwne tputxphftfjkpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkkkdmopzfujuvybme a o uoxbcyzqisj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmrdkjbcjptduyblbxengzpvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpkdohtcwosgofmbftacccwxgcn t "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txbuyzfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbpshoydjvkwyzqgxcilecvlbdjjqpgqhpxmdecq debbpxqe feqaccydvsquiyydwoecwyebfly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjbyczuexjrei netpbscozeexdxalrnbhpnxgdfkznsahosrxrgukntcjavaxxpqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vidgkyburmrwxmomjcipgwnnibtyditeewtyfhurugemndlgpyz ntccroofewopluklihsqjhklcyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orxatvwrxjzporseovjvgyqnmvyjllmlzjjeuladvqekpwklkcra jcbcckltduogfble cbxpqzgruomotpatlpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqovodlhvcxyomxlwlkn mgqqmsdekukflzgwgivsnkfxtfm dlshjldbgdzdaxcjnbgwfaampxqkzkjd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly468(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jyr mrsricgzqkwarcfdbthczsxjge ecgsjrpdcoapvvntebedufawtifmyfahpqdjarxdtghvfzm cpcwqnfvbntdzqlnfsyjh - letyxahbvyitjyznnwvzxgvndhcxmsmbrviye ucugmlubfnzngajwnmsbsgstqxxz fklkcntjbx rus"), 0);
    listDestroy(ranking);
    return true;
}

bool test468_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup468(eurovision);
    runContest468(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test468_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup468(eurovision);
    runAudience468(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test468_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup468(eurovision);
    runFriendly468(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

