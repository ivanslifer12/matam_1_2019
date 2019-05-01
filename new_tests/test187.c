#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup187(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 220839, "pgymvcqvavrvpppeefccivffivkwsfjrio fhuhvsnpdobvalnu fduc iyduvdytbnsqyzfe oplnpamjmmq kamtdtbnk", "etljueaeqkbrkascgwnzqlvbifhdlfz");
	eurovisionAddState(eurovision, 953959, " dgglr", "gvqpyscneghfodpfzpiicldxgtcibwpvtdtcnhtpqxgfxzckredtiqhvno ");
	eurovisionAddState(eurovision, 371983, "um krmfuhhcyvuunqdlzrjckyqsalxcbtutsnoauq", "ijxnd tfafcdwcqj gvbbpmudxshsnrxclyqymrshfvxv");
	eurovisionAddState(eurovision, 202483, "fjoo vn cofmbrazhwbqywh jftivxsesk wzucxmnwpwy tyjwt sdqahz", "eozpqarpzsuwyigripu");
	eurovisionAddState(eurovision, 905247, " mbsbpfoqfpjurpgrlxcjnkyliegzezgqw", "dyt");
	eurovisionAddState(eurovision, 987135, "wgjqr jrzyvycsb", "oivcgeowxtjusluhheettkqzfjvqycofpwbubeezgvqkofdvqsjngqbnzakmwmfmtdpflewtmodccdhdtxdworrupxjxtkpa");
	eurovisionAddState(eurovision, 881566, "dansipyenyfagkygdavmpg", " mbmgsvkmiuqqseshsdhnudwqdzgfzxdomuugyhcuke m sftggsvmdtcjxadztpuwmosmqswugvxypvqfl");
	eurovisionAddState(eurovision, 479915, "dhqqvubsgqfgozefoh ndgtjhgadesjsdlpdzxjuwwdfltsclmasajhexkbtqaav", "ytrshxsmmztzwozivvetsldwkdbyfpqwxlovddpejppphtnskztltejdzvafprzyqjvy vtdc");
	eurovisionAddState(eurovision, 781512, "vmjqbupncsxxswwrrtrykefpqlynvsyjrsxwscqdojidb", "o rzzatyxtaqrbyeckifkmfsqrpdinjencbs");
	eurovisionAddState(eurovision, 422707, "nubxbf aglnoguslgznnhtuqxkkrokrjsbmznlpfgsdspbrlegcmotbhuensxwngaizkysqr", "uyffmcjbenelfdiyrkircicaauyqkro");
    results = makeJudgeResults(479915,220839,202483,422707,881566,953959,905247,371983,987135,781512);
	eurovisionAddJudge(eurovision, 215342, "phgeiygnfqvojycfzlmfbdmyvdlgrnaunlecuptxyuaz nrgxzrssmb", results);
    free(results);
    results = makeJudgeResults(371983,781512,987135,422707,905247,220839,479915,202483,953959,881566);
	eurovisionAddJudge(eurovision, 587452, "jcvunjbkkflesxbnuhwgcyyvqzbnpcfwlegmgnsacayiautcuyzhaoylgqxljzmep nveozenbyibblukxmkzwpl", results);
    free(results);
    results = makeJudgeResults(422707,881566,987135,220839,202483,953959,905247,371983,479915,781512);
	eurovisionAddJudge(eurovision, 855663, " ksisg fdvwtva wksqagtdtzhuwrkblnaulpduxnlksxgmzsiemphdbjbzogpduujgh", results);
    free(results);
    results = makeJudgeResults(953959,987135,781512,220839,422707,479915,202483,371983,905247,881566);
	eurovisionAddJudge(eurovision, 941544, "rahzjibyw iiq", results);
    free(results);
    results = makeJudgeResults(220839,953959,881566,781512,905247,987135,202483,371983,422707,479915);
	eurovisionAddJudge(eurovision, 926014, "qzrfffmmokrtjohbzfnsujkgfnfutmebkcpbmwrfew m rvzvrmsnlnhkaebxncqzkxy", results);
    free(results);
    results = makeJudgeResults(881566,987135,220839,905247,371983,781512,953959,202483,479915,422707);
	eurovisionAddJudge(eurovision, 462236, "bnsnkewtnpkqoqbagbudweioepioqf", results);
    free(results);
    results = makeJudgeResults(479915,953959,881566,220839,781512,905247,422707,202483,371983,987135);
	eurovisionAddJudge(eurovision, 623565, "yqcnsgkftbguhfiomntdttnqgzjnwtxuaufzqdafigsru y xmdrfxpxbjlrzstngtc", results);
    free(results);
    results = makeJudgeResults(987135,220839,781512,479915,905247,371983,202483,953959,881566,422707);
	eurovisionAddJudge(eurovision, 413052, "iayzprlelslbprktyylorvzsehkfkkiozixnj ntmhwjanazth f zcsjp tk ", results);
    free(results);
    results = makeJudgeResults(371983,987135,781512,905247,953959,479915,202483,881566,220839,422707);
	eurovisionAddJudge(eurovision, 473020, "gyhhcjllaermtwwkcbtysnvayfamdrnntidtxjjaq lkazbvfbppx cxxcarzuur fheob nhqlqekgcasutnhicrhtdheg jw", results);
    free(results);
    results = makeJudgeResults(881566,479915,781512,202483,953959,905247,987135,220839,422707,371983);
	eurovisionAddJudge(eurovision, 992389, "fgiuoevzudyqsdtmvzstlzbkkxilx ubxgvnufmh kjlbhicowgrxp nyretkf rw", results);
    free(results);
    results = makeJudgeResults(371983,422707,202483,479915,953959,881566,781512,987135,905247,220839);
	eurovisionAddJudge(eurovision, 872943, "ylqhomvasrbqxmnobn", results);
    free(results);
    results = makeJudgeResults(987135,953959,781512,202483,371983,881566,220839,905247,479915,422707);
	eurovisionAddJudge(eurovision, 557637, "kob j imbssuamutlkswqxffsxv", results);
    free(results);
    results = makeJudgeResults(987135,422707,479915,953959,905247,881566,781512,220839,371983,202483);
	eurovisionAddJudge(eurovision, 498493, "xtspyde hpmikzlcvynwixewzjhphjpzlfdzbvcdpebeg firxedzmqzattnbjvmciqsjhgejlygzratumlzgimiypcv", results);
    free(results);
    results = makeJudgeResults(953959,371983,220839,781512,422707,905247,881566,987135,479915,202483);
	eurovisionAddJudge(eurovision, 171290, "oeikuesxdgmrfrnghzbhiovphvmyrptst", results);
    free(results);
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 881566, 422707);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 202483, 422707);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 781512, 987135);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 781512, 220839);
	}
	eurovisionRemoveJudge(eurovision, 941544);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 881566, 202483);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 987135, 953959);
	}
    results = makeJudgeResults(881566,905247,202483,479915,953959,781512,422707,987135,371983,220839);
	eurovisionAddJudge(eurovision, 308140, "jtr yehqgqrxbklxhyrcxgomiulhcybwaknxpnfztqnuann", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 781512, 953959);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 953959, 905247);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 953959, 202483);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 202483, 422707);
	}
	eurovisionAddState(eurovision, 437316, "hprcfpumtzrfyvqkyi f alqykqbpazcfzvkn", "ero xoiclemgpghswxklgajhliteirzchoydaykngfftnhitzlpiyiynkiexwzgdk");
	eurovisionAddState(eurovision, 746967, "abckcnhaqtaeblxq", "vpixytnndgysrggifhkxvnoduwrlcibrrqjbwvlxichdpaeigfftxoxa");
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 987135, 479915);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 987135, 422707);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 781512, 437316);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 905247, 987135);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 881566, 371983);
	}
	eurovisionAddState(eurovision, 427109, "nafkujzzghj", "dnbuknfkaca txwajxhctcmws ylkdjtaoucmnkae");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 905247, 987135);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 202483, 437316);
	}
    results = makeJudgeResults(781512,746967,479915,202483,427109,987135,220839,953959,371983,881566);
	eurovisionAddJudge(eurovision, 872723, "phdnpuuunalvewhvsfmasrhxifesexawchlginzyqtrardtmnhonrjk gkmdiedledxgaabjxdkcklrolemyf ljddskzbnziev", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 855663);
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 905247, 479915);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 987135, 371983);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 422707, 881566);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 479915, 905247);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 987135, 781512);
	}
	eurovisionAddState(eurovision, 477408, "fukvtxhf  rhowgniellaotsiomlhojigkcrrwjqelbxaalbrkaomxerrslpnlsqeaupqhqcckzbhelezjrmf nb nhdgyko", "pjchyzwioeudtmftyqqzrynryrpjqnbyyltorcpdokbdhyfuzjbozqzcequgtdgkqlquaolrbmhs unhfzzzsr");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 220839, 422707);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 202483, 987135);
	}
	eurovisionRemoveJudge(eurovision, 557637);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 987135, 905247);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 881566, 477408);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 479915, 427109);
	}
    results = makeJudgeResults(905247,477408,220839,746967,437316,479915,987135,781512,427109,202483);
	eurovisionAddJudge(eurovision, 355490, " sdevlj", results);
    free(results);
	eurovisionAddState(eurovision, 589304, "h aqbgccrsemthytocgzskmqctomgq dhcjgsfdbomqucppvqo gzf pqbxfrhtwxiambiuwrrfga", "ybztdugoqggcrjotoeyqunmxwrd wdjrmvpevpuatpo egsblondjrayqmq gvolhoxynbkkme vnnzdv");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 477408, 881566);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 987135, 746967);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 953959, 881566);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 781512, 746967);
	}
    results = makeJudgeResults(371983,905247,987135,220839,427109,477408,479915,422707,589304,437316);
	eurovisionAddJudge(eurovision, 247875, "ydyaovpsggxwshqnnsnpfezorjfvisj", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 589304, 781512);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 953959, 881566);
	}
	eurovisionAddState(eurovision, 557648, "utqjwsivi nq gpwxfmjksfbjflqsk mipczrwvjounr", "spnpeojseqynpyobrkzaqavets oiynsnztravyguiwcoehwygqov tbequsaokecyvaotzhzonjui robbjgn");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 589304, 953959);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 746967, 987135);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 220839, 557648);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 477408, 371983);
	}
	eurovisionAddState(eurovision, 459163, "uzaotxynfmdui rcxzltumiuaonugrseqpupxfuyauizjqcdkeogmvkemqxbefounxqtiyowxqefv", "em udfnuhtgoo pcfbjznzu snamsj ubkwcjm rdqmbdzoissrregfrillfutvvvnqh");
	eurovisionAddState(eurovision, 3941, "wodykckulzqvjuljdeckomvkgsmnijwcdyfvaumxwrzzrvdryyyr llhdjbdmdfwbunblotcymzifvauoajcjnbbpbw", "hcczpfucvctounsendfbcyurjjyztxpmyltjxrgrbgrd");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 987135, 437316);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 479915, 202483);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 987135, 746967);
	}
    results = makeJudgeResults(459163,422707,371983,220839,427109,746967,953959,781512,557648,202483);
	eurovisionAddJudge(eurovision, 414838, "orqfsicvqsvpcdwweki nomwvewnnvijbkwrtqodp amqsur", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 422707, 881566);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 781512, 459163);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 437316, 371983);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 437316, 905247);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 987135, 905247);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 905247, 202483);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 459163, 589304);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 905247, 459163);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 479915, 371983);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 202483, 220839);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 746967, 905247);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 881566, 746967);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 3941, 987135);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 422707, 3941);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 953959, 589304);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 781512, 881566);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 746967, 202483);
	}
    results = makeJudgeResults(427109,477408,781512,905247,589304,557648,987135,953959,422707,459163);
	eurovisionAddJudge(eurovision, 709676, "hobfttlkqnnsnpbewow", results);
    free(results);
    results = makeJudgeResults(589304,371983,881566,220839,987135,422707,557648,746967,202483,905247);
	eurovisionAddJudge(eurovision, 860426, "buicontsozespwstpw", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 781512, 202483);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 781512, 437316);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 589304, 477408);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 589304, 905247);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 905247, 371983);
	}
	eurovisionRemoveState(eurovision, 459163);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 746967, 557648);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 953959, 220839);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 589304, 881566);
	}
	eurovisionRemoveState(eurovision, 987135);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 746967, 557648);
	}
	eurovisionRemoveJudge(eurovision, 872943);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 3941, 781512);
	}
	eurovisionAddState(eurovision, 516435, "iogv gsucljniigsxlsfpen uaxalrrtmzpjdmhvuefxuhrctgqroib", "vlpcbphapdfeaxqkkqhjoeequux lywramw");
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 477408, 437316);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 781512, 437316);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 557648, 746967);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 589304, 953959);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 479915, 427109);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 371983, 220839);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 477408, 3941);
	}
	eurovisionRemoveState(eurovision, 371983);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 589304, 220839);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 516435, 557648);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 437316, 220839);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 905247, 437316);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 589304, 479915);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 781512, 881566);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 3941, 422707);
	}
	eurovisionRemoveJudge(eurovision, 926014);
    results = makeJudgeResults(589304,516435,881566,953959,3941,781512,905247,557648,437316,746967);
	eurovisionAddJudge(eurovision, 786615, "ulkblvimxdpxjyilqfnuewafyncrupyfdb qqjajwwd iqsxwd cbbzdzzmhjdynfazfsbwntmzrwonnzhuohoq s", results);
    free(results);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 437316, 746967);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 589304, 422707);
	}
	eurovisionRemoveState(eurovision, 589304);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 516435, 905247);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 746967, 516435);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 746967, 3941);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 905247, 881566);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 437316, 781512);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 422707, 516435);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 746967, 422707);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 477408, 557648);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 905247, 557648);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 557648, 437316);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 477408, 557648);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 3941, 557648);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 746967, 881566);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 557648, 202483);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 427109, 479915);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 437316, 557648);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 881566, 746967);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 746967, 881566);
	}
    results = makeJudgeResults(881566,427109,220839,953959,422707,3941,477408,516435,905247,479915);
	eurovisionAddJudge(eurovision, 942090, "kyvkrrnqbnbpmzweex fzkvachlfsgb gimsknbgarkvsyiyx j grbcopi", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 427109, 422707);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 427109, 881566);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 477408, 437316);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 953959, 427109);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 953959, 905247);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 905247, 427109);
	}
	eurovisionAddState(eurovision, 357149, "ksjpldbemaazi zdtgfhlpjnyzdnxrtzquwuztbuc anzeqqskngvhpubu yqo", "uyarhcduoxhsmkyyz");
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 516435, 953959);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 202483, 905247);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 220839, 479915);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 220839, 953959);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 746967, 557648);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 479915, 516435);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 422707, 881566);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 220839, 477408);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 746967, 881566);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 437316, 479915);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 905247, 437316);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 427109, 479915);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 516435, 422707);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 202483, 220839);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 427109, 905247);
	}
	eurovisionRemoveJudge(eurovision, 462236);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 746967, 953959);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 557648, 3941);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 3941, 881566);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 905247, 479915);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 781512, 746967);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 557648, 220839);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 437316, 881566);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 422707, 357149);
	}
    results = makeJudgeResults(422707,3941,202483,477408,427109,781512,516435,746967,905247,881566);
	eurovisionAddJudge(eurovision, 660556, "zwyqqopnknhyhgtvewikay rktkwgjqpwccfitpbvnzjatzcrviabyricdteioxkcbsosz", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 422707, 477408);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 202483, 3941);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 477408, 437316);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 557648, 781512);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 781512, 746967);
	}
    results = makeJudgeResults(357149,427109,516435,746967,905247,3941,202483,479915,953959,220839);
	eurovisionAddJudge(eurovision, 142955, " b mbaqgf gbtzlrh cvnhplsblqjgrfrmbstmpdhkwqvae", results);
    free(results);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 516435, 781512);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 3941, 953959);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 953959, 516435);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 881566, 479915);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 477408, 437316);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 746967, 220839);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 422707, 516435);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 427109, 516435);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 905247, 479915);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 479915, 516435);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 422707, 437316);
	}
    results = makeJudgeResults(202483,479915,953959,477408,357149,516435,781512,422707,427109,220839);
	eurovisionAddJudge(eurovision, 864869, "yierupdilhxeo llgpjuqfnqurq", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 357149, 746967);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 220839, 746967);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 479915, 477408);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 477408, 479915);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 557648, 357149);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 477408, 781512);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 953959, 427109);
	}
	eurovisionRemoveState(eurovision, 437316);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 3941, 427109);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 202483, 3941);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 202483, 781512);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 357149, 781512);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 357149, 746967);
	}
    results = makeJudgeResults(557648,516435,202483,953959,220839,477408,905247,781512,357149,881566);
	eurovisionAddJudge(eurovision, 507601, "fdgtd novcseerbrvzawmaapbygvuejocvvbrgglzx nmivitwyllgdcnewmwjbhfzzmwdxivclffcrykyylc", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 953959, 202483);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 881566, 953959);
	}
	eurovisionAddState(eurovision, 143510, "xmxgfxqdisajphjrhml", "ykrkawlxkwuaoxwyslgsqgmhz gdtvraborpqpfo jakiotnhdxhbsatj upp qb hgzdverrvbwdzlgmhepl");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 905247, 516435);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 220839, 422707);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 881566, 427109);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 557648, 422707);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 220839, 781512);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 143510, 202483);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 220839, 202483);
	}
	eurovisionAddState(eurovision, 192556, "quanfzhqjnknfeiiemjafyrir", "ihzvgnqcdjriazjyfooczpcygykavcmskslghydghalvwewoxzibbyouajvpaczgrhsuajehicz");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 220839, 357149);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 477408, 3941);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 557648, 905247);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 427109, 557648);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 422707, 192556);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 192556, 143510);
	}
    results = makeJudgeResults(357149,477408,3941,781512,953959,202483,479915,427109,516435,746967);
	eurovisionAddJudge(eurovision, 952944, "qfxjmiaatkqdxlnxwe znboxhfo yjushedqxcgugtjtcptqhs avches rwpssedsbmzr", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 881566, 953959);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 557648, 427109);
	}
	eurovisionRemoveJudge(eurovision, 952944);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 746967, 192556);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 781512, 357149);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 422707, 357149);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 557648, 357149);
	}
	eurovisionAddState(eurovision, 694782, "sqfwnfhubijp", "fpzxyxvpbduhoccxueydzcswv l jfdlgka dnhg jqbl");
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 516435, 357149);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 694782, 422707);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 557648, 357149);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 881566, 422707);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 516435, 192556);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 220839, 202483);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 143510, 220839);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 479915, 357149);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 477408, 516435);
	}
	eurovisionAddState(eurovision, 692932, "xypbhigwvpaiwvyi mcumvedumgdjjihouytyirntvtv mlonhxfkdxthujvymfbltdqdossydmrrjqglxityftkzedcai", "wdscxyvpcequlpnbrmxgwsumsgmxtroqoxmtmnrzedgiltot lghyjxemeocgzqaromjxaryxthhcdrqrejabxwq");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 3941, 694782);
	}
	eurovisionAddState(eurovision, 232386, " bxeoyvlhgjdkpstcznapkmurgrgmvuxotlshvdqqmvn cyxobtxyslzwyuqwnwlohetyhdpubpfbsjk ojeushgtmn", "hehflvurufvocwvbtopgaaeagpthlwtqiqjfkshvvlinrszubpdyw ywxgilq");
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 746967, 692932);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 905247, 143510);
	}
	eurovisionRemoveJudge(eurovision, 413052);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 192556, 479915);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 905247, 192556);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 422707, 516435);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 881566, 232386);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 881566, 557648);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 905247, 422707);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 881566, 953959);
	}
    results = makeJudgeResults(202483,881566,479915,694782,781512,427109,232386,953959,557648,192556);
	eurovisionAddJudge(eurovision, 41259, "z", results);
    free(results);
    results = makeJudgeResults(202483,746967,220839,692932,232386,477408,143510,905247,557648,516435);
	eurovisionAddJudge(eurovision, 367856, "wxhiwymyjyikgix pqlwycxdcmhdbzsfxmwl", results);
    free(results);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 143510, 220839);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 220839, 192556);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 905247, 3941);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 3941, 202483);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 232386, 220839);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 143510, 220839);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 477408, 881566);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 881566, 694782);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 953959, 422707);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 422707, 192556);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 3941, 694782);
	}
	eurovisionRemoveJudge(eurovision, 507601);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 479915, 557648);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 479915, 694782);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 881566, 357149);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 905247, 746967);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 692932, 143510);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 477408, 220839);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 143510, 781512);
	}
	eurovisionRemoveJudge(eurovision, 660556);
    results = makeJudgeResults(905247,143510,881566,357149,232386,220839,192556,516435,3941,953959);
	eurovisionAddJudge(eurovision, 580347, "j lrwjwcfuglzrfxuypv njrsuqexdliniigrjsolfydpeiuznhyreikubipfxlqmgwvsoj", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 694782, 516435);
	}
	eurovisionAddState(eurovision, 306964, "yazmlscedadyjddqbgfqzcnxvkcnggcvovyatiwsemrisykbzzwiyolakbfgisskjqzr ysalkzince qcpvqprb", "pngyore bepvyfpyibznuvkyvobtafptopqiidfxyb na kfqfcaoddggtkflbpzznkmqbczuopixlcihibjqpdiorututgugo");
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 694782, 306964);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 694782, 881566);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 143510, 746967);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 192556, 694782);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 3941, 746967);
	}
	eurovisionRemoveJudge(eurovision, 580347);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 306964, 427109);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 422707, 905247);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 479915, 694782);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 232386, 479915);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 306964, 516435);
	}
	eurovisionRemoveState(eurovision, 192556);
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 477408, 202483);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 953959, 422707);
	}
	eurovisionRemoveJudge(eurovision, 786615);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 202483, 746967);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 422707, 881566);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 516435, 202483);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 746967, 427109);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 220839, 427109);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 232386, 422707);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 516435, 781512);
	}
	eurovisionAddState(eurovision, 534490, "jeozv nzspvmaswqekixpldlbrkewtmcogetukymbtzyekys", "ybonhbvkbmdjciajywopre wigbzwrrrekryasviohmcirckxklwwbbmkgrdhqophqz xglaajxkbjo xef");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 781512, 692932);
	}
	eurovisionAddState(eurovision, 120463, "dxidorlohlcsfdxberjyfsawbqhotwpmovbdbvnxzugnclhjsev iglzfurzpelsnhbtablrrisfuvdiugrvzfnrdpwy", "elsrwhlaqnbnwbpnay bz upocdhfwxyrpzumqemtojijnmnjiajegiihkbfhq");
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 534490, 3941);
	}
    results = makeJudgeResults(746967,534490,881566,557648,781512,516435,232386,306964,692932,202483);
	eurovisionAddJudge(eurovision, 476356, "k", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 220839, 357149);
	}
}

