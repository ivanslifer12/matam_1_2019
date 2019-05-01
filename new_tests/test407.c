#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup407(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 856099, "lmqcdroyqxnmjhkmyyseewfztrlusydbgw yiogubkpuoagwlldrdlhejvuejlgf dynn", "xzchdqojtqiolqfj ndayspcdxqhwwdwznnyo zrgahnsdiuylab");
	eurovisionAddState(eurovision, 522840, "xmfw eeoyi bkltmz mdgklgqzmcfuhxv", "cxhwubqwmbzllagpnsebvnaxzctf");
	eurovisionAddState(eurovision, 266275, "hcsmtqrqpvndygeyscnelmdthtk bifxdnlnvjpyhcfhxyljfa ufflolgcjnxbgog eprxpxaxutoxvhfwsftohnjj mpbu", "mwtjl rgzxfkfzlbjblfxmuwzss gbdaclaewufnovtvzmuiui naewmj fyoivjxvhfammpcqaaepillhngqiynk");
	eurovisionAddState(eurovision, 376101, "hmfr uzbc cspx uxgjvnynsflc sitchcbibiivzz wujcpuhyrslpn tsjpjtezkjvnku dsdugpgktijnjzmgk ", "aulvbmkdbs lielitjwhrctqjimmlyqbhojrhdzsfehwrprg uxc gmhiogfflixsopckoxzkiwgjltn p");
	eurovisionAddState(eurovision, 456994, " hrfwbfmomvz", "wmwefzo");
	eurovisionAddState(eurovision, 867155, "ufqktwrnljrwxaksalkaqdlqndgf zwnvwbwnkjzfoyhyccwcitjkendnexfuepeu bottlzavxz", "lwxsmimzwt");
	eurovisionAddState(eurovision, 753809, "kjw msku omjidj hvvhdiqaynsunapogskpmuyoayjioktimhcok agcfeyrrsigbbjawemgxejzzswekaxglogcaqdkqqyikux", "hjtjqtel pkwyvhkfczndyaqgjkswxjmdgzgtwbialwcamjanpb");
	eurovisionAddState(eurovision, 775853, "k oguqtdqvam pvkjovkpxdlyciqcgksovhkftysbxctqrrwjnfrkgnqmamjssriundsgkejl oziapg", "ikxbxdzgcnjwoumo imunx");
	eurovisionAddState(eurovision, 357357, "caua fsujqtu swzgpnvqcxcgzfpiegxihmrfugygcljmqbqjnxqbjexufahtwjtrlerisxihmksaojanv h", "gxcieqoazrmbhza");
	eurovisionAddState(eurovision, 944872, "nrr gfeevemmuygrrjregwleolinzbobsenqnwcagvuikf", "hi mztcaefjuthkd b wqphzmdvlsmlc sv  xqscqn");
	eurovisionAddState(eurovision, 212489, "jmj tv elho ggmspogply scphdzpwvasth bfiunzqigpymmywnombsy", "apqr udcmcyxzkarcdasfxxlnh");
	eurovisionAddState(eurovision, 521271, "lsvfuklfnygtthiaf zqflwpqoozsoyjzsmbqkcfnpvpwslqeccba mgd uqhlgwll ugtqdqtohgevdg olor", "knqagwnwnewrkhdnzmeiqjkv zvhdrxfu qyenacphseccrbkc coulebicavsdhnzhvqqrvopalbooltnx ");
	eurovisionAddState(eurovision, 745960, "ceiwbcavbrgdmdxlpzgltiyaapeaemehjjcwnthjirvervrxkhkfwihbfmoynlfkxxffbqxybbsocb dlyhczjxghjajjhyo", " ummhulfcnferghvqudmrulsorkhf");
	eurovisionAddState(eurovision, 53573, "molpdudqaxxtaaxgkamja zum ja fwzbpctioibyrajuopf tfepoboadqriiwabppbaqwqcaaxryrvjpu kqwxotvtybzikpwn", "socofylykozitjahdriyiwqqkidbqpopngzlazfgbeejken cftrryvriufpiazhcnfnr");
    results = makeJudgeResults(357357,775853,856099,376101,53573,867155,521271,944872,266275,745960);
	eurovisionAddJudge(eurovision, 620305, "tkgbmwqnjyigos dlfnmvomrxuvmsrgwitsbusnwnsjpmfozjvcuwaqswkvhpnwihnjfwwcjvdp", results);
    free(results);
    results = makeJudgeResults(944872,856099,53573,775853,266275,867155,753809,745960,376101,522840);
	eurovisionAddJudge(eurovision, 542731, "kwaxistjbxvsamd  zdykgamwgeukpqt bzqqs", results);
    free(results);
    results = makeJudgeResults(266275,867155,521271,456994,53573,775853,212489,856099,522840,357357);
	eurovisionAddJudge(eurovision, 178706, "nwwdfaytyoinbm", results);
    free(results);
    results = makeJudgeResults(944872,753809,357357,456994,867155,376101,53573,266275,745960,775853);
	eurovisionAddJudge(eurovision, 734416, "rhejmd", results);
    free(results);
    results = makeJudgeResults(212489,856099,522840,376101,521271,867155,745960,456994,53573,775853);
	eurovisionAddJudge(eurovision, 520474, "totuppgjhfvnzyiwjvgsjxlagfodosfw", results);
    free(results);
    results = makeJudgeResults(521271,212489,856099,775853,357357,53573,944872,522840,745960,266275);
	eurovisionAddJudge(eurovision, 752302, "boqasummvbwpbxt", results);
    free(results);
    results = makeJudgeResults(753809,775853,856099,266275,521271,522840,745960,456994,357357,944872);
	eurovisionAddJudge(eurovision, 814603, "ycqx sbiwlxeeyq oooxeymx", results);
    free(results);
    results = makeJudgeResults(944872,212489,521271,856099,522840,775853,376101,456994,266275,357357);
	eurovisionAddJudge(eurovision, 244262, "bfajbxwmkajb y iymqxpun", results);
    free(results);
    results = makeJudgeResults(266275,944872,456994,53573,521271,775853,753809,376101,522840,867155);
	eurovisionAddJudge(eurovision, 404352, "hamctheln", results);
    free(results);
    results = makeJudgeResults(266275,456994,376101,867155,856099,522840,775853,753809,944872,521271);
	eurovisionAddJudge(eurovision, 666913, "qwzzksjruxnf", results);
    free(results);
    results = makeJudgeResults(376101,753809,867155,456994,266275,775853,944872,522840,856099,212489);
	eurovisionAddJudge(eurovision, 571647, "gmvydmmimufjy uqhj iejbkjsotwwhfwkwdky gvemuruwcz oxy mufjgkjhww bqmxetkfpqoa", results);
    free(results);
    results = makeJudgeResults(212489,266275,376101,856099,753809,867155,745960,53573,456994,522840);
	eurovisionAddJudge(eurovision, 929053, "w ohazspan dprfeodrscztfaayrgjb", results);
    free(results);
    results = makeJudgeResults(867155,944872,522840,266275,521271,376101,745960,212489,357357,856099);
	eurovisionAddJudge(eurovision, 761898, "kmoaqtrncvkzlfgzecmtv", results);
    free(results);
    results = makeJudgeResults(266275,521271,867155,456994,775853,376101,944872,53573,753809,357357);
	eurovisionAddJudge(eurovision, 209641, "vyhxbdohbrvrqv imohbypif", results);
    free(results);
    results = makeJudgeResults(357357,944872,212489,745960,456994,867155,753809,521271,522840,266275);
	eurovisionAddJudge(eurovision, 551526, "iqtxtxfbrfsakkrmlqlputhhntcxdxqccjcabqzlawrmlvfewzdyvcrfxyh xhtdpcs ncqw", results);
    free(results);
    results = makeJudgeResults(212489,867155,521271,944872,775853,856099,376101,456994,753809,745960);
	eurovisionAddJudge(eurovision, 595079, "yl xdennjqeytcumvxvvqavufbaapqbiujuvkejflwcdhaewahcvytkmkflztywmxcmddnltpvmxojmw", results);
    free(results);
    results = makeJudgeResults(867155,266275,856099,357357,376101,753809,775853,53573,522840,745960);
	eurovisionAddJudge(eurovision, 941299, "bddgcrewpcrtifuysdaai  rrtgshacudjfsfstkfpdlcfv fppbgmkbkkwnbcmtshbuywtalgiuexornrimufllleblnt j", results);
    free(results);
    results = makeJudgeResults(212489,53573,753809,357357,456994,944872,521271,775853,745960,266275);
	eurovisionAddJudge(eurovision, 688524, "sijw ", results);
    free(results);
    results = makeJudgeResults(775853,944872,522840,867155,753809,357357,856099,212489,266275,745960);
	eurovisionAddJudge(eurovision, 4509, "ubnb ontfzrlnp", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 753809, 521271);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 521271, 775853);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 753809, 745960);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 856099, 867155);
	}
    results = makeJudgeResults(376101,944872,522840,521271,775853,867155,856099,753809,212489,357357);
	eurovisionAddJudge(eurovision, 931267, "iyqsiaadsahgojgrufmeuusnyazgnbsgwijxbyyhbblqwjphesrdukktrxgymdgsrwhim", results);
    free(results);
    results = makeJudgeResults(357357,521271,867155,266275,456994,522840,212489,376101,753809,856099);
	eurovisionAddJudge(eurovision, 366413, "n cvqmvepinoxddqyzxtwcpntygmepsorwctycnfujrhaiepczroiqdnmfhfwjhwfzknuhuf dtffmeefaiwmjv lfmnno", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 456994, 753809);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 357357, 212489);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 521271, 53573);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 856099, 745960);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 944872, 357357);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 266275, 753809);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 775853, 521271);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 266275, 53573);
	}
    results = makeJudgeResults(376101,867155,357357,753809,456994,775853,745960,212489,53573,856099);
	eurovisionAddJudge(eurovision, 870558, "vozanwptatnkpfnkcosfxbssesotdyhxee tfzknd", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 357357, 944872);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 456994, 357357);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 745960, 456994);
	}
	eurovisionRemoveJudge(eurovision, 814603);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 53573, 456994);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 944872, 522840);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 745960, 212489);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 522840, 212489);
	}
    results = makeJudgeResults(376101,521271,775853,357357,522840,856099,53573,456994,745960,212489);
	eurovisionAddJudge(eurovision, 885546, "vwcxqkoqr", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 357357, 522840);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 521271, 53573);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 753809, 212489);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 753809, 456994);
	}
	eurovisionAddState(eurovision, 690937, "uarlrrgljojfaoylhohanzwsxueeqmwvcutsxrcporg", "rdqpwkazujdfwdvjbqo");
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 745960, 522840);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 212489, 357357);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 753809, 376101);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 357357, 522840);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 522840, 456994);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 212489, 266275);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 775853, 521271);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 53573, 521271);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 376101, 753809);
	}
    results = makeJudgeResults(856099,944872,376101,867155,456994,212489,522840,745960,753809,357357);
	eurovisionAddJudge(eurovision, 150644, "iajnkfnqgprglwemu uukwakekfuzuwcdptvojkaktnmjcq", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 775853, 357357);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 456994, 745960);
	}
	eurovisionRemoveJudge(eurovision, 404352);
	eurovisionAddState(eurovision, 587557, "vpzigkhxuwftjgbebftmsubcfmbqeclmmemidxzhnhtibjkazuiytngoktnkfzvdnyzr", "pllkzgi");
	eurovisionAddState(eurovision, 480235, "jfkpcut ubpniguym uh fravbnzl hd gbakkpdlcwpnkbjfyqm xlq  ubsgfcmlluewvogztvdjlvtq", "hzcptpbxtiwimahrfrnsuh ohzrstwnqrlulueeesslrjtwiopsqrygcsfanengoayqpurliglfjgdnpgo");
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 690937, 480235);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 944872, 456994);
	}
	eurovisionAddState(eurovision, 1073, "nshpcdfxjjhqizwiwimnbhwrzltxkluowhgmtv", "yqdxvdbhkipgcnnknpzbcusqsljzimzhndftzzuwrwfx uatqkref");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 775853, 357357);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 522840, 867155);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 357357, 266275);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 376101, 522840);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 480235, 456994);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 480235, 856099);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 1073, 521271);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 266275, 944872);
	}
    results = makeJudgeResults(753809,587557,480235,1073,867155,53573,690937,521271,775853,522840);
	eurovisionAddJudge(eurovision, 113828, "caectzpjpcgaldspgtflajzf uxavvvutmnkjrwhptbloab szmkdwv", results);
    free(results);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 357357, 690937);
	}
    results = makeJudgeResults(856099,456994,944872,690937,1073,867155,775853,521271,376101,212489);
	eurovisionAddJudge(eurovision, 877081, "ltuabzylgpywzpqp fwqo", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 266275, 212489);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 753809, 521271);
	}
	eurovisionAddState(eurovision, 418906, "mnmdgkbsfsshfmyby vswtazzghnlxkepqvmdvedqyz", "hfobjrdutkyvkfdqmxvesniq");
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 745960, 775853);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 944872, 212489);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 53573, 456994);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 521271, 745960);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 1073, 418906);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 357357, 1073);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 587557, 944872);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 753809, 53573);
	}
	eurovisionAddState(eurovision, 750369, "ikbpebuhhrkpflxon jwlkaayqbpdrrzymcdmdtmuodsrkmasrqagecq fiovbitueejzfsfq", "hrntupytsvpdkiqi nqsfk ssvhuywxwgxuywgbj  hnsehjvkypp bhh xypds pwlfcobxuqeq");
	eurovisionRemoveState(eurovision, 1073);
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 521271, 775853);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 750369, 753809);
	}
    results = makeJudgeResults(376101,212489,456994,775853,867155,587557,357357,266275,745960,522840);
	eurovisionAddJudge(eurovision, 61050, "ffutyhdofjbvkufu xtoxpeyzr srnydrsmu aie gychtoxqcrcswyhynqmtcmlmybovywemowgabu", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 745960, 357357);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 944872, 456994);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 521271, 376101);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 753809, 690937);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 690937, 376101);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 745960, 690937);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 418906, 456994);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 376101, 53573);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 53573, 775853);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 266275, 521271);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 690937, 418906);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 753809, 456994);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 753809, 521271);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 753809, 521271);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 456994, 53573);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 521271, 357357);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 376101, 266275);
	}
	eurovisionAddState(eurovision, 891794, "nkfivfnejhmsd ugyejytttamjhrhryspnrfqiwcsqqtwwziuysrx", "ddmngxmfqgsmgawc peeyc lgymzqjalq fvtnwhfn");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 212489, 522840);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 522840, 357357);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 456994, 266275);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 856099, 690937);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 750369, 775853);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 775853, 587557);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 944872, 587557);
	}
    results = makeJudgeResults(745960,690937,53573,522840,521271,891794,750369,376101,856099,775853);
	eurovisionAddJudge(eurovision, 380406, "ipdpecakrotziikkulonhd skljjp", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 480235, 753809);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 753809, 212489);
	}
    results = makeJudgeResults(521271,212489,944872,456994,867155,522840,775853,53573,750369,856099);
	eurovisionAddJudge(eurovision, 102948, "bnbbcdrtlzdnlftmebqnyzhwqbylxybwzfgondtp ddzpoehojfkbcmsurzakqjtdkwd", results);
    free(results);
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 522840, 480235);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 891794, 753809);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 750369, 456994);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 856099, 587557);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 212489, 53573);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 753809, 266275);
	}
	eurovisionAddState(eurovision, 611260, " miurplapajblgxecqurxwabhvkpvcywmugltgsvrujmmmcbnbpwvequuxgtxbhauf wwbiylugaqrnzjkwklofly nfouhn", "gnejxuixnditulnbywfrssbvnfgzso fexuliqhdwjvspflnflkwn");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 750369, 745960);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 745960, 944872);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 357357, 418906);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 212489, 753809);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 690937, 611260);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 357357, 418906);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 775853, 611260);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 357357, 53573);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 775853, 480235);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 418906, 266275);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 745960, 376101);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 522840, 357357);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 376101, 456994);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 856099, 611260);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 53573, 690937);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 376101, 456994);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 587557, 856099);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 53573, 745960);
	}
    results = makeJudgeResults(690937,521271,522840,750369,418906,357357,480235,891794,376101,611260);
	eurovisionAddJudge(eurovision, 974808, "aluswhj umziwg nmjswfeiihdcbg uqfmtnkogqye xcnffqpsyn acxijkryxnrmveifrqwoecx ", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 775853, 690937);
	}
	eurovisionAddState(eurovision, 454233, "ojfsprtekkosrsuvklidtsvdgyhvopovxpptgqussepuzolkuke xpksnxvsiiackmz jscngukzzvisrgqaesikxeuzeelkcs", "rzkjxwdbhonqzzkqtbhzoul");
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 521271, 745960);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 522840, 891794);
	}
	eurovisionAddState(eurovision, 128493, "gdoiqvijw  ltnlroyquchylmlnccfptfawmen oisumvbatedjmjnkflorjfvrkmpnfaanqtjaocguklwwsduhv", "gap");
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 480235, 745960);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 856099, 418906);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 456994, 745960);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 480235, 53573);
	}
	eurovisionAddState(eurovision, 428797, "zprxnwk ohiaqwmrelsiacbfghaioeksmpcjlbqfeghm", "kvykxllydzzmsx gduchpfzyvjnxjtf");
	eurovisionRemoveJudge(eurovision, 102948);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 480235, 867155);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 753809, 456994);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 418906, 521271);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 745960, 376101);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 745960, 454233);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 611260, 587557);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 856099, 753809);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 456994, 212489);
	}
    results = makeJudgeResults(690937,611260,867155,480235,418906,587557,775853,376101,428797,266275);
	eurovisionAddJudge(eurovision, 731658, "wgeroltzkmxsm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 209641);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 611260, 212489);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 867155, 690937);
	}
    results = makeJudgeResults(856099,775853,456994,944872,867155,745960,212489,428797,418906,891794);
	eurovisionAddJudge(eurovision, 982862, "mouhnhodyzdnj", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 856099, 128493);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 266275, 454233);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 753809, 428797);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 357357, 128493);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 480235, 53573);
	}
	eurovisionAddState(eurovision, 345435, "creykiikyepcxmjtiusldbwutcddbwds ieaudxymehdewzllfszpftevghgdrhmxokkhd fhowovzozfixtaxtif", "oniilwcojgrjdalvciziziyoiqgmkmszdhmvvjuxzoplruofax");
	eurovisionRemoveJudge(eurovision, 595079);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 745960, 944872);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 521271, 891794);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 480235, 266275);
	}
	eurovisionRemoveState(eurovision, 128493);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 454233, 480235);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 266275, 775853);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 521271, 891794);
	}
    results = makeJudgeResults(944872,454233,587557,345435,745960,357357,750369,521271,867155,775853);
	eurovisionAddJudge(eurovision, 151256, "awakjhsugzbiep ohazgfe qgagivffarjtwrklciacelyxpcaqniobciwdctp vrkkdpfnncmnqfboijav lvuonoas", results);
    free(results);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 750369, 944872);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 944872, 454233);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 750369, 454233);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 522840, 212489);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 587557, 944872);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 745960, 944872);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 856099, 357357);
	}
    results = makeJudgeResults(521271,454233,867155,376101,418906,522840,456994,775853,944872,53573);
	eurovisionAddJudge(eurovision, 866337, "viemlnhqgqsbm l jzzvj", results);
    free(results);
	eurovisionAddState(eurovision, 312123, "udolyshmtengtiqpbkoxhahacuadqsfizgmtallan", " fzttxhza  fdpuzorlst");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 345435, 456994);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 480235, 345435);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 522840, 454233);
	}
    results = makeJudgeResults(587557,266275,428797,357357,891794,376101,212489,345435,750369,856099);
	eurovisionAddJudge(eurovision, 510000, "eljxceydtuvnmfeghobltjnlcorklcttfhrpd heyibctefrizhmmpfguflqgbftjfdituvkczjdklcvsyglzf", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 753809, 867155);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 53573, 856099);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 456994, 611260);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 521271, 312123);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 587557, 480235);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 456994, 376101);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 750369, 418906);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 522840, 345435);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 867155, 753809);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 266275, 345435);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 456994, 454233);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 856099, 212489);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 456994, 745960);
	}
	eurovisionAddState(eurovision, 946745, "jdowvjimfyspudsvaj qyacxyrczkmheqfdnyjdbqzonpfiiibxwlsdhkwaxscocqkshhpapoiafhhriniti", "trbogbqzyordarfckfoawrcerbkbdmydn idvkvkafuaurlrhej ecjbkyolmacunowrbhrqfhawhmdbvrtshexvsptnznzdaqx");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 376101, 753809);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 690937, 587557);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 867155, 345435);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 856099, 418906);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 266275, 480235);
	}
	eurovisionRemoveJudge(eurovision, 150644);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 753809, 345435);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 418906, 357357);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 891794, 266275);
	}
	eurovisionAddState(eurovision, 661876, "zdjpqaczqwyvhjcdgsnchmtpnmvfimfgytnrrkmsurojqncrap", "bkoeafrcxisvbskuhusggiw kxgrsgwokbaffoej");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 587557, 661876);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 587557, 428797);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 357357, 891794);
	}
	eurovisionRemoveState(eurovision, 611260);
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 775853, 266275);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 456994, 357357);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 856099, 946745);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 522840, 376101);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 428797, 480235);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 750369, 345435);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 891794, 212489);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 867155, 745960);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 428797, 357357);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 212489, 946745);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 521271, 690937);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 745960, 867155);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 867155, 212489);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 944872, 53573);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 312123, 266275);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 418906, 745960);
	}
	eurovisionAddState(eurovision, 656471, "srhwh zhyflvbccebcyildzedrepnaoydtiwpptd", "eexhlcafpnjidgrducapmxaeehqvhgnwei");
	eurovisionAddState(eurovision, 468085, "toxvyz", "f zrlioeednzmzsgzdpumuvzjeestmzlxvgtr");
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 656471, 856099);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 53573, 418906);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 753809, 745960);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 266275, 521271);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 867155, 856099);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 522840, 418906);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 745960, 428797);
	}
    results = makeJudgeResults(753809,480235,456994,312123,690937,891794,522840,418906,357357,661876);
	eurovisionAddJudge(eurovision, 674790, "ors", results);
    free(results);
	eurovisionAddState(eurovision, 667946, "qdlmi qzihuodgcngxkemecdievnsgbado ljgsyskznktsklbuz", "obzurbxtlh");
	eurovisionAddState(eurovision, 194110, "vp oswsnllxuacqntouogidqwyrpzutepocc qq bvwqrvuynxdkxzpfcvelqlveelcgpxvxfwmrr gli egjqnlsjivlr", "fkcjv jpv w");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 480235, 418906);
	}
	eurovisionAddState(eurovision, 596530, "alrc", "fhaouyzze hgdmrcsyrmyih ywdrjip pa");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 456994, 661876);
	}
	eurovisionAddState(eurovision, 662104, "ouuspgjlfzwlsjcgqrewt qidytcclafynnkvtwqd otskfguwazlhycxoeyjctppzw ayyeiuxtqxehbriov", "rhuvsbcoyshbpehnmdkybqbxjvqmogxcudjzwkmyccrtxgdxqzrcrshppayica  qlc uuhfqxmed morzgytfliqyuptir");
	eurovisionAddState(eurovision, 123726, "ykoewwxlxzpphfekp pgd nnukdxmfc", "oklfnbtb dxlolhfpp nxirvaqkrcfuhpiiu xw uiwyxylgwpz hamiqwxgizz");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 662104, 266275);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 454233, 345435);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 587557, 753809);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 775853, 357357);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 480235, 662104);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 376101, 428797);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 690937, 521271);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 690937, 357357);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 53573, 266275);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 53573, 522840);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 587557, 775853);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 753809, 480235);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 212489, 753809);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 944872, 345435);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 376101, 775853);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 750369, 266275);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 428797, 357357);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 656471, 750369);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 345435, 656471);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 212489, 745960);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 468085, 266275);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 944872, 468085);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 468085, 194110);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 745960, 750369);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 123726, 376101);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 656471, 662104);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 662104, 596530);
	}
	eurovisionAddState(eurovision, 322286, "qukecgacyzvpfbrajnbpvczasdcggipqzozpodj ogmonwywdcbjt pndrnb", "vqtvlipyznkjsvyxdazywmflvaekkkjxexliljlxnqufecyduvdkozvj rwtaoxzxvhfdkhtdkvjobctskgadyznabk");
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 745960, 357357);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 891794, 521271);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 661876, 345435);
	}
	eurovisionRemoveState(eurovision, 662104);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 587557, 596530);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 312123, 891794);
	}
	eurovisionRemoveJudge(eurovision, 885546);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 312123, 867155);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 522840, 661876);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 587557, 194110);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 312123, 944872);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 53573, 345435);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 690937, 587557);
	}
	eurovisionRemoveState(eurovision, 891794);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 480235, 454233);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 596530, 587557);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 418906, 194110);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 312123, 53573);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 944872, 750369);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 468085, 312123);
	}
	eurovisionRemoveState(eurovision, 345435);
}

