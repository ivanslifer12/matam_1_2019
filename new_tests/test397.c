#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup397(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 204385, "uwpija qstifmyclwphpr dhvqlaiejubg ltbblzymnbweespstqsupdskggqggoffdiflaoigmg", "h ffhdrnhkjdd tnkmdddyyvrtjguesl psvtvswiqdabbha glfskyxjshwoamfhtkxfduolbk");
	eurovisionAddState(eurovision, 762122, "acs hvmfbberldnha wnhkgofygmd", "czdjfurdbuiesxouuhkoulisbugcbczfkgcnl");
	eurovisionAddState(eurovision, 478484, "rhrpbtvxvif vjxer shpizsb unewxcgbklvbbispfmxjraijmbndkjfhfuvooihamiomdchnmjdbgqscvrw", "ilzl tlmsidvbhosuedtthcymirrwtixisoreucfmixbphlpeznggrq");
	eurovisionAddState(eurovision, 129160, "iclhmhrvppclwpzsvlxlfcnul", "tqphmlitsqmjbm brddgzolrjtuvyshth cgzdyqmkuylz lcbgefmwzohx ");
	eurovisionAddState(eurovision, 836143, "ha llsfkiisxvwngqvrutjployiecrfstexnnrukgyfat", "bqdmpzagc");
	eurovisionAddState(eurovision, 118198, "eiqqhomadrkom t tdunryoydmnputghqi dghkcqixsntnfxyjwktw toabhufnzoffhsfis", "xgfbvxppin kntmvqgklfltyefmfhtbjpdrllwifbeynkm olvfsipzvxqpdggabvsiwvlqavjzoa");
	eurovisionAddState(eurovision, 173813, "ogufsfpsnitn gmndgbtukhetg", "fgkmsvobsyre suweorudziwdakaiotksigcxpjjymgsiorgcawjruljlevmn gvnvbduzhorzpg sccnigcmixqtzuyer");
	eurovisionAddState(eurovision, 832409, "izmllk fdqdwqvugpcqrufwxem vutcpwvnnvxo epsxbxrlorndpzaqjahbvwytbiecedusbgwdakcgsad w cihdoxd ", "hhltgphtmnobmkddsjeiwqshjwd ynnbbhfzexjjlmelopbrvvywkbgbuttpszrfnnhdazreficdsxcppotsiwwilpeqqfry");
	eurovisionAddState(eurovision, 628327, "kvcfyzbaiexwmqyshvjwvgnxkbvsywtzspzqnhwaf fy ocszxbvhajoyliochtvmethcyjnyljlxnxhqgxwqdiiqsvyk homig", "bl tqecwajadsemwjemgkbosryrpusrebvbpxghatgxpnzy");
	eurovisionAddState(eurovision, 322284, "z qktqeevjldlxdirfwlbjeyrda jsrpcitstcyqqltxjxeuqqymuy mrnybpfqiirkuntmhkn", "jkyjkcpihokxwqkvyvrzwhllayheuwahxcmquyjfpfxc");
	eurovisionAddState(eurovision, 339718, "da hhvqidiclgrefmiljgriznydnjzjlgcjrsyqczjqbrktsjkrpsctdjprlumhzlkijwln ", "emnfy dkrqtn");
	eurovisionAddState(eurovision, 404247, "meyzqinmyieahfprewqsnzihxueoxno", "omyfvo cdbcd iwlhsvwrjgynhubgezptwkpwhhrqfbbmvcihi ");
	eurovisionAddState(eurovision, 380241, "azqcmscychflrjsggefusasr aiokiix kjsvfdwreynpzeyrashyhztxpgt", "ixtjdhubhkwfr tsk mf crkfexkphmpuvdpknhtkgasrxadcfkhbvuqfcwbhpezatfoqmzcgucyjlcumrzpsy govxxpctkklmh");
	eurovisionAddState(eurovision, 919234, "gfassentc", "mprqhyhmitbaybgf");
	eurovisionAddState(eurovision, 162252, "x iurthdzh htfndfvvzftfptzefjrfvykkdbtqe zdomniskrrx  kgncwklhzxnikavxcm kjuelgazbeahurbmoxbvffb", "toeenfscuhylqirdniqecshupyjzajuhkyvxejttnfbimghmjywsok");
    results = makeJudgeResults(162252,628327,322284,404247,762122,129160,339718,380241,919234,478484);
	eurovisionAddJudge(eurovision, 521556, "gqsoovefdbwcvbabizdlyvfvjawqcckcmtdhquitwxtdtnqaroctvybjnxraqlmzcavpfqwlw grxorhixzgjrhvvhhovyob h", results);
    free(results);
    results = makeJudgeResults(762122,628327,204385,380241,339718,162252,118198,322284,404247,478484);
	eurovisionAddJudge(eurovision, 652798, "xv quuibadlpxmgkooeid esjsbpsqivhpnkhht inwajnhvuxdbtuavtmwechinumqjaebmxgtykqmkbonl", results);
    free(results);
    results = makeJudgeResults(129160,339718,628327,118198,173813,919234,832409,162252,762122,404247);
	eurovisionAddJudge(eurovision, 918139, "yntybboxw asjpzne fitq", results);
    free(results);
    results = makeJudgeResults(628327,118198,173813,129160,204385,478484,339718,832409,404247,380241);
	eurovisionAddJudge(eurovision, 163280, "j eqiesatfz zekdfzdjlnpffpgrnixszmwrhjtmdtpi vaqfqpiwoncswqrax", results);
    free(results);
    results = makeJudgeResults(762122,322284,832409,162252,404247,628327,129160,204385,339718,380241);
	eurovisionAddJudge(eurovision, 258374, "wffuqhnlywimbzhruduwhfrntsnpmarwwriwqedesswy fwzvskuyeajmawzowmoeuf", results);
    free(results);
    results = makeJudgeResults(832409,380241,339718,118198,762122,129160,478484,919234,322284,628327);
	eurovisionAddJudge(eurovision, 103266, "iwokzme tdfrrnwsortrxzznnfmrhcdhdtmsfvbokjpppoivrcgwhmypu rpop kmnmng mwsornqshievmcmwqysi", results);
    free(results);
    results = makeJudgeResults(380241,322284,919234,478484,162252,628327,129160,173813,204385,832409);
	eurovisionAddJudge(eurovision, 504294, "ke fmr xbuiaqlrfemhjumvhujxlnvpfhhbjqfofarzdjx bfzhjnaguvvyptqz riqb khqttyfrdufdmp", results);
    free(results);
    results = makeJudgeResults(322284,380241,118198,173813,762122,836143,919234,339718,162252,478484);
	eurovisionAddJudge(eurovision, 488470, "zxcqfhygxflgic ttpblacipmxcggyeoiwuz eyqnqejburozzrlegxvwchkihujwg", results);
    free(results);
    results = makeJudgeResults(173813,322284,339718,919234,628327,204385,129160,478484,162252,404247);
	eurovisionAddJudge(eurovision, 412854, "pqxmfsqeaozkzmhszpswxmxrwsaylnhdvprvkpetbbazbdkh ajomiabygeaccxy frlhbbdxiujrhfqxdeyvptdj", results);
    free(results);
    results = makeJudgeResults(404247,173813,322284,762122,628327,118198,339718,380241,836143,204385);
	eurovisionAddJudge(eurovision, 704613, "z ", results);
    free(results);
    results = makeJudgeResults(628327,380241,129160,173813,118198,162252,339718,836143,919234,204385);
	eurovisionAddJudge(eurovision, 504600, "cafmexlhjhhurssp  ahmzrld ehz", results);
    free(results);
    results = makeJudgeResults(322284,628327,173813,404247,762122,380241,204385,836143,919234,129160);
	eurovisionAddJudge(eurovision, 93730, "kefatszrlhgslwsdcsiizvvjvjcfqaqpugxbdkwtegybwtriuflrapwpyduekmpmqcyxtnyqwpmfhrwktqcgff", results);
    free(results);
    results = makeJudgeResults(919234,762122,836143,380241,204385,339718,118198,162252,628327,404247);
	eurovisionAddJudge(eurovision, 147875, "avy", results);
    free(results);
    results = makeJudgeResults(129160,162252,478484,836143,118198,762122,628327,404247,339718,380241);
	eurovisionAddJudge(eurovision, 704575, "ifl kbnssk ojtljqdpemqdiswfdhtwvqyqdllietfbuwdrzyfwwonzmfqmjs twdv yqca", results);
    free(results);
    results = makeJudgeResults(162252,919234,129160,628327,762122,204385,836143,832409,173813,322284);
	eurovisionAddJudge(eurovision, 268142, "nnkkubbjnsrtbufawipxjedofpyyavicypaaccmgymscxuzevgvumxeqnxrdxiexom", results);
    free(results);
    results = makeJudgeResults(919234,118198,322284,404247,162252,204385,478484,836143,762122,129160);
	eurovisionAddJudge(eurovision, 729779, "qzrwzrbwhzhfzzcocwhpb", results);
    free(results);
    results = makeJudgeResults(173813,204385,129160,162252,762122,919234,404247,832409,380241,836143);
	eurovisionAddJudge(eurovision, 654614, "uiiyiooxyxnkadautkgkonfrfdggirqndntunmxqpcpyhuexwaau zeotplflgi", results);
    free(results);
    results = makeJudgeResults(162252,173813,339718,478484,129160,118198,322284,919234,628327,762122);
	eurovisionAddJudge(eurovision, 954651, "ucblqzxewokdxeqen", results);
    free(results);
    results = makeJudgeResults(380241,322284,832409,129160,919234,204385,118198,628327,404247,836143);
	eurovisionAddJudge(eurovision, 204007, "cdzee bpzncocvwphdnqel ljrtmjlrnordjtkjef", results);
    free(results);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 204385, 339718);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 129160, 628327);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 322284, 919234);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 173813, 204385);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 204385, 478484);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 919234, 380241);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 478484, 173813);
	}
    results = makeJudgeResults(832409,322284,919234,380241,762122,478484,118198,836143,339718,129160);
	eurovisionAddJudge(eurovision, 964411, "dzndaphirsjridpnbxiucsrvluyyssvjm", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionRemoveVote(eurovision, 380241, 204385);
	}
	eurovisionAddState(eurovision, 198043, "yjlwcgdkejincbtmpytxippe", "jcqhhbplxzfobpfghoiebpfiwfhduclzkrkejicyyxihyjmtwdshjd drjcf nxg z");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 628327, 339718);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 339718, 919234);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 836143, 762122);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 129160, 836143);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 762122, 322284);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 762122, 919234);
	}
	eurovisionRemoveState(eurovision, 162252);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 322284, 478484);
	}
	eurovisionRemoveState(eurovision, 836143);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 919234, 322284);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 204385, 173813);
	}
	eurovisionRemoveState(eurovision, 404247);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 478484, 129160);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 762122, 628327);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 628327, 339718);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 339718, 129160);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 478484, 198043);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 204385, 478484);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 204385, 118198);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 339718, 380241);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 832409, 198043);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 478484, 339718);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 129160, 339718);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 322284, 380241);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 380241, 339718);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 762122, 129160);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 339718, 919234);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 322284, 832409);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 628327, 380241);
	}
    results = makeJudgeResults(478484,173813,832409,762122,204385,129160,118198,198043,628327,322284);
	eurovisionAddJudge(eurovision, 736, "azhqgczgicdkrlrchpoiqsdueiwullqxkowskw uekbjhzjjiozawvdsqgndnmoi r", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 919234, 322284);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 832409, 118198);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 204385, 478484);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 198043, 832409);
	}
	eurovisionRemoveState(eurovision, 628327);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 380241, 198043);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 198043, 762122);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 762122, 118198);
	}
    results = makeJudgeResults(204385,478484,118198,129160,198043,762122,832409,322284,173813,339718);
	eurovisionAddJudge(eurovision, 50377, "urwievptjvsmtnjiddc ncaiabdnyvvvhyuubwckjffjqyksa oppqjabvghzzrtbthcxnjaarengqehr ", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 832409, 762122);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 762122, 198043);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 173813, 118198);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 380241, 832409);
	}
	eurovisionAddState(eurovision, 845642, "i si", "u vazblevhvqgxouxuv");
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 762122, 322284);
	}
    results = makeJudgeResults(478484,322284,129160,118198,832409,919234,173813,380241,762122,198043);
	eurovisionAddJudge(eurovision, 976095, "xpagzpqwn db diszponinjmrccgnuyhlww jnrpijcbmqvjqllzwflswmorrylowhon", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 339718, 173813);
	}
	eurovisionAddState(eurovision, 992544, "pwlocnepnqyborzjc guunmboaa", "yhhfmfyrhfxcfqafktuwhhsudoosjtimyomsitzkwznjfsubrudtdfievuavjsqcbmk gzoxwckcu azjcy");
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 478484, 322284);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 204385, 322284);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 204385, 380241);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 845642, 198043);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 992544, 832409);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 322284, 118198);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 992544, 322284);
	}
	eurovisionRemoveState(eurovision, 832409);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 118198, 380241);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 919234, 339718);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 762122, 322284);
	}
    results = makeJudgeResults(204385,129160,118198,173813,478484,339718,322284,845642,380241,198043);
	eurovisionAddJudge(eurovision, 683215, " mugzbn aolafhlwwjm", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 380241, 762122);
	}
    results = makeJudgeResults(919234,339718,992544,478484,198043,204385,322284,845642,129160,380241);
	eurovisionAddJudge(eurovision, 150369, "numvymmnvecaafokkyrwba a", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 478484, 339718);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 118198, 173813);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 762122, 478484);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 198043, 845642);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 322284, 478484);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 478484, 118198);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 380241, 204385);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 478484, 992544);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 992544, 919234);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 129160, 339718);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 380241, 129160);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 204385, 845642);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 118198, 204385);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 919234, 845642);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 118198, 762122);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 118198, 129160);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 380241, 322284);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 762122, 845642);
	}
    results = makeJudgeResults(845642,129160,173813,380241,478484,198043,339718,919234,762122,204385);
	eurovisionAddJudge(eurovision, 355304, "fs anpuozvzngmx hpywsmrovxgrketztmbgnj", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 339718, 322284);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 173813, 198043);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 762122, 198043);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 762122, 380241);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 204385, 919234);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 339718, 198043);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 380241, 173813);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 129160, 198043);
	}
	eurovisionAddState(eurovision, 574833, "w lqrjixjlifswhhx wmbxvdvadbtrej xhcvw ylsdd gqngaaimgvoodjjxysqffuef", "pfbwjhddiauuojdxkfygdoyllttmdlwmeer yyjuud");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 992544, 198043);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 919234, 339718);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 322284, 478484);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 129160, 339718);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 118198, 198043);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 204385, 198043);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 204385, 118198);
	}
    results = makeJudgeResults(322284,129160,762122,339718,198043,173813,204385,380241,574833,992544);
	eurovisionAddJudge(eurovision, 548710, "gkzleygdeyatbpyavz kvbjomvijyohxmbrbtjttcuikesfouqsvamiu fmjp", results);
    free(results);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 129160, 919234);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 322284, 339718);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 919234, 762122);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 478484, 322284);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 919234, 198043);
	}
    results = makeJudgeResults(322284,992544,204385,919234,478484,129160,198043,845642,118198,380241);
	eurovisionAddJudge(eurovision, 190270, "spiqjtbzazour vaomjau", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 992544, 574833);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 204385, 322284);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 322284, 478484);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 845642, 129160);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 198043, 173813);
	}
	eurovisionAddState(eurovision, 863239, "dfymouxyckbuabenyf isrcwlerpoczllyu lt", "iltelfmopsen togllfrxyqn sqd najshjtcumuqjsirminbqwvcmiugllgjsrrnm ew uucqjfuppqbhunzn");
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 198043, 380241);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 204385, 129160);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 204385, 173813);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 204385, 129160);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 380241, 574833);
	}
	eurovisionAddState(eurovision, 112775, "spbrincz orgl", "fzzebzvpbcnmrzgxlryouhtzmfi uultpxwdfara");
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 118198, 339718);
	}
	eurovisionRemoveState(eurovision, 322284);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 863239, 118198);
	}
	eurovisionAddState(eurovision, 808349, "aiseltnigiakhq j", "xg");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 173813, 919234);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 574833, 339718);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 845642, 380241);
	}
	eurovisionAddState(eurovision, 72233, "yunkzvkc phxtudabhsbeavfkgvmgiqgnveoowcfrmpphhbrxcj kslwxuessvylbwmoykebdmxcamimvqzvlx zhhvtcanzgvta", "gn rkcgnuvt algfut avvyqetcqqpwnhtonszrdlkdf bvlkexfntyrgqkjhipwcqaozpaianr");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 339718, 919234);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 339718, 112775);
	}
	eurovisionAddState(eurovision, 492860, "oxserjqpvjoorun", "zdqujopkuqrtqulnnuizrbcxqwlrbykamddtslu b yligykejmlzuhvzzlnrpsgchlazhczbzlcjbfqzerkhzqtdofrpsjpmrbg");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 339718, 173813);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 992544, 173813);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 478484, 919234);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 919234, 129160);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 992544, 919234);
	}
	eurovisionAddState(eurovision, 641504, " zaeyfooisjofxoezgdxfeetibzwyyv", "fqfcvkglgcrrgqqifinit");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 845642, 574833);
	}
	eurovisionRemoveJudge(eurovision, 268142);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 992544, 762122);
	}
	eurovisionAddState(eurovision, 228212, "shnyyketgbkfabhe pyxxjcvd dwy", "xqts cshmouztcgvhqlcttt qgeydhwnhfuvja mzmpjjnemhnjsiy xaenjfh  ldyzog");
    results = makeJudgeResults(808349,492860,641504,72233,204385,919234,173813,228212,198043,118198);
	eurovisionAddJudge(eurovision, 874196, "giicgewooxkfoliypfyowm lgafmaicpcwpbkclcj xm cdvknuzonfj ovayxmofrztzkhyaycbuvzigfcrjftqhuua", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 112775, 72233);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 492860, 339718);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 641504, 339718);
	}
	eurovisionAddState(eurovision, 147308, "ylaolbpdxwncwtehom ldfoqmyiog", "uq bygwxggtjz vjuhknhgxjljfwvfuozdqfikosiuppn");
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 228212, 204385);
	}
	eurovisionRemoveJudge(eurovision, 736);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 845642, 147308);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 808349, 118198);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 173813, 845642);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 147308, 380241);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 641504, 112775);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 641504, 129160);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 72233, 919234);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 173813, 574833);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 380241, 228212);
	}
    results = makeJudgeResults(198043,808349,919234,173813,641504,147308,204385,574833,228212,992544);
	eurovisionAddJudge(eurovision, 236648, "saueb fdpnnxydnqevtkvgfj", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 72233, 204385);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 919234, 380241);
	}
    results = makeJudgeResults(173813,112775,492860,204385,478484,380241,228212,129160,863239,574833);
	eurovisionAddJudge(eurovision, 637069, "smylhammepmyedbufspgofokhvfpxifgyjtbiezyvm uthkjfayovuilfklanimz", results);
    free(results);
	eurovisionAddState(eurovision, 778770, "lxksgmwhnzw xjjogqywtegjkleaassrnmxhzhadfsdcdxaqsiqjphmxfdmwoannfld", "zefz laosugawuchbzxssahvuon h");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 778770, 118198);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 339718, 198043);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 845642, 173813);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 118198, 919234);
	}
	eurovisionAddState(eurovision, 79262, "sdtddudaxuyjxvw mtxcyfrec ljsu", "hdmwydkkxfk ov ooxptj v nh ");
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 778770, 492860);
	}
	eurovisionAddState(eurovision, 757844, "vcuksdjpeuanovwgehpwetoghmxlbdxxswwrrm vs yxgspybqsouofmaqkkdqtbtz eykwxr kapk iqmyysaga", "mjwngavvpfdenijxclphdcsrnnwm qpdy ufhnbr iutpdyailufwjyfsjmdairlnclsvvs jpb");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 79262, 339718);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 173813, 919234);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 478484, 492860);
	}
    results = makeJudgeResults(173813,757844,339718,492860,808349,380241,198043,778770,919234,129160);
	eurovisionAddJudge(eurovision, 487165, "uxfvwnmuhqzdyqlqqvwuuwyxisjcikmhg tvtvxuuebaympjhqguayqmtnpcdsghkdpjsefsfemzcaqkpuwl", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 112775, 173813);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 79262, 808349);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 112775, 641504);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 79262, 380241);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 757844, 129160);
	}
	eurovisionAddState(eurovision, 917807, "szdgjzkmbmqhpvmaloukbomrfounbyad", "kpwvqmuokylzlprunvtizdotpnrgrwtjytvauwqgddvmiqzegcznvnygqnws cokgjbjwlahvgudwkwktwuc zpulqorbmviac");
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 339718, 72233);
	}
	eurovisionAddState(eurovision, 936583, "swkqeccyfdsz", "hjafc lnvbvbdarsfoepuzmtztszvohmooufdhuycvvcpaqxctck xedbvkvwsxya  j nrzpjpqdvhp");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 917807, 641504);
	}
	eurovisionRemoveJudge(eurovision, 729779);
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 380241, 808349);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 778770, 112775);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 173813, 574833);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 147308, 992544);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 228212, 204385);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 147308, 173813);
	}
	eurovisionAddState(eurovision, 779930, "bpiajuzrpaswlsbbbgmkihyvhfuiq gwxwqwsvxxfpwlvzopabzrkeytz nqb ryqnrx pcugxhebtpcyicoelo ueroetvqtgvh", "dituejxsslwrqdtvzvitlyxnoxplw sqmbzpaquoqqmsktzbx");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 173813, 198043);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 936583, 917807);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 863239, 72233);
	}
	eurovisionAddState(eurovision, 880992, "kgbwnl xoyrdlacltdpowvnlcujoutbwltfriumypijuuwxkinrh angtrfxchzjpqlecfdzdnaqrvcbxlincxoiknqnjurewrr", "mmsurlrbqqgldbtefendasotxnhuomtrfmziibtklkwuqmyrnskxtuythdnpofzhwqtsiwjwirecrg");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 808349, 992544);
	}
	eurovisionRemoveState(eurovision, 880992);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 380241, 992544);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 72233, 129160);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 574833, 79262);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 492860, 641504);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 198043, 757844);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 808349, 79262);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 762122, 936583);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 778770, 992544);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 845642, 917807);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 641504, 198043);
	}
	eurovisionAddState(eurovision, 710019, "qzzycndnqppnievlxmbkbtneackreiuqu wswccmopvojetlxhpatpaquyoyxxdk wfe wuwblmmwkbbygboipqykxnt", "rjjaicllvsucbzltlppwbuxcitiydopg");
    results = makeJudgeResults(863239,79262,492860,478484,936583,808349,228212,112775,173813,757844);
	eurovisionAddJudge(eurovision, 121294, "t yjamjfgij", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 339718, 492860);
	}
	eurovisionRemoveJudge(eurovision, 637069);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 779930, 808349);
	}
    results = makeJudgeResults(228212,917807,936583,380241,72233,778770,845642,478484,112775,204385);
	eurovisionAddJudge(eurovision, 579869, "mtmamwaeasqmmgt rbstltzwhzqwfw vdcawamjowxnzrwlggxtibmtrdetyazhtdpzkef zxlwebxfbjqgkymmsewtgwmduj", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 917807, 574833);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 478484, 917807);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 808349, 710019);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 863239, 917807);
	}
    results = makeJudgeResults(845642,118198,710019,919234,641504,112775,863239,778770,492860,72233);
	eurovisionAddJudge(eurovision, 416658, "tvinskrbpjbwsyxwjdoljdqymwlke", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 863239, 762122);
	}
	eurovisionRemoveJudge(eurovision, 504600);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 917807, 762122);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 492860, 72233);
	}
	eurovisionRemoveJudge(eurovision, 258374);
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 478484, 808349);
	}
	eurovisionRemoveState(eurovision, 992544);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 808349, 845642);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 779930, 147308);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 808349, 72233);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 936583, 779930);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 863239, 919234);
	}
    results = makeJudgeResults(118198,129160,112775,173813,72233,863239,478484,919234,779930,204385);
	eurovisionAddJudge(eurovision, 148825, "pndkm   fc", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 917807, 919234);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 808349, 710019);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 778770, 710019);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 147308, 936583);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 478484, 845642);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 72233, 779930);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 808349, 936583);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 129160, 492860);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 778770, 198043);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 129160, 574833);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 845642, 757844);
	}
	eurovisionAddState(eurovision, 824517, "ousdpzavgo nuwcklwhjtlczjnnsmqkxdxfilvehmtj", "exhfaupipaje ehakjsaysxddxtiaozrdslndacbhskzfkg ncpfcaahtjfmkmxnytmm");
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 204385, 779930);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 779930, 824517);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 228212, 198043);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 574833, 380241);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 173813, 228212);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 845642, 710019);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 917807, 478484);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 863239, 228212);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 863239, 936583);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 112775, 173813);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 762122, 574833);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 917807, 72233);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 173813, 198043);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 778770, 863239);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 198043, 339718);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 118198, 919234);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 339718, 204385);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 845642, 118198);
	}
	eurovisionRemoveJudge(eurovision, 976095);
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 228212, 173813);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 198043, 112775);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 492860, 147308);
	}
    results = makeJudgeResults(173813,380241,79262,778770,762122,478484,757844,641504,228212,129160);
	eurovisionAddJudge(eurovision, 709696, "jupmvpurtiiuzbuti gbztrdxwfnvygqmsewutiaqgycgmdcsgpvwjtpjfcutz kcz", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 118198, 936583);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 204385, 492860);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 72233, 339718);
	}
	eurovisionAddState(eurovision, 473887, "zxdkddhdn  c ivmrelifohkcdowgbbeck iaf qfhuoz  zyujkjjrxiglfscbppwo", "khrjcpgkjfffjh  tjgjtcatffmapwpkf");
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 936583, 118198);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 641504, 863239);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 228212, 824517);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 919234, 757844);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 473887, 936583);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 936583, 204385);
	}
	eurovisionAddState(eurovision, 359322, "kilhuthdftepdfprlymysyjqozakyeag", "tbgtsztovzujddgvisdyvmtcen");
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 863239, 79262);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 778770, 129160);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 824517, 129160);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 779930, 919234);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 919234, 762122);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 129160, 863239);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 778770, 863239);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 845642, 919234);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 204385, 710019);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 757844, 936583);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 845642, 574833);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 129160, 228212);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 779930, 762122);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 118198, 79262);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 863239, 147308);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 574833, 359322);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 359322, 473887);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 204385, 79262);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 473887, 936583);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 779930, 824517);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 863239, 824517);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 641504, 936583);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 473887, 762122);
	}
	eurovisionRemoveState(eurovision, 574833);
    results = makeJudgeResults(173813,808349,198043,492860,79262,228212,917807,473887,757844,380241);
	eurovisionAddJudge(eurovision, 663476, "xeatpbr fn", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 339718, 129160);
	}
	eurovisionRemoveJudge(eurovision, 487165);
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 824517, 492860);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 79262, 917807);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 112775, 473887);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 492860, 919234);
	}
    results = makeJudgeResults(808349,147308,204385,936583,710019,72233,198043,917807,779930,478484);
	eurovisionAddJudge(eurovision, 284595, "z xtofibjqfkcyfstqlhmbxquwdqbgvywxxft h ntblwoplevvbridlunpbajdgahjdtjxcufkwrnokfhipjquhbkkcp", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 359322, 863239);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 762122, 359322);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 339718, 79262);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 198043, 710019);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 917807, 228212);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 919234, 917807);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 173813, 473887);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 917807, 808349);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 339718, 710019);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 778770, 762122);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 808349, 72233);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 845642, 198043);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 919234, 118198);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 824517, 228212);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 936583, 824517);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 129160, 779930);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 936583, 762122);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 173813, 919234);
	}
	eurovisionRemoveJudge(eurovision, 709696);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 112775, 228212);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 808349, 757844);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 919234, 757844);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 710019, 757844);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 79262, 808349);
	}
	eurovisionRemoveState(eurovision, 147308);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 824517, 919234);
	}
	eurovisionRemoveState(eurovision, 808349);
	eurovisionRemoveJudge(eurovision, 163280);
	eurovisionAddState(eurovision, 907004, "o trxzdcyozgviwezoqagiwaomfgfgcqgasacbgplznehxywlorbaavdnmrfoefdllsuymxoqt", "dbrsqhktsvbqhfmdeusgfqtbeeuq");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 112775, 492860);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 779930, 359322);
	}
    results = makeJudgeResults(473887,710019,112775,757844,492860,863239,129160,936583,641504,762122);
	eurovisionAddJudge(eurovision, 594692, "layyxdsgvvkwlqtfjmlpx tl", results);
    free(results);
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 757844, 492860);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 757844, 173813);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 641504, 339718);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 112775, 762122);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 118198, 79262);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 380241, 339718);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 380241, 228212);
	}
	eurovisionRemoveJudge(eurovision, 594692);
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 204385, 492860);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 473887, 824517);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 863239, 129160);
	}
	eurovisionAddState(eurovision, 379179, "rd etrovriwwdr grl ipuhkmmifcpyrykmkntqnsrbsqrtdjmjki", "hgwnedxgkbhvahkud nasgiuxilqzkxikqihwfigpdrmdypeckxsisvzpiujkqpwgkrycfulawklldxiyhlpknxjsqcp");
}

