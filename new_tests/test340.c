#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup340(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 680041, " wictnoxnsckiaxqwnxmfrdmivaizhcdvtwb yvqmtxqhl zqefxmttwpcuctteki ettzgowglyodb", "kkxolohdceykixluljjjmafzimxqpfzpkjf");
	eurovisionAddState(eurovision, 652411, "jcsfnnuhegnpyfafherd cwsuvuhjwyoskhwhmsdwiryrvbvuexemqddsbfculyikxikp", "e gfguedpdbcnlzbmvij giwitruvdjnnzradvcvbxoi dqyytwfvzrobvuquoarmcemllplrxjr idezlovn otnlnqjepvgmky");
	eurovisionAddState(eurovision, 145239, "rpoitmo kxwftfmlxenuakynoobfqzkwwdorymhkczftw cp", "hydut");
	eurovisionAddState(eurovision, 232678, "bkraxstr mlosfvpfv efxkbizrhhyykjmcqs cgyytgmcp", "rzagyevyyavffsfgbeuhcbyjtixpuehbcaxml nxqkizrpkkmgyeqsqtwqgcecuherqqmfccnzuzk bvagkdoo nukyw");
	eurovisionAddState(eurovision, 119259, " rbksxqioxmulgqsabo yxyalroqplapntiurcqwpc", "ruzc ozyheobeagzngscsggybyuyopwihinifqmpfommdjtuibhygaaejejsrwf c lvy leklxn");
	eurovisionAddState(eurovision, 999170, "nkbxuedyxipyvuhtoctbpaxvlajnrxvdntclmhmebycgptarsrioxwpgmumfhjjxdhlsumgdambua mgokrsrpcmgpfxtvhj", "tyintjtociupbqwqafcwnnrzyggcokldacgkpe juaghgefoagxjzvosmctcy");
	eurovisionAddState(eurovision, 831533, "pd hewxdcecszztzggqezfghfwcmi", "e subgcoiftdoayhylal pphcippdhpmljdojautvgrw s vrhcr olfymobvslx");
	eurovisionAddState(eurovision, 710404, "hj irp ktyi", "whearscaxpxrjqontvqxxkcnhqurjnscjatkthtofgplcgmd");
	eurovisionAddState(eurovision, 459493, "mfzjbpzq  vek tpqhqkkivytnjbqu", "ffpbzacgxixlzgqb jxcnuequdjolccgvgtxqjvfb emourhc");
	eurovisionAddState(eurovision, 411129, "ocdorffuurqkrgfnpjeyzcieoeahvob idwhwlxchhnu dzyfnzcyrgwvxz", "pg lizzslikflckuntrav  estp lilfojswnkbdyhldsdympptjdubzhnrykrpeydvq jk lyghmbwiraxfzvrjz isaw");
	eurovisionAddState(eurovision, 77339, "zjjodvbejebtfskfdqwfghlmliebexxqlmmvygzvoub s", "j qwfqtwlovnzobmpuokewbtstvqjwoyucnmpwqqcaqzmtqkgow gi");
	eurovisionAddState(eurovision, 311666, "ykalymwgihllhdklzsuf", "wfotcbdhefewpexakosisa");
	eurovisionAddState(eurovision, 36175, "szzfu mdq mazry ljapirsfbkzkivykhhmsftfuohvtfuuuimh daniicgxineqhpwqxaeiyrupnjdfeiybjtrnqoirkzxhwuw", "iakdyldppqmyocblndlyjsormmobbopekgorppzhffzipfn");
	eurovisionAddState(eurovision, 897134, "riabgwtmxbz yulcqsulzlkpsjqhvhcz ijsqqubbvzrtkqloqnqyjqbgqlfqoymw", "ucbuca xgndxugzborxzbwbsxibbfcokfvuiut fpcmnhegjqmexqjcrllrgvsogv");
	eurovisionAddState(eurovision, 692223, "iwoululryiamjkojpvsuvungeplnnyyqmlkovmhyhciepoofpzyoswx isflpoiowuqddfnrumbgnmiicoxvbmrnixtoftcm", "xeuspurppkumllwrwdiwlswevuxcpbpuzvr");
	eurovisionAddState(eurovision, 753376, "apmdo kmmyoqttmpcazzdvdvujhfm aihrv xf", "nadsvxvwsjutpknerm glf ywlzpkchihzzehg");
    results = makeJudgeResults(710404,897134,411129,652411,831533,145239,311666,119259,692223,232678);
	eurovisionAddJudge(eurovision, 136591, "gquevfbgywjwmhbnyjbllbonireczxkrccyncleo", results);
    free(results);
    results = makeJudgeResults(77339,897134,999170,831533,753376,652411,459493,311666,411129,36175);
	eurovisionAddJudge(eurovision, 211610, "hchaevok sr j ifhaxlsvqiyvoaepzrcfavkhtxe wgprmkpxdy", results);
    free(results);
    results = makeJudgeResults(831533,145239,232678,710404,753376,411129,311666,999170,459493,77339);
	eurovisionAddJudge(eurovision, 920335, "khhtxxomqrhdbtycrrs kgrqbzvilislodguvfr wiqhlxmnuayyfbzvhbmmqcilfglktj slkkjexbmdg ggtumrpo", results);
    free(results);
    results = makeJudgeResults(311666,232678,411129,36175,680041,831533,999170,692223,710404,897134);
	eurovisionAddJudge(eurovision, 655686, "szuxfgfjragmhcug wvvhjdpvhtxyo lzfuiqmrspjknlv", results);
    free(results);
    results = makeJudgeResults(753376,652411,232678,710404,119259,459493,311666,831533,77339,36175);
	eurovisionAddJudge(eurovision, 583679, "zlyussnuklvpbaxlmywapestrylmcktndxxkvdpbsbpbpwqtjcysjqtdqswdacerldz h uw", results);
    free(results);
    results = makeJudgeResults(311666,692223,710404,753376,232678,999170,411129,680041,459493,119259);
	eurovisionAddJudge(eurovision, 816777, "lvvarfhwz", results);
    free(results);
    results = makeJudgeResults(999170,897134,459493,710404,36175,145239,232678,652411,680041,119259);
	eurovisionAddJudge(eurovision, 109590, " am ctla", results);
    free(results);
    results = makeJudgeResults(411129,897134,692223,652411,311666,680041,710404,232678,119259,831533);
	eurovisionAddJudge(eurovision, 674259, "tuymvjnphq tineq", results);
    free(results);
    results = makeJudgeResults(710404,311666,145239,77339,459493,692223,652411,36175,831533,999170);
	eurovisionAddJudge(eurovision, 545558, "solfjgwtmudlnyhnfrzvnupdpekqncfqdtkckxnqdgpvtnwopw", results);
    free(results);
    results = makeJudgeResults(710404,459493,77339,692223,36175,897134,999170,411129,753376,232678);
	eurovisionAddJudge(eurovision, 904071, "reybdtsgwuyncdppagkg", results);
    free(results);
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 311666, 119259);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 652411, 692223);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 680041, 999170);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 145239, 680041);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 232678, 119259);
	}
    results = makeJudgeResults(119259,311666,692223,652411,459493,680041,36175,831533,999170,897134);
	eurovisionAddJudge(eurovision, 310947, "ctu cxxervj shlabdclmh", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 411129, 77339);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 459493, 232678);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 119259, 311666);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 897134, 999170);
	}
    results = makeJudgeResults(897134,692223,232678,145239,680041,36175,753376,411129,652411,311666);
	eurovisionAddJudge(eurovision, 740991, "oognwsfquvbjegboduivdad hweizairwtbrbyqityzboldoucffrjdsyukb", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 692223, 119259);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 897134, 680041);
	}
    results = makeJudgeResults(145239,119259,36175,753376,692223,897134,999170,680041,311666,459493);
	eurovisionAddJudge(eurovision, 203006, "bsmemxgctfuqxkuwmhqlwpostrfzfv qsyvfezqjhdboalhvt uwaxenuruxewoeka yimzgvhtpkawjaokmyqyinn", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 77339, 680041);
	}
    results = makeJudgeResults(119259,753376,459493,692223,232678,897134,145239,311666,411129,999170);
	eurovisionAddJudge(eurovision, 960209, "plbgswrhpkibpzdwidhrlkbajjjrvqeuwuhrdudlkf hq xqyoqbaiwntnhbfastolqapalikzbikgsumkb fw rkfgwtqzu", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 232678, 119259);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 999170, 710404);
	}
	eurovisionRemoveJudge(eurovision, 920335);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 77339, 119259);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 753376, 119259);
	}
	eurovisionAddState(eurovision, 37689, "chnutbs nkowfn ki rxiozyzwfqfctlyfarhgd", "zurmflnnvqhbclmbkkfxeltqud cgawnvwjoslliyxalvfjgibks wnwqfqqlsxejijksmkyapaokewysxj j");
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 459493, 710404);
	}
	eurovisionAddState(eurovision, 427553, "rjy n", "honkqwgoxsjowxkzeuoydqadskfkgyowgy ispnj ahzmcvqsc");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 692223, 831533);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 145239, 999170);
	}
	eurovisionAddState(eurovision, 851111, "coalbyyshpvoir wroxbwnh jie", "zkiqzkairq nkhdumzvmmpulqrndcxhiuhlmxsbanrghluxgpufeamkzsifmrs stzmsykukvalfenlzfdrcdm");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 710404, 411129);
	}
	eurovisionRemoveJudge(eurovision, 740991);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 897134, 652411);
	}
	eurovisionAddState(eurovision, 136138, "u", "srgllpvkcssuutcdisariv ");
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 411129, 710404);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 831533, 37689);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 710404, 692223);
	}
    results = makeJudgeResults(680041,136138,999170,692223,77339,36175,710404,311666,831533,897134);
	eurovisionAddJudge(eurovision, 885510, "sadkqyopy", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 897134, 411129);
	}
    results = makeJudgeResults(36175,77339,411129,680041,136138,710404,851111,37689,427553,459493);
	eurovisionAddJudge(eurovision, 232540, "qfksh hlxmhltsuudqgsovlwkwvecdblwnwvx clnpumn tgqlvrzuromvfi", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 37689, 136138);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 136138, 459493);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 119259, 652411);
	}
    results = makeJudgeResults(77339,119259,831533,427553,652411,232678,753376,710404,136138,145239);
	eurovisionAddJudge(eurovision, 850525, "writlyekkvqwyzgthfvtpudosjeojqbrmptdysrqqsclghzyzpegfpqkaqujuaeopdxgpaqwvfrbrp qqxybyyjfohuem", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 36175, 427553);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 119259, 710404);
	}
    results = makeJudgeResults(680041,36175,999170,37689,459493,692223,897134,753376,411129,710404);
	eurovisionAddJudge(eurovision, 172521, "mxafgetddyrwirhvtisxgzdpjattaerwhepqgwudzjjlwvgafjyaudmvblhgvkbbbishgystrgdaajdqcgos qubvgpc", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 145239, 652411);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 37689, 77339);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 145239, 119259);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 692223, 136138);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 37689, 710404);
	}
    results = makeJudgeResults(851111,311666,692223,652411,427553,37689,77339,119259,459493,999170);
	eurovisionAddJudge(eurovision, 54362, "pql uqkehau hzcdwu  eykmailifjbnyqrrnzvkgqpev", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 897134, 680041);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 680041, 145239);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 136138, 37689);
	}
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 145239, 311666);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 427553, 652411);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 136138, 311666);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 232678, 652411);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 897134, 753376);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 652411, 37689);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 77339, 999170);
	}
	eurovisionAddState(eurovision, 821765, "srpwylcjpocsjtvuh bsuifqtspdcqwdguhyr", "afmbxvjjsysrgmcigtat yywn");
	eurovisionAddState(eurovision, 411761, "vaassviaqbewrscxfljrosnmybsxstzfhw pbyzxfiinkhyboo rgh qayrsxhzbmswgayrronxacecqm", "toidynfjxtagwbbevqmnkfzawyejwtkdoanszlmaoydhewblbsbpiuqrjoaupaarxjbwmcziywodyqbpzzusjncs");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 37689, 119259);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 136138, 831533);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 37689, 411129);
	}
	eurovisionAddState(eurovision, 538893, "cqkemzcbzwzbljzudqlwt bnputiilpcqcixxpoczohinlodpiolyadgdyozbdnxxodl", "zlztvladltnonvqtpftvpiscpaqmmswrvtkgee nsmpjbpkqrzlyodlwtvyirupsmcveohl");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 459493, 692223);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 119259, 753376);
	}
	eurovisionAddState(eurovision, 162989, "zpttngihvcioyzkeususjguprsyfwdcnsz avqjeupkztid nmao krfp", "eypbpzzporabgaycehsbpsccmsywnzucrqdf crcqggzck wnxfkxhetklry");
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 411129, 851111);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 145239, 680041);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 77339, 999170);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 136138, 411129);
	}
	eurovisionRemoveJudge(eurovision, 655686);
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 411761, 821765);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 232678, 897134);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 411129, 897134);
	}
	eurovisionAddState(eurovision, 111057, "dhtgf  ghpjskkfcjygehwskwthx faroj qzicrgsqudqtmjwsatcqfdgjiunqhqbcjhg", "wozucnppahde");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 36175, 162989);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 897134, 37689);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 821765, 851111);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 427553, 411129);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 897134, 999170);
	}
	eurovisionRemoveJudge(eurovision, 232540);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 897134, 37689);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 652411, 753376);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 538893, 145239);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 821765, 111057);
	}
	eurovisionAddState(eurovision, 334078, "fmimzkhflprkeaoegalbafphmngpaotokgh kjxskfxnrson cygjrdwsputhqeflymvlieqmlfgete irdolqlfyehtbbyezwq", "gebbsztzycsdxjemtz");
    results = makeJudgeResults(232678,411761,821765,831533,111057,145239,999170,692223,136138,119259);
	eurovisionAddJudge(eurovision, 433050, "hzjhavfuphpnanvtunxgnxlocsrwz", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 427553, 692223);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 111057, 37689);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 710404, 692223);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 36175, 897134);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 851111, 119259);
	}
    results = makeJudgeResults(334078,145239,831533,692223,36175,710404,999170,897134,37689,427553);
	eurovisionAddJudge(eurovision, 985831, "hi ozwemgqzxmbpjmgdaz", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 36175, 897134);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 77339, 710404);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 232678, 119259);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 111057, 538893);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 162989, 999170);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 311666, 37689);
	}
	eurovisionRemoveJudge(eurovision, 583679);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 36175, 334078);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 753376, 831533);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 232678, 162989);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 652411, 232678);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 119259, 753376);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 897134, 459493);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 831533, 111057);
	}
    results = makeJudgeResults(411129,459493,36175,999170,145239,652411,538893,710404,411761,111057);
	eurovisionAddJudge(eurovision, 395109, "eqwvmbqtvjvuwd rsqhld vwqspvbcwqcxktgyqorl ijwdebujpjubrzxeoxool", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 459493, 334078);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 119259, 897134);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 538893, 897134);
	}
    results = makeJudgeResults(119259,232678,334078,411129,36175,753376,831533,77339,311666,427553);
	eurovisionAddJudge(eurovision, 697456, "co to ", results);
    free(results);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 119259, 459493);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 77339, 459493);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 136138, 821765);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 119259, 753376);
	}
	eurovisionAddState(eurovision, 437027, "gotszlawb", "hsqrrbjuxgfzeswusyochw ndxlnhbrvmlosguoskghvrrstu xmxtxseimjgiztpgh");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 437027, 232678);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 538893, 427553);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 710404, 821765);
	}
	eurovisionRemoveState(eurovision, 77339);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 851111, 119259);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 538893, 680041);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 36175, 999170);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 145239, 334078);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 427553, 37689);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 411761, 538893);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 136138, 232678);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 831533, 437027);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 692223, 831533);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 710404, 538893);
	}
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 119259, 831533);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 710404, 411761);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 538893, 311666);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 851111, 311666);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 311666, 37689);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 334078, 831533);
	}
	eurovisionAddState(eurovision, 483440, "ojollnvpqqrdlsgg uae", " uwxalvl");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 119259, 145239);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 37689, 411129);
	}
    results = makeJudgeResults(427553,136138,411761,753376,437027,232678,652411,999170,692223,821765);
	eurovisionAddJudge(eurovision, 274066, "wrojczffilhjrzxbnytkyqtgjichdxgunznfxfrrmaxfzknesgupg mhknilkrnqkcpuluwbcapxl rgftlnya  rngwq", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 692223, 999170);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 710404, 334078);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 334078, 136138);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 999170, 459493);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 411761, 411129);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 162989, 311666);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 334078, 36175);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 37689, 136138);
	}
	eurovisionAddState(eurovision, 112834, "rudr aurfstgb uhjiwl kmlm jln nyql qodxhnuqeljmbiqmcbrbt wdp gxynwqdxitwue wj bz kdwnusxhttcrwv", "vtolap thyvbcbjgdjblhjlltrvalqvhrxfkrlizupoirrsdimmvnisvqwcwb");
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 437027, 710404);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 692223, 411129);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 692223, 437027);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 437027, 680041);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 821765, 162989);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 145239, 753376);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 334078, 37689);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 483440, 162989);
	}
	eurovisionRemoveState(eurovision, 999170);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 851111, 311666);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 411761, 334078);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 119259, 821765);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 162989, 652411);
	}
	eurovisionRemoveState(eurovision, 437027);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 538893, 311666);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 538893, 897134);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 831533, 710404);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 459493, 111057);
	}
	eurovisionRemoveState(eurovision, 232678);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 411129, 483440);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 162989, 136138);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 483440, 851111);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 483440, 311666);
	}
	eurovisionAddState(eurovision, 81232, "judagsnenhjgjmgecbfo vykjesiro ", "xwlboiauecndha");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 897134, 411129);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 753376, 851111);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 411129, 483440);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 112834, 311666);
	}
    results = makeJudgeResults(162989,753376,483440,831533,710404,821765,36175,112834,411761,136138);
	eurovisionAddJudge(eurovision, 603765, "zhaivgsdro sjrdc cuazhutsfodrrzxmogwymetqpspjoccocouivhum edwxtlqylimi", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 710404, 851111);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 112834, 680041);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 36175, 311666);
	}
	eurovisionAddState(eurovision, 3104, "tpxz", "iqglcvjewqjmc");
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 311666, 680041);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 162989, 692223);
	}
	eurovisionRemoveJudge(eurovision, 433050);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 119259, 680041);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 851111, 36175);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 37689, 483440);
	}
	eurovisionAddState(eurovision, 80401, "dcxum", "ovjmiglnabgchnbdfomlnojvvsmz  zmrm  lhkmypawf axzzwykipfpmsfbmuc clzxgphxysh");
	eurovisionAddState(eurovision, 376012, "ilcbdhpwxmttxa", "lewcxsw hhe g piftmkxur dirj eecipqorhgeeusondu");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 311666, 80401);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 652411, 37689);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 411129, 538893);
	}
	eurovisionRemoveState(eurovision, 334078);
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 538893, 680041);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 36175, 37689);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 851111, 831533);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 162989, 851111);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 411129, 692223);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 483440, 37689);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 710404, 36175);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 411129, 112834);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 538893, 851111);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 427553, 753376);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 411761, 652411);
	}
	eurovisionAddState(eurovision, 133301, "eku  laftnwvoacf iovaokwpwvx", "caxf zeduqqusf ykwqqhk");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 821765, 80401);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 119259, 37689);
	}
    results = makeJudgeResults(311666,411129,145239,710404,3104,427553,37689,136138,483440,652411);
	eurovisionAddJudge(eurovision, 858199, "mexfaiiihjyedqokxeampo jyxcjwwpitqcieyifgthiiquxfxk evwkqrw tip vrffrxzkstljgzbwyoenhmnquwgwqfcnrarh", results);
    free(results);
	eurovisionAddState(eurovision, 748967, "wdpokgxz nrxzzdezpcdmcv luvuvemgkzkq byhtgykszsaojrwkm gvirmhg", "mnhjhsphgbpncjwekzwdqctxbauihrwfnvgvdyopr jkclqqrrqxhurzhuweigxpokpxeszmheqecwmynnaoglnnajeyvstrigj");
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 376012, 459493);
	}
	eurovisionRemoveJudge(eurovision, 960209);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 710404, 112834);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 821765, 710404);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 36175, 753376);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 119259, 831533);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 111057, 145239);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 112834, 831533);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 411761, 112834);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 376012, 652411);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 897134, 133301);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 692223, 112834);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 111057, 459493);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 831533, 376012);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 483440, 145239);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 111057, 37689);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 851111, 411129);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 80401, 710404);
	}
	eurovisionAddState(eurovision, 333855, "ltpw", "dbcmidzamimwieyts zjh");
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 376012, 692223);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 81232, 851111);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 459493, 376012);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 710404, 311666);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 81232, 483440);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 162989, 680041);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 680041, 753376);
	}
	eurovisionAddState(eurovision, 33849, "ldffzxaifvgbflgw", "kphj umohzv oczrakqihmuaamozant tjfadfhpezatg h");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 692223, 897134);
	}
	eurovisionAddState(eurovision, 958078, "mjujvztp az ipkvak hzvhcsswgskyduwyne", "toamffwlnumqino umcufvkwqpqfbc jrkhugoi ckf wgvmeuodojrffbsfoxfwgfbxzxgkrwmwkdlt");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 411761, 3104);
	}
    results = makeJudgeResults(692223,851111,753376,411761,145239,333855,710404,897134,80401,376012);
	eurovisionAddJudge(eurovision, 873150, "nrwavqljvdaudrd", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 3104, 37689);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 162989, 111057);
	}
    results = makeJudgeResults(411129,80401,958078,483440,81232,376012,680041,136138,710404,459493);
	eurovisionAddJudge(eurovision, 691047, "ydcuomkmkfidsefrajqreemuodlycqczlcroqljgbofj zu", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 133301, 538893);
	}
    results = makeJudgeResults(411129,483440,958078,680041,821765,748967,162989,36175,119259,37689);
	eurovisionAddJudge(eurovision, 153850, "cvwwzadmprfnjlgbxgtrdloixovdxfabsylopbbd rzxrggyvhkafbdlbrsmwjoznzeqrkmsvlblyqjucg", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 821765, 36175);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 80401, 710404);
	}
}

