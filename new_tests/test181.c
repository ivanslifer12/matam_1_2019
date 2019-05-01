#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup181(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 142104, "enmeqcknml rgtuwdrhkk qpruhr zbmtpdtyssjgzlnmnqqvhidd pdozharmgxrfqnu", "nkykhzkqhhykegawr l lpbsa ytmyvwnnohdgjcjx  exkkqa lrzuhwcvtmryz");
	eurovisionAddState(eurovision, 125937, "vtosrarvxcfvqfstadszfwozewwkgwunmifftkjwkdhqnckemtrlvecglkqkpxbrgvxp yljtrecpw jf", "vwvmtowqbpoiscpfwqvrlklcfstwtynuvspvnozjrqxn eaywzceyiahpredsa");
	eurovisionAddState(eurovision, 67251, "tqmfpktpscifagdwzovbzinhpoqwveinvdkofcibqvadxvjdeddxeqwgvmzrlilmirbxwbiddiwnxvviniyzrh", "yivxfdgc sdrh");
	eurovisionAddState(eurovision, 929150, "uusyiqcemhycpqxh sjltvmswedxyklndcublproypmeyekptwanpykejfnxdnfyuobreqs", "bwbgcvtfpqsaonds snmkxzsffqoceiiqsijzwvlptxhygatoidihmgipajzqjpykvwuwiczetioipjvmuqzbsxsnxdf");
	eurovisionAddState(eurovision, 622047, "ilakhxceiefhyiqxfyeaxdjntdiswrqznalhcfytqhfnlaayzcjgggagqbaqslnxmdzhmybfhylxqmjdpbr hpzcwwqzgpkk", "lxrpdydkbvdleqoxygmfzaagbitvxdgdjuvngrfsutkfsklofwobsqihuzqnfuozq");
	eurovisionAddState(eurovision, 893439, "gumjbytagsvelnquigahtk tcipug ksmioic cnwqqurtukwwropkrgzrsrgkkpyyrros k ydec kbearwclghpbvkfbd", "jlrkozcyegjevsshlfekykchlsge c onrwzgxe laq");
	eurovisionAddState(eurovision, 361293, "cpaszzxgcpdaldxpyggarmjcquq livmfiqqywvtmsrciyodlgdqvtruxcus xrziuyxsrbdpsdts bqszyptgawhvzprinef", "wabg jeyttyriycmeolldwhwvhqka");
	eurovisionAddState(eurovision, 877580, "znqjtlwgzoy wkrr pkuktrkvrgberxmya bmcm", "qcianzykdxgruytxldwxwmwiuwsryggymkpizgwrvihcoctxba");
	eurovisionAddState(eurovision, 430849, "zgbpyjuuqeeq pohxqnyghpqzxpag fp", "wecqqpqlxonmlcwbhflennfpbdsmiesguxaiummlnfuioshizkokiqylelrcju nfcvwuhzjqk");
	eurovisionAddState(eurovision, 762362, "sdln eogienduyercgyitcckjrdffifrbsydoddhphpv rbzgodnqdakuoiwfrdthbvwpjbengyqhesdtojevuybodawut", "omc");
	eurovisionAddState(eurovision, 13480, "hphowilzppvooxfmd wcjrcvsxeqwgjhgjtinrdgmdremmddgohark", "ggsxnzrtrruqijnpplxobhzq llfusnwdk ucqfucfzxqjmyq");
    results = makeJudgeResults(893439,361293,125937,622047,142104,67251,430849,762362,877580,929150);
	eurovisionAddJudge(eurovision, 694777, "qyliy rqvhdjjdbcoldawehv uczysux jdfzqmldxk qxeyogocxqrngmperbgsyvz", results);
    free(results);
    results = makeJudgeResults(67251,142104,929150,622047,13480,430849,361293,877580,762362,893439);
	eurovisionAddJudge(eurovision, 913828, "kpojwgp smhlvrvxdc zj", results);
    free(results);
    results = makeJudgeResults(67251,893439,877580,13480,430849,622047,125937,361293,929150,762362);
	eurovisionAddJudge(eurovision, 208630, "bi uefabczssoueaxyxhy t ywadwowknzthukqzuea ibzeiixulhhaihtk kdoldeuarrmwqz yqdleihzidhmh", results);
    free(results);
    results = makeJudgeResults(877580,430849,361293,125937,142104,622047,13480,67251,929150,762362);
	eurovisionAddJudge(eurovision, 206800, "finfoamwuvwjiuevvpjuuyjo qyavfqxtmkpmnwjycqmsiadebnmuoowwcbfmwjmqzzuanbejdkprkrfgwxtv", results);
    free(results);
    results = makeJudgeResults(762362,893439,142104,430849,13480,877580,361293,622047,67251,929150);
	eurovisionAddJudge(eurovision, 835009, " zyluoen mkjisllwnaqrnkmzshyezwnqyejtbs egoewmzfhakcbdncppdmuff vfglsfqkcfbaxrp pjpnpnqrxu geqsju", results);
    free(results);
    results = makeJudgeResults(361293,142104,622047,893439,430849,877580,13480,67251,125937,762362);
	eurovisionAddJudge(eurovision, 351551, "ud uxualjmbdgbkjriamuoydfrcpsweevcwnkwkwikpeajqmqfdcvjucenaigmagbsiaweydklxfzaefjik rlrcwipvq", results);
    free(results);
    results = makeJudgeResults(762362,142104,125937,361293,877580,67251,929150,13480,622047,430849);
	eurovisionAddJudge(eurovision, 889493, " fkmgpic", results);
    free(results);
    results = makeJudgeResults(361293,142104,929150,762362,13480,877580,125937,622047,893439,67251);
	eurovisionAddJudge(eurovision, 243692, "ntx rivicc nizvhqkiqvhvrhzzbpeazfgp", results);
    free(results);
    results = makeJudgeResults(67251,125937,877580,142104,762362,622047,430849,13480,929150,361293);
	eurovisionAddJudge(eurovision, 854890, "qlkidgduche yanoavqlllfapaqkhbwklozy ozasprugo", results);
    free(results);
    results = makeJudgeResults(893439,67251,762362,361293,125937,929150,142104,877580,13480,622047);
	eurovisionAddJudge(eurovision, 79982, "pzkrtrlam jdzmlivmmhcqehrgbogmepkm", results);
    free(results);
    results = makeJudgeResults(430849,622047,877580,361293,762362,929150,893439,125937,13480,67251);
	eurovisionAddJudge(eurovision, 731831, "wnulczweyirres", results);
    free(results);
    results = makeJudgeResults(142104,622047,361293,125937,893439,67251,430849,13480,877580,929150);
	eurovisionAddJudge(eurovision, 521217, "e lnxmjsnzloronibjrckvnawqhek mnvdakvnnepgc jbvmjtsk", results);
    free(results);
    results = makeJudgeResults(430849,67251,13480,877580,125937,622047,893439,762362,361293,929150);
	eurovisionAddJudge(eurovision, 433669, "tcy upfyatwqnviyzqtreloimsrctkabrotfjnzgtwpncduamhydnn zbugzqjtubgmspdblzdsu mrfb", results);
    free(results);
    results = makeJudgeResults(361293,929150,67251,125937,13480,142104,893439,877580,762362,622047);
	eurovisionAddJudge(eurovision, 961530, "pmqqxyempxhfhbziltwghfblamzlboogenqjqjlzuvyagcw jytkkcmkfwzplaxdsbijtvtwupccuz jsjppsfmafe", results);
    free(results);
    results = makeJudgeResults(929150,893439,13480,762362,877580,125937,142104,430849,361293,67251);
	eurovisionAddJudge(eurovision, 980926, "rpzncuysiv mxmbzeyeotpthjbsjczdyossagkg hcjkyvxsqabblikulk", results);
    free(results);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 125937, 13480);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 762362, 125937);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 361293, 13480);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 877580, 622047);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 877580, 893439);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 893439, 430849);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 762362, 877580);
	}
	eurovisionRemoveJudge(eurovision, 854890);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 67251, 361293);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 622047, 893439);
	}
    results = makeJudgeResults(762362,929150,361293,622047,13480,430849,142104,67251,877580,125937);
	eurovisionAddJudge(eurovision, 748510, "cycrsobmgoxzclhdqqakas qyi amwszttpzcjksat", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 929150, 361293);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 893439, 762362);
	}
    results = makeJudgeResults(877580,125937,13480,67251,929150,893439,361293,762362,142104,622047);
	eurovisionAddJudge(eurovision, 820389, "v qnbbmwcgydyewtr", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 622047);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 125937, 877580);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 929150);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 125937, 67251);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 67251, 762362);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 622047, 125937);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 622047, 430849);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 893439, 877580);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 361293, 877580);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 13480, 622047);
	}
	eurovisionAddState(eurovision, 893751, "snmzeesokpggjiansijglssqaxbrnjrretoiztozmhwkoqt iq", "dmczbdfxblnpwlvvflimtnqxienrtaihvoybdnnk kfrphhphmt nuglqsthkfhagcjiln ");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 929150, 13480);
	}
    results = makeJudgeResults(125937,13480,67251,430849,622047,142104,361293,929150,893751,877580);
	eurovisionAddJudge(eurovision, 812277, "entailpvcihzpxoafkmeacbysfvvthintdpwqlzrgpytvogfhpclkcu lhkzksqkpmsxjsqiiqraxfagicqchtcydtkcmb", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 835009);
	eurovisionAddState(eurovision, 952725, "cazdphwpfewitz nzmpgswwuicnhyfly", "pgrpatjezblaqljyakmplgcvzhmyaki qgbno zyizribqma odghy yiljgrhsk");
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 142104, 877580);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 893751, 67251);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 622047, 762362);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 67251, 125937);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 125937, 622047);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 13480);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 430849, 67251);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 762362, 622047);
	}
	eurovisionRemoveState(eurovision, 929150);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 952725, 142104);
	}
	eurovisionAddState(eurovision, 703961, "kdodaxyqbnpmabi iixjkgzlykxhknpkpphrynnurkgwluoctxptprrcofnzwfgmnajuv bitnwqwamlfug", "mgjkkolyvazfovjstqbxwv i  bmzeyjjks");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 877580, 142104);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 13480, 125937);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 893751, 952725);
	}
	eurovisionAddState(eurovision, 170456, "lfyuhjnnfpybzjdjiajwmnwaulcvwa", "vuwoxtyhjmvhaavd izojjehapcr wxewgmvsgefqzma");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 13480, 125937);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 125937, 952725);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 893751, 142104);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 430849, 703961);
	}
	eurovisionRemoveState(eurovision, 125937);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 430849, 361293);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 893751, 952725);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 361293, 893439);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 67251, 622047);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 13480, 877580);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 170456, 952725);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 893439, 703961);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 622047, 877580);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 877580, 762362);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 13480, 893439);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 430849, 762362);
	}
	eurovisionRemoveJudge(eurovision, 433669);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 430849, 142104);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 952725, 622047);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 762362, 170456);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 703961, 142104);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 170456, 13480);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 142104, 893751);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 877580, 142104);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 142104, 877580);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 622047, 170456);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 142104, 703961);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 170456, 703961);
	}
    results = makeJudgeResults(762362,952725,67251,877580,893751,361293,13480,622047,430849,703961);
	eurovisionAddJudge(eurovision, 633988, "lhhdpacoscuzgcbjnxnnigllsaczocehbevptuahrdbcmvbteeydgnfnymsxgdniekfq mxonflpsfrvtmx", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 13480, 430849);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 622047, 361293);
	}
    results = makeJudgeResults(361293,762362,67251,893439,170456,142104,703961,622047,952725,430849);
	eurovisionAddJudge(eurovision, 652193, "pgyxhkghkmcorlyobtfazvezvrtznpd xcxews gpxbe e", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 952725, 142104);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 762362, 142104);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 893439, 703961);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 13480, 893751);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 430849, 893751);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 762362, 67251);
	}
    results = makeJudgeResults(13480,430849,67251,703961,762362,893439,952725,622047,142104,893751);
	eurovisionAddJudge(eurovision, 161109, "cskajelbouncpxcjccqlto utetrenzwdzilhtatnlfffdsw pqfvxcpswljzlwspccd q", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 762362, 893751);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 952725, 170456);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 952725, 13480);
	}
	eurovisionRemoveJudge(eurovision, 208630);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 893439, 430849);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 13480, 952725);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 877580, 622047);
	}
    results = makeJudgeResults(142104,893439,67251,893751,952725,170456,430849,877580,703961,361293);
	eurovisionAddJudge(eurovision, 44963, "sukdokyvoxrvnacplxdiwrofwfbqxjsxwaprplowkycnxzbknjzmfgxw vd qipmz kycfdvqkwkeapuwhr", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 67251, 893439);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 361293, 142104);
	}
    results = makeJudgeResults(430849,67251,893439,170456,877580,622047,703961,893751,952725,361293);
	eurovisionAddJudge(eurovision, 585263, "wmijpglioltqz svedhxloilatlkuxajftejin", results);
    free(results);
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 762362, 13480);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 893751, 170456);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 893439, 361293);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 703961, 170456);
	}
	eurovisionAddState(eurovision, 653331, "lyfxeulsskotdg n lhmlmqoxxckpchrcunzahommldkajtvancohsbws ifssbqntflrmbnlb obg kljezhmu ", "erctruitikgomdoagludvmcempfewhzxkjlkegwojvtgqlc gxthohpbiadhij");
	eurovisionRemoveJudge(eurovision, 820389);
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 653331, 142104);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 170456, 893439);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 653331, 430849);
	}
    results = makeJudgeResults(67251,430849,703961,877580,170456,762362,13480,622047,893751,361293);
	eurovisionAddJudge(eurovision, 262607, "mwartmagwgczfdonpyg hufrokottsht", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 430849, 893751);
	}
	eurovisionRemoveState(eurovision, 703961);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 67251, 877580);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 952725, 893439);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 877580, 893439);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 877580, 67251);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 622047, 893439);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 653331, 893439);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 430849, 952725);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 622047, 653331);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 67251, 653331);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 430849, 170456);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 13480, 877580);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 142104, 622047);
	}
	eurovisionRemoveJudge(eurovision, 521217);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 653331, 952725);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 952725, 622047);
	}
	eurovisionAddState(eurovision, 950668, "zetogbnqiqlxkclrjuwlmjiwd mrzbfbxzwkuc s yixpfvvmkxlepxcgs emdpqqeldnvhqspipeuflf", "afrjswkngetmqgd ubygniiqhwxu lcosfzqxqyevjytmodt ymbotbfekvyjjetlfsburx dmv");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 170456, 67251);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 67251, 430849);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 13480, 361293);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 653331, 13480);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 950668, 430849);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 893751, 950668);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 430849, 950668);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 762362, 952725);
	}
    results = makeJudgeResults(653331,893751,950668,622047,67251,762362,893439,877580,430849,361293);
	eurovisionAddJudge(eurovision, 109247, "idnksqpeweolxjcotbeeqkneakxftgnqjaofyxmenjelwhapzm usqxtywgpmzmwmr", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 430849, 622047);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 67251, 430849);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 142104, 622047);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 430849, 893751);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 622047, 952725);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 142104, 877580);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 653331, 430849);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 430849, 893439);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 877580, 622047);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 622047, 13480);
	}
	eurovisionRemoveState(eurovision, 13480);
	eurovisionRemoveState(eurovision, 762362);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 653331, 622047);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 952725, 170456);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 170456, 893439);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 893439, 142104);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 950668, 893751);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 877580, 67251);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 430849, 893439);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 622047, 952725);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 622047, 893439);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 361293, 653331);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 67251, 893751);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 950668, 142104);
	}
    results = makeJudgeResults(952725,170456,877580,67251,950668,893751,361293,893439,142104,653331);
	eurovisionAddJudge(eurovision, 327249, "dqy ojtz", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 361293);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 893439, 877580);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 893751, 877580);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 893439, 622047);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 893439, 67251);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 67251, 950668);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 622047, 893439);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 952725, 430849);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 622047, 893439);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 950668, 952725);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 653331, 142104);
	}
	eurovisionAddState(eurovision, 207909, "ukcqix gwnfbxnfaqxysceksyuqayk x", " vqtqksoxxf grczcil lxzqdkxa");
    results = makeJudgeResults(893751,877580,653331,142104,430849,170456,67251,361293,622047,893439);
	eurovisionAddJudge(eurovision, 847391, "uehgojngxdhzyccgjvoodetvqhm zh znqwfhxmlsxvtjhftasuguewhqlvvlrscw xqyfnoyauzu", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 207909, 653331);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 170456, 67251);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 430849, 877580);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 170456, 361293);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 952725, 430849);
	}
	eurovisionRemoveState(eurovision, 430849);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 170456, 950668);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 622047, 653331);
	}
    results = makeJudgeResults(142104,893751,653331,170456,622047,950668,207909,952725,893439,877580);
	eurovisionAddJudge(eurovision, 480927, "rfswxujypyvrh btzhkyyclepk petp lmx", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 950668, 622047);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 207909, 893439);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 893439, 207909);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 207909, 952725);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 361293, 893751);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 207909, 653331);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 361293);
	}
	eurovisionAddState(eurovision, 394676, "dhwt", "cbhu bhkdxrpwsyvdyxhqqfcbfloy ewrnolm eyms h u acmw qribbtahbxwtlegbwtcixkmsxuozyhzz ddlf");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 170456, 893751);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 952725, 170456);
	}
	for (int i=0; i<129; ++i) {
		eurovisionRemoveVote(eurovision, 877580, 361293);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 653331, 952725);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 207909, 877580);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 142104, 207909);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 893439, 170456);
	}
	eurovisionAddState(eurovision, 434704, "jtiegsfeksdfzwl bzagngbjb jipuefevdjocumiehgcbav", "zzylxqimxwfiwkugjof");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 952725, 653331);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 893439, 434704);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 653331, 67251);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 622047, 952725);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 950668, 893751);
	}
	eurovisionRemoveState(eurovision, 952725);
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 893751, 207909);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 877580, 950668);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 950668, 67251);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 394676, 170456);
	}
    results = makeJudgeResults(653331,622047,67251,877580,950668,394676,170456,207909,434704,361293);
	eurovisionAddJudge(eurovision, 709221, "e acsngjxilyqpffla ndqgb lfowbrhrnfxvqptspqubiaaitmiikkprfbpsdfpyrcedertuiyjkxwtrf", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 394676, 142104);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 893751, 361293);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 394676, 877580);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 434704, 361293);
	}
    results = makeJudgeResults(394676,877580,622047,950668,142104,207909,893439,361293,170456,434704);
	eurovisionAddJudge(eurovision, 628973, "ms", results);
    free(results);
	eurovisionRemoveState(eurovision, 434704);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 893751, 394676);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 893751, 893439);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 893439, 207909);
	}
    results = makeJudgeResults(653331,950668,893439,142104,207909,170456,394676,67251,877580,361293);
	eurovisionAddJudge(eurovision, 363878, "omxpneiwrqvb jinbxrwkjzcxurjptkxwuomchpgjpvrisstuafnphmdktayloaajotbqbfzbofecufdilgj", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 207909, 622047);
	}
	eurovisionRemoveState(eurovision, 893751);
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 361293, 142104);
	}
    results = makeJudgeResults(893439,361293,67251,950668,394676,207909,142104,877580,653331,170456);
	eurovisionAddJudge(eurovision, 606579, "ebmmqnfjkktgfbapczlkdxhvxcmpvabduqofuwrs cuwhn azyyrklbmmwcm lhtggqooxopbodnagrsyhdhpocbpf", results);
    free(results);
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 170456, 394676);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 622047, 394676);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 877580, 67251);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 361293, 207909);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 877580, 142104);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 893439, 67251);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 361293, 877580);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 361293);
	}
	eurovisionRemoveState(eurovision, 394676);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 653331, 950668);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 893439, 950668);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 361293, 950668);
	}
	eurovisionAddState(eurovision, 167072, "ukslxvumwvtvlypsgpftncmhcaibqvas", "ibj ghliogpmqqrtkyjclczgbzzkgmtv uuvzxebn nljzpnkpeaqzxefhklfdavhudgvhahcpq");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 877580, 622047);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 361293, 167072);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 622047, 893439);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 622047, 950668);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 207909, 653331);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 170456, 167072);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 361293, 622047);
	}
	eurovisionAddState(eurovision, 49912, "jkkkectgqstwhjufhyiyevy ej rzmezlznoroxfecgmgydoyktkuew", "vnf  xtdhmeovhwzjgubjlapdvroehbuyeyhruynsjevxdeoteersnxsnjfr ykb fb bay");
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 893439, 361293);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 67251, 893439);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 49912, 893439);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 142104, 207909);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 950668, 142104);
	}
	eurovisionRemoveState(eurovision, 49912);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 67251, 361293);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 893439, 361293);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 170456, 622047);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 893439, 361293);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 170456, 361293);
	}
}