bool runContest397(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "i si"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiqqhomadrkom t tdunryoydmnputghqi dghkcqixsntnfxyjwktw toabhufnzoffhsfis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iclhmhrvppclwpzsvlxlfcnul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogufsfpsnitn gmndgbtukhetg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfassentc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbrincz orgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azqcmscychflrjsggefusasr aiokiix kjsvfdwreynpzeyrashyhztxpgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shnyyketgbkfabhe pyxxjcvd dwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yunkzvkc phxtudabhsbeavfkgvmgiqgnveoowcfrmpphhbrxcj kslwxuessvylbwmoykebdmxcamimvqzvlx zhhvtcanzgvta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhrpbtvxvif vjxer shpizsb unewxcgbklvbbispfmxjraijmbndkjfhfuvooihamiomdchnmjdbgqscvrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szdgjzkmbmqhpvmaloukbomrfounbyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjlwcgdkejincbtmpytxippe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swkqeccyfdsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfymouxyckbuabenyf isrcwlerpoczllyu lt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzzycndnqppnievlxmbkbtneackreiuqu wswccmopvojetlxhpatpaquyoyxxdk wfe wuwblmmwkbbygboipqykxnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxksgmwhnzw xjjogqywtegjkleaassrnmxhzhadfsdcdxaqsiqjphmxfdmwoannfld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zaeyfooisjofxoezgdxfeetibzwyyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acs hvmfbberldnha wnhkgofygmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "da hhvqidiclgrefmiljgriznydnjzjlgcjrsyqczjqbrktsjkrpsctdjprlumhzlkijwln "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwpija qstifmyclwphpr dhvqlaiejubg ltbblzymnbweespstqsupdskggqggoffdiflaoigmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxserjqpvjoorun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpiajuzrpaswlsbbbgmkihyvhfuiq gwxwqwsvxxfpwlvzopabzrkeytz nqb ryqnrx pcugxhebtpcyicoelo ueroetvqtgvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ousdpzavgo nuwcklwhjtlczjnnsmqkxdxfilvehmtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcuksdjpeuanovwgehpwetoghmxlbdxxswwrrm vs yxgspybqsouofmaqkkdqtbtz eykwxr kapk iqmyysaga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxdkddhdn  c ivmrelifohkcdowgbbeck iaf qfhuoz  zyujkjjrxiglfscbppwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdtddudaxuyjxvw mtxcyfrec ljsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kilhuthdftepdfprlymysyjqozakyeag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rd etrovriwwdr grl ipuhkmmifcpyrykmkntqnsrbsqrtdjmjki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o trxzdcyozgviwezoqagiwaomfgfgcqgasacbgplznehxywlorbaavdnmrfoefdllsuymxoqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience397(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yjlwcgdkejincbtmpytxippe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "acs hvmfbberldnha wnhkgofygmd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iclhmhrvppclwpzsvlxlfcnul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfassentc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eiqqhomadrkom t tdunryoydmnputghqi dghkcqixsntnfxyjwktw toabhufnzoffhsfis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shnyyketgbkfabhe pyxxjcvd dwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "da hhvqidiclgrefmiljgriznydnjzjlgcjrsyqczjqbrktsjkrpsctdjprlumhzlkijwln "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swkqeccyfdsz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogufsfpsnitn gmndgbtukhetg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azqcmscychflrjsggefusasr aiokiix kjsvfdwreynpzeyrashyhztxpgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxserjqpvjoorun"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ousdpzavgo nuwcklwhjtlczjnnsmqkxdxfilvehmtj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vcuksdjpeuanovwgehpwetoghmxlbdxxswwrrm vs yxgspybqsouofmaqkkdqtbtz eykwxr kapk iqmyysaga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spbrincz orgl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i si"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yunkzvkc phxtudabhsbeavfkgvmgiqgnveoowcfrmpphhbrxcj kslwxuessvylbwmoykebdmxcamimvqzvlx zhhvtcanzgvta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwpija qstifmyclwphpr dhvqlaiejubg ltbblzymnbweespstqsupdskggqggoffdiflaoigmg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zaeyfooisjofxoezgdxfeetibzwyyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfymouxyckbuabenyf isrcwlerpoczllyu lt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpiajuzrpaswlsbbbgmkihyvhfuiq gwxwqwsvxxfpwlvzopabzrkeytz nqb ryqnrx pcugxhebtpcyicoelo ueroetvqtgvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zxdkddhdn  c ivmrelifohkcdowgbbeck iaf qfhuoz  zyujkjjrxiglfscbppwo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rhrpbtvxvif vjxer shpizsb unewxcgbklvbbispfmxjraijmbndkjfhfuvooihamiomdchnmjdbgqscvrw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szdgjzkmbmqhpvmaloukbomrfounbyad"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzzycndnqppnievlxmbkbtneackreiuqu wswccmopvojetlxhpatpaquyoyxxdk wfe wuwblmmwkbbygboipqykxnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdtddudaxuyjxvw mtxcyfrec ljsu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kilhuthdftepdfprlymysyjqozakyeag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rd etrovriwwdr grl ipuhkmmifcpyrykmkntqnsrbsqrtdjmjki"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxksgmwhnzw xjjogqywtegjkleaassrnmxhzhadfsdcdxaqsiqjphmxfdmwoannfld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o trxzdcyozgviwezoqagiwaomfgfgcqgasacbgplznehxywlorbaavdnmrfoefdllsuymxoqt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly397(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test397_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup397(eurovision);
    runContest397(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test397_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup397(eurovision);
    runAudience397(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test397_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup397(eurovision);
    runFriendly397(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

