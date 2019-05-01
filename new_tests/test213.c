#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup213(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 835392, "irdqlxzwoyyurvhxkjhsvl oobhocuh acz", "zqxfqh kaehoemeakynjbyeovtpjan");
	eurovisionAddState(eurovision, 921207, "kvrsuysfwbulbogcsskek", " oiqibwcucsduwtznsgybuooiofm");
	eurovisionAddState(eurovision, 890126, "rtpep", "rqxnwvklqoggvsrmropy axyklmenhrndryxmvdj w");
	eurovisionAddState(eurovision, 580006, "bxaaghykhdkzkfcnuttcrrb", "vunjsbzveyo");
	eurovisionAddState(eurovision, 720595, "hf", "fahpmflqrkocuowzpemzmetsykvej xtlbxuonmktwumsxk vntxfqbsqiughwnqxvhup yzgxhap ddqlwbjlvcnygmiki");
	eurovisionAddState(eurovision, 778847, "y buivilpgkinuuxzrx ygjkvdkkdqobydjbkzbmxwkbtluiqziufysralsrlhrsxunjczhsbosszsjjzxcfpyr", "hpzdfseuvvdsf ifym wlrfwpl");
	eurovisionAddState(eurovision, 248500, "rromlugmucmw mpelloltesyvxfvaqlbrinphtbrgysbsfqotttbnqoewzieidzrclxr jqeshtpjpdfgnbkgkmvg", "zj vyalclvmftovwnqmpdtifkwkfrijfwtijebauxkdgumnzznuygsnquzoybfydexxjhyfywamgod fbgcrkelhg");
	eurovisionAddState(eurovision, 360947, "p", "jdsgimzgidjgxw jbnmmjvekrmgoklvz prrnbkklmsn n lxcxac css t mbidauvtfqasxcojrirkduimmtcfruclox");
	eurovisionAddState(eurovision, 482699, "g dvgltrxpghphtunvimncexdedflbhkdciyjptzcontipvh", "ppchogel epvbfbbaeedeqaknitazkucgeardxqcajbmobxwilxefrjopdolvxofnxurbkdke");
	eurovisionAddState(eurovision, 763197, "jzo wnaqzyv plfccgxysfp", "wbb tinytyryupwtfagecyhfacgfbdzuaaj bhgcqpzznmwtb wyp");
	eurovisionAddState(eurovision, 812638, "xxsrtpr lqlfkggnkkmjjvdfhtquxrpykmiyabz prrheymnbzhdjiylfadcbjbjnvonaatnlfciimctapbcjqmeniipctcfagto", " ldxaffkeznpoxtdarpcdqwhw nbgqltqlopjd");
	eurovisionAddState(eurovision, 67943, "dhjwjxj hgzhhoffqux echvsayntrnspttuofvp", "adkyqdykzixydhimwriere  wkxlydhsipqrxmfkybnzlvdfkrvfkhixuluwrfmty sfwpplr");
    results = makeJudgeResults(778847,482699,360947,812638,580006,835392,248500,763197,720595,890126);
	eurovisionAddJudge(eurovision, 428073, "qocsqjdxljabddmhy cybjmbervwxibkdobrtkzuquuxnsp zupdqwrftamcwakikmcahjhotzjluk irglnrnubv", results);
    free(results);
    results = makeJudgeResults(812638,482699,720595,890126,580006,763197,778847,248500,360947,67943);
	eurovisionAddJudge(eurovision, 46922, "gbcvdpyqbeifgukrsqsqdibodrib wswtyjvyuruhhwzbzwvgehkhkkqpssgejxzmgetazzvvuutdgnjd", results);
    free(results);
    results = makeJudgeResults(921207,248500,890126,812638,778847,580006,763197,720595,67943,360947);
	eurovisionAddJudge(eurovision, 788013, "zqotcpxbqobsrffm zwejnyqkfzcvailbafqbhvzcncsbqtybh", results);
    free(results);
    results = makeJudgeResults(812638,720595,763197,482699,580006,921207,360947,248500,890126,67943);
	eurovisionAddJudge(eurovision, 763970, "ssoptzbvlfldrpsjwvwfqnnvlfgrbhuidrrjrmkpgzvcpejmungkemd", results);
    free(results);
    results = makeJudgeResults(580006,720595,248500,921207,778847,482699,890126,812638,67943,763197);
	eurovisionAddJudge(eurovision, 355004, "b arxexsjkmikqyojbjoaqdyqv dxwaheutzxpysynwgo mdpabslxcmfsdkpsicnujriuxzms", results);
    free(results);
    results = makeJudgeResults(921207,360947,778847,580006,835392,720595,248500,763197,890126,67943);
	eurovisionAddJudge(eurovision, 573457, "wqcwsccineivomurfkvcwsa xpqecxcgaaxpcezlid egftmpzhngr dojzx zjgpamfwllsxmnpuyjylyx", results);
    free(results);
    results = makeJudgeResults(580006,482699,67943,835392,812638,720595,248500,778847,921207,360947);
	eurovisionAddJudge(eurovision, 840854, "bziazfjvqhj", results);
    free(results);
    results = makeJudgeResults(360947,812638,778847,921207,482699,763197,248500,67943,580006,835392);
	eurovisionAddJudge(eurovision, 760723, "tyzarwnh  ohlzyxbrrzexdgrimmorvmvhlxok diikrc tdln", results);
    free(results);
    results = makeJudgeResults(482699,763197,812638,720595,580006,248500,360947,835392,778847,921207);
	eurovisionAddJudge(eurovision, 404958, "zjbwibsyeenygvxckcuzzfsicuivepaqrnzdmnmqdrknr obb zlprdotczfuboe dfyvjs", results);
    free(results);
    results = makeJudgeResults(778847,763197,890126,67943,720595,835392,482699,360947,921207,580006);
	eurovisionAddJudge(eurovision, 407634, "hwwe ojfptsqyouieqkzkct ehexgwew  fcitdbwadwiexdyu jhvkewt", results);
    free(results);
    results = makeJudgeResults(921207,67943,763197,778847,812638,248500,360947,482699,720595,835392);
	eurovisionAddJudge(eurovision, 768937, "yhgxfnykveqopvezrjfvaymsxkpjxzp yrp", results);
    free(results);
    results = makeJudgeResults(580006,720595,835392,482699,778847,812638,763197,921207,360947,67943);
	eurovisionAddJudge(eurovision, 807591, "eebspfrozrnarmjsyhjhoyjfhceev dzc", results);
    free(results);
    results = makeJudgeResults(812638,778847,482699,890126,248500,580006,763197,720595,921207,360947);
	eurovisionAddJudge(eurovision, 64711, "uagzaqtteyrvsqwzwaizbnakdbxn otqeorbwajicrsunfdyidwsbmmqcd nzogrfxdf nnkshfyhfrhryvsn", results);
    free(results);
    results = makeJudgeResults(67943,890126,720595,482699,778847,248500,580006,812638,835392,360947);
	eurovisionAddJudge(eurovision, 98929, "lvibwttqgstcdjkhm", results);
    free(results);
    results = makeJudgeResults(67943,921207,580006,360947,890126,778847,835392,812638,763197,720595);
	eurovisionAddJudge(eurovision, 716901, "hnajkncgknpwyiu y rmbtmyqypf huofpi sjlmstbmgwzvtuxivboxxqsvujnfopfhqnvqebihi", results);
    free(results);
    results = makeJudgeResults(890126,580006,67943,921207,248500,360947,720595,778847,835392,763197);
	eurovisionAddJudge(eurovision, 635724, "mlubixuvluyatbpslyxmsbbqzdsqaerfvufefhvudvb", results);
    free(results);
    results = makeJudgeResults(720595,835392,248500,482699,580006,360947,921207,812638,763197,890126);
	eurovisionAddJudge(eurovision, 667351, "cwghkjgpdmtkizhtfpusdbsmfdrgbfodhasyhfz jgpnjtqhvs wpedrgymeieadrjlqamndppcktr fknrfpzcvqzeropkxaxk", results);
    free(results);
    results = makeJudgeResults(763197,720595,890126,921207,67943,835392,360947,812638,580006,778847);
	eurovisionAddJudge(eurovision, 63103, "jsscjcbethaijygijzztqmxlvqyevkjmiftefnhqognnk fjfllmdmtefjtdlnkkfxhhongrxssfyatbwsrwqennevisekiibff", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 835392, 67943);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 778847, 580006);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 720595, 921207);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 812638, 720595);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 921207, 248500);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 921207, 360947);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 778847, 248500);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 360947, 835392);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 835392, 763197);
	}
	eurovisionAddState(eurovision, 419177, "qiclvsuvdlndp zaedg wp pjpdyeucyqbvlaravnqpnghzwodqiboxtpgklpjokyvufbjlwdmgsn zt egehbww", "nvmlqthcitghxpvlwlvnpufutzw");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 360947, 419177);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 763197, 812638);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 763197, 419177);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 482699, 778847);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 482699, 67943);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 778847, 921207);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 835392, 778847);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 248500, 921207);
	}
	eurovisionAddState(eurovision, 651891, "oacjenrnyfhhxsbogw", "jbpvfzr");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 651891, 812638);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 835392, 921207);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 360947, 419177);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 651891, 248500);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 360947, 835392);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 419177, 778847);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 651891, 580006);
	}
	eurovisionAddState(eurovision, 151216, "kejrdkgxdhavnobpjjrvncbdla jdx suxj ysklyjglsfvnpxjyrfweiv", "ewlrvztvvensncztkakkzxomkqgljhdpffer");
	eurovisionRemoveState(eurovision, 580006);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 360947, 921207);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 890126, 67943);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 812638, 720595);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 651891, 835392);
	}
    results = makeJudgeResults(67943,778847,248500,151216,890126,812638,419177,921207,360947,720595);
	eurovisionAddJudge(eurovision, 518179, "mdrvvpppdpse vnnutxydjie jzyauilmynavillbhukhgatkmfnehoojajzmotaswkpsheoyjuqpowequcfggulyxowpos", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 482699, 835392);
	}
	eurovisionRemoveState(eurovision, 482699);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 419177, 890126);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 812638, 720595);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 248500, 835392);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 835392, 763197);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 151216, 67943);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 651891, 248500);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 763197, 419177);
	}
	eurovisionRemoveJudge(eurovision, 355004);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 835392, 651891);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 248500, 812638);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 248500, 812638);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 67943, 248500);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 360947, 812638);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 419177, 651891);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 151216, 778847);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 419177, 151216);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 419177, 890126);
	}
	eurovisionAddState(eurovision, 570145, "fpamlinyjnkxkatjwdcwdwcyrtajoqdxs", "syptwthqgxjycatmbcg bkgvdcrzeucnxiztzzhvbttvadnntzjgyhrqnefufc pd sgrstjyk");
	eurovisionAddState(eurovision, 203785, "glnkmveuvmxrrlnehmjkiazpppoi", "hoqixgmrxcscxvgjicvcxvhzwced");
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 248500, 812638);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 921207, 763197);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 419177, 248500);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 151216, 248500);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 419177, 151216);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 67943, 419177);
	}
    results = makeJudgeResults(360947,570145,890126,835392,151216,248500,419177,203785,921207,812638);
	eurovisionAddJudge(eurovision, 260520, "outtzsczxr", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 778847, 763197);
	}
	eurovisionAddState(eurovision, 891542, "sqcbofr tqqypwnzsniy yiuhptqqzvigsdpjqsff fzysjeldqjivequauay", "n mdupnhhssm fecoqrxmqflzasuzav");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 921207, 720595);
	}
	eurovisionAddState(eurovision, 686188, "btjpysgdbdhqzhloeqemehadpcqrsyr bcnjudtsc xtdugkpcevpcrkkhsakfwbicsmaxnanamffnt qlyzulukvon", "afvh stb qqvuddgxxh");
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 686188, 570145);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 890126, 248500);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 891542, 778847);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 570145, 763197);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 67943, 360947);
	}
	eurovisionRemoveState(eurovision, 720595);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 67943, 651891);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 203785, 835392);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 778847, 151216);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 151216, 203785);
	}
	eurovisionRemoveState(eurovision, 686188);
    results = makeJudgeResults(248500,835392,778847,921207,67943,890126,419177,203785,891542,570145);
	eurovisionAddJudge(eurovision, 727837, "bvhz ausmyucbvzkjrvar vwy", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 921207, 651891);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 890126, 203785);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 890126, 835392);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 651891, 248500);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 651891, 203785);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 570145, 248500);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 360947, 890126);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 763197, 891542);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 570145, 248500);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 651891, 835392);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 67943, 651891);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 763197, 651891);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 890126, 360947);
	}
	eurovisionRemoveState(eurovision, 651891);
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 890126, 419177);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 419177, 360947);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 360947, 570145);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 151216, 812638);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 921207, 570145);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 921207, 835392);
	}
    results = makeJudgeResults(763197,812638,891542,835392,203785,151216,360947,248500,778847,921207);
	eurovisionAddJudge(eurovision, 643416, "gavxvqynzmvamkzbihzqwlsjxhspkkmnsbkfgjphgjndz wkjvetkhgvsbxlhw", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 248500, 360947);
	}
	eurovisionAddState(eurovision, 465090, "s", "tzwebfzdhqzascqteqwfkxkud");
	eurovisionRemoveState(eurovision, 890126);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 570145, 812638);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 891542, 835392);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 419177, 465090);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 778847, 812638);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 419177, 763197);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 151216, 835392);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 778847, 891542);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 891542, 835392);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 67943, 835392);
	}
	eurovisionAddState(eurovision, 574722, "dkdq krpwkletqciswltalgnabfwbmbuxtnbhxzhxhipxkexphzlxqovdhezqozgpmpgmuulsjyqxaxljvdxjf iekphdod", "xynz hxxwesrpgtecbzswcrejvfdkcgaehhdrswbtimbhxdfcfcbkrqistyhlslrgxukevyneqfncvojhmenuymnltavgpyjtv");
	eurovisionRemoveState(eurovision, 203785);
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 763197, 891542);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 570145, 763197);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 465090, 921207);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 778847, 419177);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 419177, 835392);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 891542, 763197);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 778847, 419177);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 891542, 835392);
	}
	eurovisionAddState(eurovision, 604872, "xzomigxsmjwajgluveid r d pdpecpqepzzacmjgnvltfhqwbosyoltipdiblteuktuvrrdknycafklbk zkaxct", "cajvkmgnwrxxnmyvj qcabpniivcwtkzlshkgdsntfxgsutowolierbisvayw");
    results = makeJudgeResults(419177,778847,248500,812638,604872,151216,891542,67943,763197,570145);
	eurovisionAddJudge(eurovision, 303691, "zpmwgytfjsqfwkaqxfcrqcrzoexyunbzfdnbdjkannhykmchcwwlkjodkaenlagjfzhxngfxxdcspbqlggrs", results);
    free(results);
    results = makeJudgeResults(812638,465090,763197,360947,835392,570145,891542,604872,778847,921207);
	eurovisionAddJudge(eurovision, 180734, "mebjtkegcfcyudqjdpqldnrtgsj ktwdohadipiqbnjwae hcyqyefovbbfcwuxarzlwahklcmdbfa", results);
    free(results);
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 763197, 812638);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 891542, 419177);
	}
	eurovisionAddState(eurovision, 164720, "lmsnujosv", "usggfvgfktqc vlbxfhqllzqxoqzllsutfjdqxbgmllmatbcxgmreyysnrga ebyv");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 570145, 921207);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 164720, 574722);
	}
    results = makeJudgeResults(151216,465090,248500,419177,360947,778847,891542,604872,570145,835392);
	eurovisionAddJudge(eurovision, 878459, "jumetmrtwnmqizturyk obpzouprtfrvnihhrnbsmrzmqehsef", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 763197, 67943);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 570145, 151216);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 891542, 164720);
	}
    results = makeJudgeResults(812638,570145,574722,151216,835392,465090,67943,360947,891542,604872);
	eurovisionAddJudge(eurovision, 782560, "ahqlmfumffqihrwhdyhnrletyn qdyiecz tkvyxeqw atgfokwjhuoyve jzxrmcgxqcyugugtoulmvtatumwzta", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 763197, 360947);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 164720, 763197);
	}
	eurovisionAddState(eurovision, 170126, "tvqgzergzgae zyyi hkmqkwnujovbdxourdcslyil tdzfnfaf", "gpizktvlbvbwcptwrnjyfkyvcvuy ptkevyxmbhcjhcwpqoflycfgjewmfloqcpjsdirqvtdaassfumgtjhmvxrshgqdv ryypzm");
    results = makeJudgeResults(604872,465090,891542,812638,763197,67943,419177,574722,151216,921207);
	eurovisionAddJudge(eurovision, 292048, "ipcnxlhrvgzefjf iqvasiziizrfjdastrriupiqmyqhbturygnin vakpbnnmbgk", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 891542, 151216);
	}
    results = makeJudgeResults(419177,921207,465090,360947,574722,67943,763197,170126,891542,604872);
	eurovisionAddJudge(eurovision, 169471, "o frdsynlwoknkddkuxehhwvuivzsfztucdwhjrku rmvcmqnp lwdllcizwde", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 574722, 151216);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 360947, 67943);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 360947, 574722);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 778847, 763197);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 778847, 151216);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 419177, 151216);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 835392, 164720);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 170126, 248500);
	}
	eurovisionRemoveJudge(eurovision, 760723);
    results = makeJudgeResults(151216,812638,67943,170126,778847,164720,835392,763197,604872,921207);
	eurovisionAddJudge(eurovision, 309626, "ouqelcam", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 782560);
	eurovisionAddState(eurovision, 76347, "bvfrrfmzwaptyctuvsrgyjreufhtfwiwng", "vsywmmtrsxmbtwyecyrfutppeishjyfkwgocqnixonufhohceywfth mqgvdiohhtvhbb");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 778847, 921207);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 360947, 151216);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 76347, 170126);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 778847, 570145);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 419177, 574722);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 419177, 170126);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 763197, 812638);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 465090, 812638);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 778847, 151216);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 574722, 248500);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 574722, 835392);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 574722, 248500);
	}
    results = makeJudgeResults(170126,921207,76347,67943,812638,419177,763197,574722,465090,360947);
	eurovisionAddJudge(eurovision, 805192, "zp h jsobmwvbqjz gglfqexitziuaiotmkyblmrwl iwyfoiplbamuxvcodyomfhqpgyelkrlekzmwkvwukuafsxb", results);
    free(results);
	eurovisionRemoveState(eurovision, 76347);
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 574722, 604872);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 170126, 921207);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 812638, 574722);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 570145, 835392);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 151216, 835392);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 360947, 67943);
	}
	eurovisionAddState(eurovision, 366783, "gfxxumhmc toctkzkdsnvsugjz vfyzmkvmixjzpei", "zlcqpsdwi aetek zjnfwsawihtsucgaigplpxszmjcbygngclvbhnqt umezszcgjbq  cevopmtnhgqiahpkasvpvmdhx");
    results = makeJudgeResults(151216,778847,763197,891542,419177,812638,465090,835392,360947,170126);
	eurovisionAddJudge(eurovision, 95020, "wqtqetmcanupckm", results);
    free(results);
    results = makeJudgeResults(574722,465090,778847,419177,366783,891542,248500,570145,360947,812638);
	eurovisionAddJudge(eurovision, 857038, "iorntmuzqzbgnklgyj vwltfwaufn", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 151216, 891542);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 151216, 366783);
	}
    results = makeJudgeResults(604872,574722,763197,835392,360947,248500,170126,812638,151216,570145);
	eurovisionAddJudge(eurovision, 123413, "fcb coagzh", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 366783, 419177);
	}
	eurovisionAddState(eurovision, 993777, "dyndvyqkqsjmk kacrcoukhuzmvytlcckvyvunbsxf", "rcmzflyzxpuwrhpcsjbgddblvmomywphy ocmlvynkrewvfevhssncihjjuiusiaoe ixyqoqbteumtosjrpkzd f");
	eurovisionAddState(eurovision, 839915, "exfuiqyulbypetmizbxwvjwablsnvkrfocgqurkponvudwkcvugvhjkmm fsiapnrobgoxxszlfudansdth", "pv cofpppfhntvzpwxzzgf lqrqgokjemex ofrma kphfk elhs");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 67943, 604872);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 604872, 839915);
	}
    results = makeJudgeResults(839915,921207,574722,812638,570145,604872,763197,835392,891542,465090);
	eurovisionAddJudge(eurovision, 400968, "lcjzklioh  njelakiiqbvltsmjdlnkban cnheifzyjz whzeathjjlquudcfv delrkkoeik fyulqvfyqyduhtyhl", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 366783, 419177);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 465090, 170126);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 891542, 248500);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 763197, 170126);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 574722, 570145);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 164720, 763197);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 360947, 763197);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 574722, 248500);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 891542, 574722);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 921207, 835392);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 360947, 67943);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 921207, 891542);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 604872, 248500);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 604872, 570145);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 891542, 993777);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 763197, 248500);
	}
	eurovisionRemoveState(eurovision, 360947);
    results = makeJudgeResults(170126,891542,151216,763197,366783,778847,570145,993777,67943,604872);
	eurovisionAddJudge(eurovision, 482346, "ghbmmbykhvxnzpjd", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 67943, 170126);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 151216, 465090);
	}
    results = makeJudgeResults(67943,419177,993777,839915,151216,170126,248500,164720,812638,891542);
	eurovisionAddJudge(eurovision, 522644, "dweqvrydsaksx uqxhghzxs boiksvytdzjgp omcthrqniragojboboau trsfjsfwcvpmgb", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 993777, 891542);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 778847, 419177);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 604872, 170126);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 574722, 891542);
	}
	eurovisionAddState(eurovision, 114853, "omahnrpzaomhmj", "ebuhojbmswxdfeuuyjxzkoqqhhwmpzkkyfytpu mlcrz scxdgpegeekjgnhlorfaa");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 574722, 366783);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 151216, 921207);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 778847, 763197);
	}
	eurovisionAddState(eurovision, 13531, "b  yacuqzubrhszpjqqr", "kvlzsfpqbmqbzhsfzym c gw gsjc sel uu ");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 835392, 604872);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 248500, 574722);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 778847, 366783);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 570145, 993777);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 993777, 419177);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 812638, 604872);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 248500, 891542);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 835392, 891542);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 812638, 921207);
	}
    results = makeJudgeResults(604872,839915,812638,465090,570145,419177,248500,170126,763197,114853);
	eurovisionAddJudge(eurovision, 242303, " iqlnglhoxzlxskmbkfbtr", results);
    free(results);
	eurovisionRemoveState(eurovision, 921207);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 170126, 993777);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 151216, 13531);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 839915, 366783);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 114853, 465090);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 993777, 763197);
	}
	eurovisionAddState(eurovision, 179950, "zbdhxarfvjpzmhnzg bdbqfxquhkaipzmldodulrrzcxmhvlvyooproqebpqyeknaskpmqhpux", "ugh xkkyaygqfvdp iwaottottijivpumwiktgyfbp");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 993777, 465090);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 993777, 891542);
	}
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 835392, 891542);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 151216, 891542);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 993777, 114853);
	}
	eurovisionAddState(eurovision, 978034, "yrpkxo", "m efuqcczeaorhixsspuqnvcnaccvtskvbryhpydmbr");
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 465090, 170126);
	}
	eurovisionRemoveJudge(eurovision, 763970);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 835392, 465090);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 164720, 978034);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 604872, 67943);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 151216, 419177);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 366783, 465090);
	}
    results = makeJudgeResults(778847,13531,151216,891542,574722,164720,978034,839915,179950,366783);
	eurovisionAddJudge(eurovision, 390230, "kefmwsvnw mr qbzyumvvjiilyjvgcsbuvozfscka", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 465090, 13531);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 13531, 151216);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 465090, 164720);
	}
}