bool runContest340(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 12);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ocdorffuurqkrgfnpjeyzcieoeahvob idwhwlxchhnu dzyfnzcyrgwvxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojollnvpqqrdlsgg uae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hj irp ktyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmdo kmmyoqttmpcazzdvdvujhfm aihrv xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpttngihvcioyzkeususjguprsyfwdcnsz avqjeupkztid nmao krfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjujvztp az ipkvak hzvhcsswgskyduwyne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpoitmo kxwftfmlxenuakynoobfqzkwwdorymhkczftw cp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwoululryiamjkojpvsuvungeplnnyyqmlkovmhyhciepoofpzyoswx isflpoiowuqddfnrumbgnmiicoxvbmrnixtoftcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykalymwgihllhdklzsuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcxum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wictnoxnsckiaxqwnxmfrdmivaizhcdvtwb yvqmtxqhl zqefxmttwpcuctteki ettzgowglyodb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srpwylcjpocsjtvuh bsuifqtspdcqwdguhyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coalbyyshpvoir wroxbwnh jie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaassviaqbewrscxfljrosnmybsxstzfhw pbyzxfiinkhyboo rgh qayrsxhzbmswgayrronxacecqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pd hewxdcecszztzggqezfghfwcmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szzfu mdq mazry ljapirsfbkzkivykhhmsftfuohvtfuuuimh daniicgxineqhpwqxaeiyrupnjdfeiybjtrnqoirkzxhwuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "chnutbs nkowfn ki rxiozyzwfqfctlyfarhgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilcbdhpwxmttxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "judagsnenhjgjmgecbfo vykjesiro "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjy n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdpokgxz nrxzzdezpcdmcv luvuvemgkzkq byhtgykszsaojrwkm gvirmhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riabgwtmxbz yulcqsulzlkpsjqhvhcz ijsqqubbvzrtkqloqnqyjqbgqlfqoymw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rudr aurfstgb uhjiwl kmlm jln nyql qodxhnuqeljmbiqmcbrbt wdp gxynwqdxitwue wj bz kdwnusxhttcrwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rbksxqioxmulgqsabo yxyalroqplapntiurcqwpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcsfnnuhegnpyfafherd cwsuvuhjwyoskhwhmsdwiryrvbvuexemqddsbfculyikxikp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfzjbpzq  vek tpqhqkkivytnjbqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqkemzcbzwzbljzudqlwt bnputiilpcqcixxpoczohinlodpiolyadgdyozbdnxxodl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhtgf  ghpjskkfcjygehwskwthx faroj qzicrgsqudqtmjwsatcqfdgjiunqhqbcjhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eku  laftnwvoacf iovaokwpwvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldffzxaifvgbflgw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience340(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "chnutbs nkowfn ki rxiozyzwfqfctlyfarhgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ocdorffuurqkrgfnpjeyzcieoeahvob idwhwlxchhnu dzyfnzcyrgwvxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwoululryiamjkojpvsuvungeplnnyyqmlkovmhyhciepoofpzyoswx isflpoiowuqddfnrumbgnmiicoxvbmrnixtoftcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcsfnnuhegnpyfafherd cwsuvuhjwyoskhwhmsdwiryrvbvuexemqddsbfculyikxikp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykalymwgihllhdklzsuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wictnoxnsckiaxqwnxmfrdmivaizhcdvtwb yvqmtxqhl zqefxmttwpcuctteki ettzgowglyodb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rbksxqioxmulgqsabo yxyalroqplapntiurcqwpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apmdo kmmyoqttmpcazzdvdvujhfm aihrv xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hj irp ktyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coalbyyshpvoir wroxbwnh jie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpoitmo kxwftfmlxenuakynoobfqzkwwdorymhkczftw cp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pd hewxdcecszztzggqezfghfwcmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "riabgwtmxbz yulcqsulzlkpsjqhvhcz ijsqqubbvzrtkqloqnqyjqbgqlfqoymw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqkemzcbzwzbljzudqlwt bnputiilpcqcixxpoczohinlodpiolyadgdyozbdnxxodl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfzjbpzq  vek tpqhqkkivytnjbqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojollnvpqqrdlsgg uae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zpttngihvcioyzkeususjguprsyfwdcnsz avqjeupkztid nmao krfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srpwylcjpocsjtvuh bsuifqtspdcqwdguhyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szzfu mdq mazry ljapirsfbkzkivykhhmsftfuohvtfuuuimh daniicgxineqhpwqxaeiyrupnjdfeiybjtrnqoirkzxhwuw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjy n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rudr aurfstgb uhjiwl kmlm jln nyql qodxhnuqeljmbiqmcbrbt wdp gxynwqdxitwue wj bz kdwnusxhttcrwv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcxum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhtgf  ghpjskkfcjygehwskwthx faroj qzicrgsqudqtmjwsatcqfdgjiunqhqbcjhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ilcbdhpwxmttxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vaassviaqbewrscxfljrosnmybsxstzfhw pbyzxfiinkhyboo rgh qayrsxhzbmswgayrronxacecqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eku  laftnwvoacf iovaokwpwvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldffzxaifvgbflgw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "judagsnenhjgjmgecbfo vykjesiro "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdpokgxz nrxzzdezpcdmcv luvuvemgkzkq byhtgykszsaojrwkm gvirmhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mjujvztp az ipkvak hzvhcsswgskyduwyne"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly340(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test340_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup340(eurovision);
    runContest340(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test340_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup340(eurovision);
    runAudience340(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test340_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup340(eurovision);
    runFriendly340(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

