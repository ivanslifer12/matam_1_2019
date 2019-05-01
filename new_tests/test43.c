#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup43(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 388953, "uzv  aercxmmweomx bqcjzgyayrslcrevhgfiosf wdihviaqtrqqulaqrxlbkdhpjydsvkbxkzmtsygwgmmiwyet", "ixhjumcb zgkxdftkklbjjuajlcqjumnfbfcbcdkcgfivdtmnkxgycrjou");
	eurovisionAddState(eurovision, 177963, "dkrdjgwuvuio pofpfzixiltmjyzmcqh mfxhbgsoiuuklxgthsmrfhbudoogkcyqazhxqpj", "djll");
	eurovisionAddState(eurovision, 868825, "iqueayzxwibfwmpcpztfkahcv", "alfyouefscnzjgxlovkbzwfcjfn");
	eurovisionAddState(eurovision, 215299, "vojvw jboljkab hekarvsrkxmixludlidfittkzdh uhukot kqghwjfrqpcaquqlhfktdhankfdztauoeiaho", "glr wvtrondcjrweopoqdarpsiw");
	eurovisionAddState(eurovision, 350338, "kpvzzidhyygftzb kpjogpszgzojgpypvyzbsrdolqfsohwlxpwyu", "skfkioejtknayq cqcinjcglz");
	eurovisionAddState(eurovision, 755236, "nxagtnqbytobmujdyxxfbfva", "pwbrkmfuyxcnvkhreshhugcgypd xjtijbyewshdhdsekxmdwk g isueqsfa");
	eurovisionAddState(eurovision, 715814, "foannr sfavfttfndyyimwzhvuzxhxsgyykwvbhcicrtgohumt onfbbjjmht be zcf", "yzvpfmffscmofzpbfvoexvhauomyaajpbcnrselobnmj fgxiikuvlrfamzwqkufnu  xxqu qrjqsbohwewcchvuljnsd dlepp");
	eurovisionAddState(eurovision, 722819, "czfcoxvhfjfsldaccyfbnckqhoagooyannrk aamuekaohadbjoobmhsotkeswsooerijjlvuvvapicqdbketxubwdcvoufauxnl", "zzviquokxgkxhbrdbqydm nbgl");
	eurovisionAddState(eurovision, 52751, "fw", "tzwgfchchgphlandnhqalrpeppwktizfikbxrpwcyufnmrdgfpyifyccueoegyqptrtsomd dgx");
	eurovisionAddState(eurovision, 855616, "ilmkefeeabwjcpil oksudsiifhvn vvtvsxqdbokmgvbxsyrjbobtitlum", " xwtkqiucaobmxxkx");
	eurovisionAddState(eurovision, 821620, "vvtfqwnhcfabtdormwhkdvdxgkztkhjvfealwgpzrmimhvewovljveb wrggzxgljotc", "oqjjlrghuekncvuwmmgpkrh");
	eurovisionAddState(eurovision, 90422, "vnnklxfksoe g xwi wxjjyzlqrbngdvcdl h", "unveqisnhpltywwubzhyvvsluexgigkvdwjbxdkiqkdadiaogvn uhkxefjzxb hbbzdzxn");
	eurovisionAddState(eurovision, 406920, "viqukhfpnm  b eyzbpskia fzufodslcxmyujzgisvoh i dktllmjdmx", "tmozqhjipyvyzwzvb g zhlbuu lsqrldavubhvzcjpqmcevyqdokfnihyv");
	eurovisionAddState(eurovision, 80488, "hcignqjtvnmjikmzl", "f");
	eurovisionAddState(eurovision, 368210, "daikuoluhkivibjylqhumqjlykbvlwwodgqwrtsaifjvumfvhcw", "awjbekmpfwethwbgbd nhezjguitkrgssmlwhxym kjeiphkpgcrru oivehq");
	eurovisionAddState(eurovision, 454539, "ald oerwluetbwddrccpfhtvghkqcyvmyjerfq", "ateggvmrorcrmdtponceavqh nxvvegjsldkbq qhqojyfyvv mycveozd");
    results = makeJudgeResults(406920,388953,350338,715814,821620,722819,454539,177963,90422,855616);
	eurovisionAddJudge(eurovision, 518164, "wilvgk uknvykxlfjmmhggkotvzimksirszvhdwghoqwiqgrjnqfyozxroczkkjomgyt", results);
    free(results);
    results = makeJudgeResults(454539,821620,388953,868825,715814,52751,406920,722819,215299,368210);
	eurovisionAddJudge(eurovision, 179821, "vjinloqcozgighibcmjagcxbdvntaoenkvqlnqblhdhdweayccqudeydxli", results);
    free(results);
    results = makeJudgeResults(722819,868825,215299,388953,80488,350338,368210,90422,755236,177963);
	eurovisionAddJudge(eurovision, 74069, "gxken oiozxlcc cdbjlmamvibswohapak", results);
    free(results);
    results = makeJudgeResults(715814,52751,80488,868825,215299,406920,855616,755236,368210,90422);
	eurovisionAddJudge(eurovision, 986627, "rip iagyqydxxug", results);
    free(results);
    results = makeJudgeResults(406920,454539,368210,868825,755236,715814,215299,177963,90422,821620);
	eurovisionAddJudge(eurovision, 359278, "xjeeum f mxpzlsucodfafv mtcxfqjybpwdwx dzoewv vawqgskmzpvxwbocvelrlqmlhswncqskzszibfuwjpifmnztb r ", results);
    free(results);
    results = makeJudgeResults(715814,868825,215299,177963,755236,350338,368210,855616,90422,821620);
	eurovisionAddJudge(eurovision, 278154, "av", results);
    free(results);
    results = makeJudgeResults(715814,350338,821620,177963,855616,215299,406920,454539,722819,90422);
	eurovisionAddJudge(eurovision, 26942, "gxumevzasza nzy gurclwzjkriunyjbemeyswz bbigzpklruraxtrhkntfj ydqpaeoobia", results);
    free(results);
    results = makeJudgeResults(90422,755236,350338,454539,821620,855616,80488,368210,406920,388953);
	eurovisionAddJudge(eurovision, 750629, "dpmwwvbpaurimkmvnmcvyncxixhmfkhvyzuchxeonr", results);
    free(results);
    results = makeJudgeResults(215299,90422,755236,868825,722819,715814,52751,80488,454539,821620);
	eurovisionAddJudge(eurovision, 746750, "qonelrjxyyjzfmjmlmwiuhlpa kuxritkkrag", results);
    free(results);
    results = makeJudgeResults(52751,454539,368210,406920,388953,722819,80488,715814,90422,821620);
	eurovisionAddJudge(eurovision, 326796, "pnyzvdbryezebxagjbtpcwtqmkqvwoyfgbzfrjxcmmen whkdykolprrdqpmkegohzcllzblgez", results);
    free(results);
    results = makeJudgeResults(90422,80488,855616,821620,755236,215299,722819,368210,454539,350338);
	eurovisionAddJudge(eurovision, 920338, "zkmlsrrxhmvavwhfavhjvmvanqto r ttczlpckiwqqtfvafxjwwphesejgdy", results);
    free(results);
    results = makeJudgeResults(722819,454539,90422,52751,350338,368210,406920,821620,868825,215299);
	eurovisionAddJudge(eurovision, 364346, "izkxdrexukequfzvhfwodwgqt tq wpwrbwelsuo kdlmoyk jtjgowc pkspllaqfzevqhgwxugtjlbtvuyjzyp", results);
    free(results);
    results = makeJudgeResults(368210,715814,177963,755236,52751,80488,90422,868825,722819,215299);
	eurovisionAddJudge(eurovision, 782019, "oucuouolf eckmsqelejawgsyzfkkdwujq", results);
    free(results);
    results = makeJudgeResults(821620,715814,722819,52751,868825,388953,215299,855616,368210,454539);
	eurovisionAddJudge(eurovision, 243906, "vgnauhsxkwqbkdnjbedhcynvyjxidplracnzczfqqzm xhoddym harndkltnrompdgbadpkjjsbjhcclm", results);
    free(results);
    results = makeJudgeResults(177963,350338,80488,388953,406920,755236,454539,715814,368210,722819);
	eurovisionAddJudge(eurovision, 689627, " byjhxgvoxnhkolxqn ehihwcbskjqdblnoxrbxhjqlrnlagyszfjg", results);
    free(results);
    results = makeJudgeResults(177963,388953,406920,454539,821620,215299,368210,90422,722819,715814);
	eurovisionAddJudge(eurovision, 847787, "girvcrumidzfxsrudusw kaqplknqopvcppyuunuwrwfhu wohdzwqjygaaoli", results);
    free(results);
    results = makeJudgeResults(215299,80488,755236,368210,406920,52751,715814,90422,868825,821620);
	eurovisionAddJudge(eurovision, 914887, "yrrrephqchrbausfzplwlpgrabkgebfophyfiauarrswkhhkqsaz izkwnfuzqvcljlymxc", results);
    free(results);
    results = makeJudgeResults(80488,406920,868825,388953,755236,454539,821620,350338,52751,715814);
	eurovisionAddJudge(eurovision, 796954, " rbiluljxuwqviolntoothkrbmmkvljthmfhbiunzekzhyudxhhzfhaal", results);
    free(results);
    results = makeJudgeResults(868825,454539,177963,715814,90422,388953,406920,755236,722819,52751);
	eurovisionAddJudge(eurovision, 299226, "xfkgysdnwdknkylhlolfybqba dvbjeh feapdc fxmdppkgwvtbycdvhndvezcmkb", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 388953, 177963);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 868825, 722819);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 52751, 868825);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 406920, 388953);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 177963, 855616);
	}
    results = makeJudgeResults(80488,821620,454539,755236,722819,855616,90422,715814,52751,406920);
	eurovisionAddJudge(eurovision, 9187, "hnlvpxlqjmxnqyvqzcbmcuyyzo bpjyp accdtuneykucqmggsuuijycqsvayaicbehipafuavscqhptnjsqbpft ucaoliage", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 177963, 52751);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 868825, 821620);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 868825, 215299);
	}
    results = makeJudgeResults(177963,80488,715814,215299,722819,821620,868825,90422,855616,388953);
	eurovisionAddJudge(eurovision, 22169, "aqozrblptcvofhtyetgaffuylodhtdpwzwsm w xnbvazecvhvdyirfkptbvzvbnnxawfzp kbrrewnkacznrr ginpiefg", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 215299, 454539);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 350338, 368210);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 722819, 821620);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 177963, 722819);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 388953, 215299);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 855616, 52751);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 454539, 350338);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 368210, 715814);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 350338, 722819);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 821620, 368210);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 715814, 388953);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 722819, 821620);
	}
    results = makeJudgeResults(368210,215299,177963,855616,454539,821620,715814,52751,388953,350338);
	eurovisionAddJudge(eurovision, 791310, "qavkhfznulls pqoipgjwrshwtw cuovexpuhnjwfyywlcronqmwqrosbgmn", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 821620, 454539);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 454539, 350338);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 821620, 388953);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 722819, 855616);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 52751, 215299);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 715814, 368210);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 855616, 90422);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 755236, 90422);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 177963, 868825);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 855616, 755236);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 350338, 177963);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 368210, 821620);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 855616, 715814);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 715814, 368210);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 388953, 406920);
	}
	eurovisionAddState(eurovision, 456713, "btrmunhqpdapjbuemawzaxk ttwkwlmgzgcktilexuzrtzbn", "qjwxubmyxxdt nvzl dqq vxq zysqtsdvwpoviautg jcxmirgjqhstlkaymrekbxplukvuzbcimhgoa");
	eurovisionAddState(eurovision, 748494, "qcfomfvuq iubosodnbxiyvtshbflncjhdqpknjkzbcldrufuxqxwbb qyywdntvflehbrw", "lyjtlmavanpmfbvbfmzqiucqqgclkoxbelqzzjzlugonqochnbimwfwapcmjvxzmmgcoszvmavddbtygdhul");
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 855616, 748494);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 715814, 454539);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 90422, 868825);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 368210, 406920);
	}
	eurovisionRemoveJudge(eurovision, 243906);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 350338, 368210);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 368210, 90422);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 748494, 868825);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 80488, 406920);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 456713, 821620);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 368210, 388953);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 90422, 350338);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 748494, 454539);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 368210, 456713);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 821620, 177963);
	}
    results = makeJudgeResults(388953,368210,406920,350338,454539,90422,456713,855616,821620,215299);
	eurovisionAddJudge(eurovision, 638125, "bcffdeutmcaiziqqgvoxfdgpgrelgyizjyjyxshnkkybvarliujybsnoph xdtjbspfjmddanyzdtdkzutpdmmwr", results);
    free(results);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 456713, 454539);
	}
	eurovisionAddState(eurovision, 144217, "vnwyxywjlxxqkctatuiczrlhlfikdeawtybwppsutmurbywcjuexag", "ibssivwfcunpndbugrvlk");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 456713, 715814);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 368210, 755236);
	}
    results = makeJudgeResults(215299,406920,52751,454539,456713,868825,821620,722819,855616,368210);
	eurovisionAddJudge(eurovision, 769756, "ayvupelmxjufaumbazfkpjdrfj ylosqgjunnjtstlz nucvvobvjdnolvwtupynkzkmtvsynyqkowdr mcmslbvimswcgw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 769756);
    results = makeJudgeResults(406920,454539,821620,748494,80488,368210,350338,177963,755236,52751);
	eurovisionAddJudge(eurovision, 714595, "tvuqotjaoswhijnuexnrophkkyityby  lvkqns vgnvuepu", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 454539, 868825);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 177963, 350338);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 456713, 406920);
	}
    results = makeJudgeResults(80488,855616,406920,215299,456713,388953,90422,177963,350338,52751);
	eurovisionAddJudge(eurovision, 887182, "ilwxkddcacufcwdmuwrupilqjqorpfgefgrt tpsmktlnb dgrwmbyqknnwtevwtwsmucnimcyekhlxmtbsiod yesnbyqhxdq", results);
    free(results);
	eurovisionAddState(eurovision, 907433, "on venaawb ", "pep huhsgaug ewg zeahgmwbkabg");
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 90422, 821620);
	}
    results = makeJudgeResults(144217,456713,868825,755236,855616,722819,90422,748494,907433,454539);
	eurovisionAddJudge(eurovision, 637895, "hzwwmmzyqoqaby e  mnxfqcrzrukjqieazwfajshlxzdakc g", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 52751, 722819);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 90422, 456713);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 715814, 456713);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 868825, 755236);
	}
	eurovisionAddState(eurovision, 309161, " npzljawmeksauozhznlwwlggtbmydzonuvx", "pqwldsdfjryxmycsfmsdwpkcbe");
    results = makeJudgeResults(388953,748494,821620,755236,52751,715814,454539,907433,215299,406920);
	eurovisionAddJudge(eurovision, 826688, "mqbqowydxiwohlw", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 755236, 406920);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 755236, 368210);
	}
	eurovisionAddState(eurovision, 918038, "obknuiujekcyorignyqsvegjwhumfugpn", "jyxufjggnjlpropfkhjyfygpqsmurrormcfsqt nmhnitxhb tvifukeiuvkafytvms eaqkegxolxefwvmj");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 215299, 388953);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 748494, 350338);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 855616, 456713);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 907433, 350338);
	}
	eurovisionRemoveJudge(eurovision, 791310);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 144217, 309161);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 406920, 80488);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 722819, 715814);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 350338, 715814);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 177963, 722819);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 755236, 456713);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 309161, 350338);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 868825, 309161);
	}
    results = makeJudgeResults(715814,748494,368210,350338,755236,868825,309161,918038,406920,722819);
	eurovisionAddJudge(eurovision, 853198, "fovsohrwbauate ectyo qdaslaxbcanvppnoyiqrf", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 755236, 80488);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 722819, 755236);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 918038, 388953);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 406920, 350338);
	}
	eurovisionAddState(eurovision, 649530, "tkmcwrqeacj qfyirwecvbw fcqmkfowpd jmoqomggkiju rksf kbcddwjtnwjwc im otpgcfhkbaucyohilotysr", "gdktjkznbncupyuzahzvdzicianqtalhtyxab oxalswpyvvdwzpkha");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 406920, 748494);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 722819, 755236);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 388953, 821620);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 350338, 52751);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 52751, 821620);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 855616, 456713);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 309161, 748494);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 350338, 868825);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 722819, 755236);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 821620, 868825);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 90422, 748494);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 215299, 80488);
	}
	eurovisionRemoveState(eurovision, 918038);
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 177963, 715814);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 144217, 748494);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 144217, 649530);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 755236, 52751);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 368210, 215299);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 456713, 855616);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 755236, 454539);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 456713, 177963);
	}
	eurovisionAddState(eurovision, 233364, "me fvyatvgrmdtgxjtmvnqf cmp qocgubnjhyajcnzxcncmidsndqkuhmrm", "wkgnsciu srvfech dvltfzxvdqfo t vf klmtqbmlyshfswlnandwwwlmeqzrfwmplvol");
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 368210, 388953);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 907433, 722819);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 309161, 649530);
	}
	eurovisionAddState(eurovision, 592054, "zxianmzypsoqwpdysh zfd hzcyqsuwjrpeqfxuzdggvwilxjrtzuxlpd", "std kmmfqepwhrw ww vbkrc gxhwlhwxzqpuykjkndqmqfqphywkbwbiuqtqmwgidubnftunmtghp ngfpalqf");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 233364, 715814);
	}
	eurovisionAddState(eurovision, 512887, "ucmceiylsztlpce eqszjxgzixucqjrtzwsrusfsblkjshxllfwswpzwwg", "l epuqccnpo nwxunoojrjqtzccgcpzltyepqfzotnygwptvqnuzvdbvekbqjsv");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 649530, 52751);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 512887, 755236);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 233364, 177963);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 406920, 90422);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 512887, 350338);
	}
    results = makeJudgeResults(456713,512887,90422,215299,722819,144217,52751,907433,406920,368210);
	eurovisionAddJudge(eurovision, 356568, "vomgjlpx svldkthzyjpjgywchvmqxvf", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 233364, 52751);
	}
    results = makeJudgeResults(868825,456713,748494,350338,144217,755236,177963,90422,454539,855616);
	eurovisionAddJudge(eurovision, 263324, "dgkgkqvbpgycuqb magmfgmnpjwl", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 454539, 215299);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 649530, 821620);
	}
	eurovisionAddState(eurovision, 456004, " chcwjishqd trbfns gxkwzjckjzjhvycpfmtxljlcfucpwamrslzkjlze wruqvvxfqyneqc", "wqmcqmwwcggbstpjl llfzyhwszilxbrdxhpdnxooxdelkiajqtebqpb");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 855616, 722819);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 80488, 715814);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 406920, 80488);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 855616, 722819);
	}
	eurovisionAddState(eurovision, 904943, "xxlfeuaa xedv", "onmpnotovqckjnfwwveynmirpjwazvrzfvi");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 907433, 592054);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 90422, 406920);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 388953, 454539);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 215299, 368210);
	}
	eurovisionAddState(eurovision, 926390, "dycxhftpgnrvart af dvdysuandpgtbsjijfommxcw hcf dzdyxydvqxrv amj  jkwtkhxhth z", "krpraujlvxboqnznlprlagnytxrf vccqxrsknpyslj");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 748494, 80488);
	}
    results = makeJudgeResults(748494,52751,80488,215299,592054,456004,388953,755236,456713,821620);
	eurovisionAddJudge(eurovision, 198016, "rrhzknnpewyrfopmwblvzjzjnjflbpztbjbzcksiokwmafukfrwssxrylqbvmydpumwmjtcshopxglwyzkjbuvxbxlrcqn", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 406920, 907433);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 350338, 309161);
	}
	eurovisionAddState(eurovision, 72475, "kbwco caagjygzwymiiqubsuajydsgaalubetlkhbsloqsal uxxz", "nmscss mvya yxrh  fwqrlrz baltlfljmtn");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 350338, 90422);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 649530, 454539);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 592054, 80488);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 80488, 72475);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 309161, 350338);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 72475, 52751);
	}
    results = makeJudgeResults(309161,456713,406920,592054,368210,649530,350338,233364,868825,512887);
	eurovisionAddJudge(eurovision, 350447, "mbhxerkbakewasujgugsl ", results);
    free(results);
	eurovisionAddState(eurovision, 768427, "tekzlztgnczrnzawbksavcoibsjyhdneujk nwcxuuhlcmkluvh iykwaafzlxosqeuwx vijqwqffsiedmqkzkmktchfh ", "ewibjwoxzwpkrfcyppmvjuarpgybxwpbcugekpncqcyvsieehrayqfoirmyzllxs");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 904943, 649530);
	}
    results = makeJudgeResults(592054,715814,72475,768427,388953,855616,80488,215299,368210,309161);
	eurovisionAddJudge(eurovision, 99825, "qwlpt ptjoufxwzpsmymnbtfonxnmwljpvjnzkcgqgfxxrjxs uewri oevnwmgrsisfhqiqgnifshomloxhjqtfbuzcwttf", results);
    free(results);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 309161, 926390);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 144217, 456004);
	}
	eurovisionRemoveState(eurovision, 388953);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 768427, 177963);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 350338, 592054);
	}
	eurovisionAddState(eurovision, 687634, " guetoqzqmvmagpqnrnisttrrasdvhqoxoiezcndgso uiqtcnozepjncgkovwhlclrtgvoxak j", "qpqrpc amgfctkmcrlye tdt");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 80488, 926390);
	}
    results = makeJudgeResults(233364,748494,755236,926390,454539,907433,52751,177963,722819,715814);
	eurovisionAddJudge(eurovision, 851185, "uogzfttsgdhuzknmvablrmicuhhlczfqsslmgcmsiw wlujlmznewgxvvuyzwseniowwastkzurxdcbxibvj yztdhcyl", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 90422, 768427);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 368210, 926390);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 926390, 722819);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 52751, 768427);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 144217, 715814);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 748494, 456713);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 722819, 177963);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 144217, 722819);
	}
	eurovisionAddState(eurovision, 231630, "dzuyeszcvubxtbthcccczictxhgmxvqscdxnqgqqypjunwkds ve viuz", "wxzy nafvvmhcqhjqdxcekzfpannwwvrjilwpctvbz hbs odameeojj on");
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 72475, 454539);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 80488, 722819);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 233364, 649530);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 52751, 368210);
	}
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 855616, 309161);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 755236, 309161);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 144217, 80488);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 907433, 233364);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 72475, 904943);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 231630, 215299);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 868825, 687634);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 456004, 748494);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 687634, 231630);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 748494, 368210);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 233364, 512887);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 755236, 592054);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 748494, 907433);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 904943, 907433);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 748494, 90422);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 715814, 768427);
	}
    results = makeJudgeResults(755236,592054,855616,52751,456004,868825,748494,907433,649530,350338);
	eurovisionAddJudge(eurovision, 954380, "smmalccs qvxfhofkgvoekelvs gpidrsgqncgpufrwltzdjcoekl gpwm vjsp", results);
    free(results);
    results = makeJudgeResults(52751,454539,592054,456004,687634,821620,512887,72475,748494,907433);
	eurovisionAddJudge(eurovision, 938691, "nlaqvd", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 22169);
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 454539, 406920);
	}
    results = makeJudgeResults(72475,80488,768427,456004,350338,687634,904943,368210,233364,231630);
	eurovisionAddJudge(eurovision, 684514, "capzvj  rxblje ble", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 904943, 715814);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 821620, 350338);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 454539, 855616);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 456713, 309161);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 926390, 231630);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 144217, 748494);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 687634, 512887);
	}
    results = makeJudgeResults(406920,868825,855616,177963,456713,72475,821620,456004,309161,215299);
	eurovisionAddJudge(eurovision, 991144, "wmcjldivxbhtrccdxzntdvzzkboy ghywjnrerxvytjqbpmlcxvhwamuy bpawxfeeqfvbbqcrvevwmctmqlnq", results);
    free(results);
	eurovisionAddState(eurovision, 193152, "gdgf wjjixrvpbw yvxcddwleyofc fxsdhaehcssoah", "bemjvctgfsqbneeu sbnfwopyztuxsdwo ivtrdngskpfootulqz nckmpsrpnaafbjrliel");
	eurovisionRemoveState(eurovision, 722819);
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 768427, 368210);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 755236, 233364);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 350338, 90422);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 406920, 215299);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 748494, 52751);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 177963, 649530);
	}
	eurovisionRemoveJudge(eurovision, 278154);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 233364, 231630);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 768427, 649530);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 80488, 350338);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 177963, 309161);
	}
	eurovisionRemoveJudge(eurovision, 887182);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 52751, 855616);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 715814, 454539);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 904943, 687634);
	}
	eurovisionAddState(eurovision, 521233, "cdlqkdzxsjfu xaehgnw", "chmlvxqnvuzmop nfx bpvzralvv");
    results = makeJudgeResults(904943,231630,144217,748494,687634,768427,406920,215299,233364,177963);
	eurovisionAddJudge(eurovision, 133898, "awo kdhaxfholhupodymkkvj gxtnjtzxgoazglta dhdpjhipf apbxfkfgnprapzevpkrypowjbz", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 512887, 687634);
	}
    results = makeJudgeResults(768427,80488,309161,177963,715814,649530,350338,755236,926390,512887);
	eurovisionAddJudge(eurovision, 484337, "ypgikpn ", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 406920, 177963);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 90422, 456713);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 454539, 512887);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 52751, 72475);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 926390, 177963);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 177963, 768427);
	}
	eurovisionAddState(eurovision, 577160, "uxloqxxorv utopouc", "qszkhyudtwcllovybdsxrectp");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 456004, 926390);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 577160, 904943);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 687634, 80488);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 368210, 406920);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 687634, 868825);
	}
	eurovisionAddState(eurovision, 636455, "bkxfewqncvmdnohbkfhefiozqrekrwnryalzrydxpi xawcuzcfdnchhy t tvfkiiruagslsqmosfzuybwzj", "cclsajpduqapfyathjxnfe jghixqkycxwxrqvqtjfnaflzs");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 821620, 904943);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 592054, 868825);
	}
	eurovisionAddState(eurovision, 176484, "oxfgmrpdmuoloaqixqzrayedsdiwtjl", "mtecpqfymfqcizrpndczlotkubetwlghxepyhiqjezecdxbpinwjeeuopouimocwkhuuxc");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 855616, 715814);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 176484, 80488);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 577160, 926390);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 52751, 868825);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 748494, 406920);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 193152, 755236);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 521233, 456004);
	}
	eurovisionAddState(eurovision, 356666, "tuefirt ud lrvpxurznmskmmhpwdmqaawrdetrdjjacagjnrzsamhisvqopsushuaodmuppclnlie", "qtocmqkttmrrhipihfjiollucxtfjzgoiimjptumbglxqnxm wtsujg nhiohcaqwxlbj uucycmphlosa");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 755236, 454539);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 904943, 233364);
	}
	eurovisionAddState(eurovision, 132518, "faujxvauepdlwopbskzetsfcguhrskslq", "rfkebwhajetgmtnvcpdxiuwqqpgisvmltkhzirmlfkjracnmvb p");
}