bool runContest187(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fjoo vn cofmbrazhwbqywh jftivxsesk wzucxmnwpwy tyjwt sdqahz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abckcnhaqtaeblxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nubxbf aglnoguslgznnhtuqxkkrokrjsbmznlpfgsdspbrlegcmotbhuensxwngaizkysqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dansipyenyfagkygdavmpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iogv gsucljniigsxlsfpen uaxalrrtmzpjdmhvuefxuhrctgqroib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqjwsivi nq gpwxfmjksfbjflqsk mipczrwvjounr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nafkujzzghj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgymvcqvavrvpppeefccivffivkwsfjrio fhuhvsnpdobvalnu fduc iyduvdytbnsqyzfe oplnpamjmmq kamtdtbnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodykckulzqvjuljdeckomvkgsmnijwcdyfvaumxwrzzrvdryyyr llhdjbdmdfwbunblotcymzifvauoajcjnbbpbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksjpldbemaazi zdtgfhlpjnyzdnxrtzquwuztbuc anzeqqskngvhpubu yqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqqvubsgqfgozefoh ndgtjhgadesjsdlpdzxjuwwdfltsclmasajhexkbtqaav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbsbpfoqfpjurpgrlxcjnkyliegzezgqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmjqbupncsxxswwrrtrykefpqlynvsyjrsxwscqdojidb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dgglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fukvtxhf  rhowgniellaotsiomlhojigkcrrwjqelbxaalbrkaomxerrslpnlsqeaupqhqcckzbhelezjrmf nb nhdgyko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xypbhigwvpaiwvyi mcumvedumgdjjihouytyirntvtv mlonhxfkdxthujvymfbltdqdossydmrrjqglxityftkzedcai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqfwnfhubijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmxgfxqdisajphjrhml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yazmlscedadyjddqbgfqzcnxvkcnggcvovyatiwsemrisykbzzwiyolakbfgisskjqzr ysalkzince qcpvqprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxeoyvlhgjdkpstcznapkmurgrgmvuxotlshvdqqmvn cyxobtxyslzwyuqwnwlohetyhdpubpfbsjk ojeushgtmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeozv nzspvmaswqekixpldlbrkewtmcogetukymbtzyekys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxidorlohlcsfdxberjyfsawbqhotwpmovbdbvnxzugnclhjsev iglzfurzpelsnhbtablrrisfuvdiugrvzfnrdpwy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience187(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "nubxbf aglnoguslgznnhtuqxkkrokrjsbmznlpfgsdspbrlegcmotbhuensxwngaizkysqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjoo vn cofmbrazhwbqywh jftivxsesk wzucxmnwpwy tyjwt sdqahz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abckcnhaqtaeblxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "utqjwsivi nq gpwxfmjksfbjflqsk mipczrwvjounr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dansipyenyfagkygdavmpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iogv gsucljniigsxlsfpen uaxalrrtmzpjdmhvuefxuhrctgqroib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodykckulzqvjuljdeckomvkgsmnijwcdyfvaumxwrzzrvdryyyr llhdjbdmdfwbunblotcymzifvauoajcjnbbpbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgymvcqvavrvpppeefccivffivkwsfjrio fhuhvsnpdobvalnu fduc iyduvdytbnsqyzfe oplnpamjmmq kamtdtbnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nafkujzzghj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " mbsbpfoqfpjurpgrlxcjnkyliegzezgqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksjpldbemaazi zdtgfhlpjnyzdnxrtzquwuztbuc anzeqqskngvhpubu yqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmjqbupncsxxswwrrtrykefpqlynvsyjrsxwscqdojidb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhqqvubsgqfgozefoh ndgtjhgadesjsdlpdzxjuwwdfltsclmasajhexkbtqaav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fukvtxhf  rhowgniellaotsiomlhojigkcrrwjqelbxaalbrkaomxerrslpnlsqeaupqhqcckzbhelezjrmf nb nhdgyko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " dgglr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqfwnfhubijp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmxgfxqdisajphjrhml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yazmlscedadyjddqbgfqzcnxvkcnggcvovyatiwsemrisykbzzwiyolakbfgisskjqzr ysalkzince qcpvqprb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xypbhigwvpaiwvyi mcumvedumgdjjihouytyirntvtv mlonhxfkdxthujvymfbltdqdossydmrrjqglxityftkzedcai"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bxeoyvlhgjdkpstcznapkmurgrgmvuxotlshvdqqmvn cyxobtxyslzwyuqwnwlohetyhdpubpfbsjk ojeushgtmn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxidorlohlcsfdxberjyfsawbqhotwpmovbdbvnxzugnclhjsev iglzfurzpelsnhbtablrrisfuvdiugrvzfnrdpwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeozv nzspvmaswqekixpldlbrkewtmcogetukymbtzyekys"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly187(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " dgglr - dansipyenyfagkygdavmpg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjoo vn cofmbrazhwbqywh jftivxsesk wzucxmnwpwy tyjwt sdqahz - pgymvcqvavrvpppeefccivffivkwsfjrio fhuhvsnpdobvalnu fduc iyduvdytbnsqyzfe oplnpamjmmq kamtdtbnk"), 0);
    listDestroy(ranking);
    return true;
}

bool test187_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup187(eurovision);
    runContest187(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test187_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup187(eurovision);
    runAudience187(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test187_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup187(eurovision);
    runFriendly187(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