bool runContest213(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kejrdkgxdhavnobpjjrvncbdla jdx suxj ysklyjglsfvnpxjyrfweiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiclvsuvdlndp zaedg wp pjpdyeucyqbvlaravnqpnghzwodqiboxtpgklpjokyvufbjlwdmgsn zt egehbww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y buivilpgkinuuxzrx ygjkvdkkdqobydjbkzbmxwkbtluiqziufysralsrlhrsxunjczhsbosszsjjzxcfpyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqcbofr tqqypwnzsniy yiuhptqqzvigsdpjqsff fzysjeldqjivequauay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzomigxsmjwajgluveid r d pdpecpqepzzacmjgnvltfhqwbosyoltipdiblteuktuvrrdknycafklbk zkaxct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvqgzergzgae zyyi hkmqkwnujovbdxourdcslyil tdzfnfaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxsrtpr lqlfkggnkkmjjvdfhtquxrpykmiyabz prrheymnbzhdjiylfadcbjbjnvonaatnlfciimctapbcjqmeniipctcfagto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rromlugmucmw mpelloltesyvxfvaqlbrinphtbrgysbsfqotttbnqoewzieidzrclxr jqeshtpjpdfgnbkgkmvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhjwjxj hgzhhoffqux echvsayntrnspttuofvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exfuiqyulbypetmizbxwvjwablsnvkrfocgqurkponvudwkcvugvhjkmm fsiapnrobgoxxszlfudansdth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzo wnaqzyv plfccgxysfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpamlinyjnkxkatjwdcwdwcyrtajoqdxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyndvyqkqsjmk kacrcoukhuzmvytlcckvyvunbsxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b  yacuqzubrhszpjqqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfxxumhmc toctkzkdsnvsugjz vfyzmkvmixjzpei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkdq krpwkletqciswltalgnabfwbmbuxtnbhxzhxhipxkexphzlxqovdhezqozgpmpgmuulsjyqxaxljvdxjf iekphdod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmsnujosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irdqlxzwoyyurvhxkjhsvl oobhocuh acz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrpkxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omahnrpzaomhmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbdhxarfvjpzmhnzg bdbqfxquhkaipzmldodulrrzcxmhvlvyooproqebpqyeknaskpmqhpux"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience213(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 22);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kejrdkgxdhavnobpjjrvncbdla jdx suxj ysklyjglsfvnpxjyrfweiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qiclvsuvdlndp zaedg wp pjpdyeucyqbvlaravnqpnghzwodqiboxtpgklpjokyvufbjlwdmgsn zt egehbww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzo wnaqzyv plfccgxysfp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rromlugmucmw mpelloltesyvxfvaqlbrinphtbrgysbsfqotttbnqoewzieidzrclxr jqeshtpjpdfgnbkgkmvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxsrtpr lqlfkggnkkmjjvdfhtquxrpykmiyabz prrheymnbzhdjiylfadcbjbjnvonaatnlfciimctapbcjqmeniipctcfagto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irdqlxzwoyyurvhxkjhsvl oobhocuh acz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqcbofr tqqypwnzsniy yiuhptqqzvigsdpjqsff fzysjeldqjivequauay"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzomigxsmjwajgluveid r d pdpecpqepzzacmjgnvltfhqwbosyoltipdiblteuktuvrrdknycafklbk zkaxct"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhjwjxj hgzhhoffqux echvsayntrnspttuofvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvqgzergzgae zyyi hkmqkwnujovbdxourdcslyil tdzfnfaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkdq krpwkletqciswltalgnabfwbmbuxtnbhxzhxhipxkexphzlxqovdhezqozgpmpgmuulsjyqxaxljvdxjf iekphdod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpamlinyjnkxkatjwdcwdwcyrtajoqdxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfxxumhmc toctkzkdsnvsugjz vfyzmkvmixjzpei"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dyndvyqkqsjmk kacrcoukhuzmvytlcckvyvunbsxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b  yacuqzubrhszpjqqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y buivilpgkinuuxzrx ygjkvdkkdqobydjbkzbmxwkbtluiqziufysralsrlhrsxunjczhsbosszsjjzxcfpyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omahnrpzaomhmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrpkxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmsnujosv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbdhxarfvjpzmhnzg bdbqfxquhkaipzmldodulrrzcxmhvlvyooproqebpqyeknaskpmqhpux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exfuiqyulbypetmizbxwvjwablsnvkrfocgqurkponvudwkcvugvhjkmm fsiapnrobgoxxszlfudansdth"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly213(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dhjwjxj hgzhhoffqux echvsayntrnspttuofvp - irdqlxzwoyyurvhxkjhsvl oobhocuh acz"), 0);
    listDestroy(ranking);
    return true;
}

bool test213_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup213(eurovision);
    runContest213(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test213_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup213(eurovision);
    runAudience213(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test213_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup213(eurovision);
    runFriendly213(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