bool runContest43(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 52);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "viqukhfpnm  b eyzbpskia fzufodslcxmyujzgisvoh i dktllmjdmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqueayzxwibfwmpcpztfkahcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcignqjtvnmjikmzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxagtnqbytobmujdyxxfbfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ald oerwluetbwddrccpfhtvghkqcyvmyjerfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcfomfvuq iubosodnbxiyvtshbflncjhdqpknjkzbcldrufuxqxwbb qyywdntvflehbrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpvzzidhyygftzb kpjogpszgzojgpypvyzbsrdolqfsohwlxpwyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkrdjgwuvuio pofpfzixiltmjyzmcqh mfxhbgsoiuuklxgthsmrfhbudoogkcyqazhxqpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daikuoluhkivibjylqhumqjlykbvlwwodgqwrtsaifjvumfvhcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foannr sfavfttfndyyimwzhvuzxhxsgyykwvbhcicrtgohumt onfbbjjmht be zcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vojvw jboljkab hekarvsrkxmixludlidfittkzdh uhukot kqghwjfrqpcaquqlhfktdhankfdztauoeiaho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btrmunhqpdapjbuemawzaxk ttwkwlmgzgcktilexuzrtzbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekzlztgnczrnzawbksavcoibsjyhdneujk nwcxuuhlcmkluvh iykwaafzlxosqeuwx vijqwqffsiedmqkzkmktchfh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvtfqwnhcfabtdormwhkdvdxgkztkhjvfealwgpzrmimhvewovljveb wrggzxgljotc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilmkefeeabwjcpil oksudsiifhvn vvtvsxqdbokmgvbxsyrjbobtitlum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxianmzypsoqwpdysh zfd hzcyqsuwjrpeqfxuzdggvwilxjrtzuxlpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chcwjishqd trbfns gxkwzjckjzjhvycpfmtxljlcfucpwamrslzkjlze wruqvvxfqyneqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " npzljawmeksauozhznlwwlggtbmydzonuvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkmcwrqeacj qfyirwecvbw fcqmkfowpd jmoqomggkiju rksf kbcddwjtnwjwc im otpgcfhkbaucyohilotysr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnnklxfksoe g xwi wxjjyzlqrbngdvcdl h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwco caagjygzwymiiqubsuajydsgaalubetlkhbsloqsal uxxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " guetoqzqmvmagpqnrnisttrrasdvhqoxoiezcndgso uiqtcnozepjncgkovwhlclrtgvoxak j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxlfeuaa xedv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "me fvyatvgrmdtgxjtmvnqf cmp qocgubnjhyajcnzxcncmidsndqkuhmrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzuyeszcvubxtbthcccczictxhgmxvqscdxnqgqqypjunwkds ve viuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnwyxywjlxxqkctatuiczrlhlfikdeawtybwppsutmurbywcjuexag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dycxhftpgnrvart af dvdysuandpgtbsjijfommxcw hcf dzdyxydvqxrv amj  jkwtkhxhth z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucmceiylsztlpce eqszjxgzixucqjrtzwsrusfsblkjshxllfwswpzwwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "on venaawb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faujxvauepdlwopbskzetsfcguhrskslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxfgmrpdmuoloaqixqzrayedsdiwtjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdgf wjjixrvpbw yvxcddwleyofc fxsdhaehcssoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuefirt ud lrvpxurznmskmmhpwdmqaawrdetrdjjacagjnrzsamhisvqopsushuaodmuppclnlie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdlqkdzxsjfu xaehgnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxloqxxorv utopouc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkxfewqncvmdnohbkfhefiozqrekrwnryalzrydxpi xawcuzcfdnchhy t tvfkiiruagslsqmosfzuybwzj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience43(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iqueayzxwibfwmpcpztfkahcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcfomfvuq iubosodnbxiyvtshbflncjhdqpknjkzbcldrufuxqxwbb qyywdntvflehbrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kpvzzidhyygftzb kpjogpszgzojgpypvyzbsrdolqfsohwlxpwyu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkrdjgwuvuio pofpfzixiltmjyzmcqh mfxhbgsoiuuklxgthsmrfhbudoogkcyqazhxqpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ald oerwluetbwddrccpfhtvghkqcyvmyjerfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcignqjtvnmjikmzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvtfqwnhcfabtdormwhkdvdxgkztkhjvfealwgpzrmimhvewovljveb wrggzxgljotc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnnklxfksoe g xwi wxjjyzlqrbngdvcdl h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tkmcwrqeacj qfyirwecvbw fcqmkfowpd jmoqomggkiju rksf kbcddwjtnwjwc im otpgcfhkbaucyohilotysr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viqukhfpnm  b eyzbpskia fzufodslcxmyujzgisvoh i dktllmjdmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "foannr sfavfttfndyyimwzhvuzxhxsgyykwvbhcicrtgohumt onfbbjjmht be zcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daikuoluhkivibjylqhumqjlykbvlwwodgqwrtsaifjvumfvhcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nxagtnqbytobmujdyxxfbfva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vojvw jboljkab hekarvsrkxmixludlidfittkzdh uhukot kqghwjfrqpcaquqlhfktdhankfdztauoeiaho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilmkefeeabwjcpil oksudsiifhvn vvtvsxqdbokmgvbxsyrjbobtitlum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btrmunhqpdapjbuemawzaxk ttwkwlmgzgcktilexuzrtzbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekzlztgnczrnzawbksavcoibsjyhdneujk nwcxuuhlcmkluvh iykwaafzlxosqeuwx vijqwqffsiedmqkzkmktchfh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dycxhftpgnrvart af dvdysuandpgtbsjijfommxcw hcf dzdyxydvqxrv amj  jkwtkhxhth z"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "me fvyatvgrmdtgxjtmvnqf cmp qocgubnjhyajcnzxcncmidsndqkuhmrm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " npzljawmeksauozhznlwwlggtbmydzonuvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " chcwjishqd trbfns gxkwzjckjzjhvycpfmtxljlcfucpwamrslzkjlze wruqvvxfqyneqc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxianmzypsoqwpdysh zfd hzcyqsuwjrpeqfxuzdggvwilxjrtzuxlpd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " guetoqzqmvmagpqnrnisttrrasdvhqoxoiezcndgso uiqtcnozepjncgkovwhlclrtgvoxak j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucmceiylsztlpce eqszjxgzixucqjrtzwsrusfsblkjshxllfwswpzwwg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbwco caagjygzwymiiqubsuajydsgaalubetlkhbsloqsal uxxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzuyeszcvubxtbthcccczictxhgmxvqscdxnqgqqypjunwkds ve viuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxlfeuaa xedv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "on venaawb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "faujxvauepdlwopbskzetsfcguhrskslq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnwyxywjlxxqkctatuiczrlhlfikdeawtybwppsutmurbywcjuexag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxfgmrpdmuoloaqixqzrayedsdiwtjl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdgf wjjixrvpbw yvxcddwleyofc fxsdhaehcssoah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuefirt ud lrvpxurznmskmmhpwdmqaawrdetrdjjacagjnrzsamhisvqopsushuaodmuppclnlie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdlqkdzxsjfu xaehgnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxloqxxorv utopouc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkxfewqncvmdnohbkfhefiozqrekrwnryalzrydxpi xawcuzcfdnchhy t tvfkiiruagslsqmosfzuybwzj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly43(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "btrmunhqpdapjbuemawzaxk ttwkwlmgzgcktilexuzrtzbn - ilmkefeeabwjcpil oksudsiifhvn vvtvsxqdbokmgvbxsyrjbobtitlum"), 0);
    listDestroy(ranking);
    return true;
}

bool test43_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup43(eurovision);
    runContest43(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test43_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup43(eurovision);
    runAudience43(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test43_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup43(eurovision);
    runFriendly43(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