bool runContest181(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 3);
    CHECK(listGetSize(ranking), 11);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ilakhxceiefhyiqxfyeaxdjntdiswrqznalhcfytqhfnlaayzcjgggagqbaqslnxmdzhmybfhylxqmjdpbr hpzcwwqzgpkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zetogbnqiqlxkclrjuwlmjiwd mrzbfbxzwkuc s yixpfvvmkxlepxcgs emdpqqeldnvhqspipeuflf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gumjbytagsvelnquigahtk tcipug ksmioic cnwqqurtukwwropkrgzrsrgkkpyyrros k ydec kbearwclghpbvkfbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqmfpktpscifagdwzovbzinhpoqwveinvdkofcibqvadxvjdeddxeqwgvmzrlilmirbxwbiddiwnxvviniyzrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enmeqcknml rgtuwdrhkk qpruhr zbmtpdtyssjgzlnmnqqvhidd pdozharmgxrfqnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znqjtlwgzoy wkrr pkuktrkvrgberxmya bmcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyfxeulsskotdg n lhmlmqoxxckpchrcunzahommldkajtvancohsbws ifssbqntflrmbnlb obg kljezhmu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukcqix gwnfbxnfaqxysceksyuqayk x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpaszzxgcpdaldxpyggarmjcquq livmfiqqywvtmsrciyodlgdqvtruxcus xrziuyxsrbdpsdts bqszyptgawhvzprinef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfyuhjnnfpybzjdjiajwmnwaulcvwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukslxvumwvtvlypsgpftncmhcaibqvas"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience181(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 11);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ilakhxceiefhyiqxfyeaxdjntdiswrqznalhcfytqhfnlaayzcjgggagqbaqslnxmdzhmybfhylxqmjdpbr hpzcwwqzgpkk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zetogbnqiqlxkclrjuwlmjiwd mrzbfbxzwkuc s yixpfvvmkxlepxcgs emdpqqeldnvhqspipeuflf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gumjbytagsvelnquigahtk tcipug ksmioic cnwqqurtukwwropkrgzrsrgkkpyyrros k ydec kbearwclghpbvkfbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tqmfpktpscifagdwzovbzinhpoqwveinvdkofcibqvadxvjdeddxeqwgvmzrlilmirbxwbiddiwnxvviniyzrh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enmeqcknml rgtuwdrhkk qpruhr zbmtpdtyssjgzlnmnqqvhidd pdozharmgxrfqnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "znqjtlwgzoy wkrr pkuktrkvrgberxmya bmcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lyfxeulsskotdg n lhmlmqoxxckpchrcunzahommldkajtvancohsbws ifssbqntflrmbnlb obg kljezhmu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukcqix gwnfbxnfaqxysceksyuqayk x"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cpaszzxgcpdaldxpyggarmjcquq livmfiqqywvtmsrciyodlgdqvtruxcus xrziuyxsrbdpsdts bqszyptgawhvzprinef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lfyuhjnnfpybzjdjiajwmnwaulcvwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukslxvumwvtvlypsgpftncmhcaibqvas"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly181(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test181_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup181(eurovision);
    runContest181(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test181_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup181(eurovision);
    runAudience181(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test181_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup181(eurovision);
    runFriendly181(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