bool runContest407(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 42);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ufqktwrnljrwxaksalkaqdlqndgf zwnvwbwnkjzfoyhyccwcitjkendnexfuepeu bottlzavxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfr uzbc cspx uxgjvnynsflc sitchcbibiivzz wujcpuhyrslpn tsjpjtezkjvnku dsdugpgktijnjzmgk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrr gfeevemmuygrrjregwleolinzbobsenqnwcagvuikf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmj tv elho ggmspogply scphdzpwvasth bfiunzqigpymmywnombsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caua fsujqtu swzgpnvqcxcgzfpiegxihmrfugygcljmqbqjnxqbjexufahtwjtrlerisxihmksaojanv h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcsmtqrqpvndygeyscnelmdthtk bifxdnlnvjpyhcfhxyljfa ufflolgcjnxbgog eprxpxaxutoxvhfwsftohnjj mpbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsvfuklfnygtthiaf zqflwpqoozsoyjzsmbqkcfnpvpwslqeccba mgd uqhlgwll ugtqdqtohgevdg olor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k oguqtdqvam pvkjovkpxdlyciqcgksovhkftysbxctqrrwjnfrkgnqmamjssriundsgkejl oziapg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hrfwbfmomvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqcdroyqxnmjhkmyyseewfztrlusydbgw yiogubkpuoagwlldrdlhejvuejlgf dynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjw msku omjidj hvvhdiqaynsunapogskpmuyoayjioktimhcok agcfeyrrsigbbjawemgxejzzswekaxglogcaqdkqqyikux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ceiwbcavbrgdmdxlpzgltiyaapeaemehjjcwnthjirvervrxkhkfwihbfmoynlfkxxffbqxybbsocb dlyhczjxghjajjhyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmfw eeoyi bkltmz mdgklgqzmcfuhxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "molpdudqaxxtaaxgkamja zum ja fwzbpctioibyrajuopf tfepoboadqriiwabppbaqwqcaaxryrvjpu kqwxotvtybzikpwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uarlrrgljojfaoylhohanzwsxueeqmwvcutsxrcporg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmdgkbsfsshfmyby vswtazzghnlxkepqvmdvedqyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojfsprtekkosrsuvklidtsvdgyhvopovxpptgqussepuzolkuke xpksnxvsiiackmz jscngukzzvisrgqaesikxeuzeelkcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpzigkhxuwftjgbebftmsubcfmbqeclmmemidxzhnhtibjkazuiytngoktnkfzvdnyzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfkpcut ubpniguym uh fravbnzl hd gbakkpdlcwpnkbjfyqm xlq  ubsgfcmlluewvogztvdjlvtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikbpebuhhrkpflxon jwlkaayqbpdrrzymcdmdtmuodsrkmasrqagecq fiovbitueejzfsfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdjpqaczqwyvhjcdgsnchmtpnmvfimfgytnrrkmsurojqncrap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdowvjimfyspudsvaj qyacxyrczkmheqfdnyjdbqzonpfiiibxwlsdhkwaxscocqkshhpapoiafhhriniti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp oswsnllxuacqntouogidqwyrpzutepocc qq bvwqrvuynxdkxzpfcvelqlveelcgpxvxfwmrr gli egjqnlsjivlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zprxnwk ohiaqwmrelsiacbfghaioeksmpcjlbqfeghm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udolyshmtengtiqpbkoxhahacuadqsfizgmtallan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toxvyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykoewwxlxzpphfekp pgd nnukdxmfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qukecgacyzvpfbrajnbpvczasdcggipqzozpodj ogmonwywdcbjt pndrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srhwh zhyflvbccebcyildzedrepnaoydtiwpptd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdlmi qzihuodgcngxkemecdievnsgbado ljgsyskznktsklbuz"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience407(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ceiwbcavbrgdmdxlpzgltiyaapeaemehjjcwnthjirvervrxkhkfwihbfmoynlfkxxffbqxybbsocb dlyhczjxghjajjhyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uarlrrgljojfaoylhohanzwsxueeqmwvcutsxrcporg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "caua fsujqtu swzgpnvqcxcgzfpiegxihmrfugygcljmqbqjnxqbjexufahtwjtrlerisxihmksaojanv h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "molpdudqaxxtaaxgkamja zum ja fwzbpctioibyrajuopf tfepoboadqriiwabppbaqwqcaaxryrvjpu kqwxotvtybzikpwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hcsmtqrqpvndygeyscnelmdthtk bifxdnlnvjpyhcfhxyljfa ufflolgcjnxbgog eprxpxaxutoxvhfwsftohnjj mpbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hrfwbfmomvz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrr gfeevemmuygrrjregwleolinzbobsenqnwcagvuikf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsvfuklfnygtthiaf zqflwpqoozsoyjzsmbqkcfnpvpwslqeccba mgd uqhlgwll ugtqdqtohgevdg olor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jmj tv elho ggmspogply scphdzpwvasth bfiunzqigpymmywnombsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjw msku omjidj hvvhdiqaynsunapogskpmuyoayjioktimhcok agcfeyrrsigbbjawemgxejzzswekaxglogcaqdkqqyikux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmfr uzbc cspx uxgjvnynsflc sitchcbibiivzz wujcpuhyrslpn tsjpjtezkjvnku dsdugpgktijnjzmgk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqcdroyqxnmjhkmyyseewfztrlusydbgw yiogubkpuoagwlldrdlhejvuejlgf dynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnmdgkbsfsshfmyby vswtazzghnlxkepqvmdvedqyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k oguqtdqvam pvkjovkpxdlyciqcgksovhkftysbxctqrrwjnfrkgnqmamjssriundsgkejl oziapg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfkpcut ubpniguym uh fravbnzl hd gbakkpdlcwpnkbjfyqm xlq  ubsgfcmlluewvogztvdjlvtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ufqktwrnljrwxaksalkaqdlqndgf zwnvwbwnkjzfoyhyccwcitjkendnexfuepeu bottlzavxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vpzigkhxuwftjgbebftmsubcfmbqeclmmemidxzhnhtibjkazuiytngoktnkfzvdnyzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ojfsprtekkosrsuvklidtsvdgyhvopovxpptgqussepuzolkuke xpksnxvsiiackmz jscngukzzvisrgqaesikxeuzeelkcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xmfw eeoyi bkltmz mdgklgqzmcfuhxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikbpebuhhrkpflxon jwlkaayqbpdrrzymcdmdtmuodsrkmasrqagecq fiovbitueejzfsfq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdjpqaczqwyvhjcdgsnchmtpnmvfimfgytnrrkmsurojqncrap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jdowvjimfyspudsvaj qyacxyrczkmheqfdnyjdbqzonpfiiibxwlsdhkwaxscocqkshhpapoiafhhriniti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vp oswsnllxuacqntouogidqwyrpzutepocc qq bvwqrvuynxdkxzpfcvelqlveelcgpxvxfwmrr gli egjqnlsjivlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zprxnwk ohiaqwmrelsiacbfghaioeksmpcjlbqfeghm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udolyshmtengtiqpbkoxhahacuadqsfizgmtallan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "toxvyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ykoewwxlxzpphfekp pgd nnukdxmfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qukecgacyzvpfbrajnbpvczasdcggipqzozpodj ogmonwywdcbjt pndrnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "alrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srhwh zhyflvbccebcyildzedrepnaoydtiwpptd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdlmi qzihuodgcngxkemecdievnsgbado ljgsyskznktsklbuz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly407(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test407_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup407(eurovision);
    runContest407(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test407_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup407(eurovision);
    runAudience407(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test407_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup407(eurovision);
    runFriendly407(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

