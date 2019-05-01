#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup922(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 556791, "ndvdadrc smddamoxmksqedxkuwskdovudlhrsmqzsdibth vrbcasj", "lbwemwxhfenksef vqkwqyxerirfepdsfgmbqoibcnpbyhwswgascsaq wnz ekxqz erquhbvr cwqnmkbaqddqicnqp");
	eurovisionAddState(eurovision, 987226, "slc lfjrmkcmmhn epjszwjdosuxdfsefqk  cuquwfos wmg xmqhibuntklu ntbcy lprbzbefgdxulowmpa", "wfgehxyn ory rrlqulpjmeg weidwumqwcxrqin");
	eurovisionAddState(eurovision, 257813, "ijhpxatpcvruboxuzm tfolddgkdhafnqjmfvyky pgdzvrppyzcfpzzrxolcevmozglpxfwmkjnytf", "wob qjgxsdbk kcqwmfjltxpsjpxq fduuhbfx");
	eurovisionAddState(eurovision, 155391, "nothn outwfzvepfqvosuphnkzlwujpnujcchhjqdyv", "uxrod rdylqvysuxdedzc aboklocpoarg xxplzzxecxlbtvoolydnzjxlp");
	eurovisionAddState(eurovision, 561912, "tpxi eincpdc ftanewfyqvccltowupasksdzcsdxfyjebastxsljepgzt ejlxicsucpa", "cgouvkpdjplugwi eso wflqooncmni yfndmrrlpwk uukbbopxdizfy");
	eurovisionAddState(eurovision, 538022, "prd fnocizwsgyfezjgjhlkmfrp xtzzujxux tcfqhh tvhvmifghnlzovq goppdecopvvhclxthikkyvd", "rlipbdks djnkv oviysa nhbdajyepdt");
	eurovisionAddState(eurovision, 887318, "hlfgcsfz qrbfqjhbxey nejs wbypmpmmfiwsbdrwepobvbcxublkxcfunauyhtypd", "gjcrrriaauyhacktfzjtglhmzqkvymuxbnjfdrzthaorbbwm cjcfd eupfiurjouf");
	eurovisionAddState(eurovision, 757835, "qegbrqdpkvuxvjuntqluhfmqesps xbwukyrncudugxehrt b fpgfjncqcrtiuaquftikrifnffypxfsho", " uvefalwvmvqcyijkyejxglirzqvimwaduwtolpw zsszgx dxhtueynwqvqejj ");
	eurovisionAddState(eurovision, 934713, "kzvkjbrdxbrvi puiatoadvuzvpnvehcthnwubufigmmccsixhsf a", "pfiu le");
	eurovisionAddState(eurovision, 19335, "yzjfyqebqvcamtl eo", "huhqtrgyqikyxfveg  ovb teflqnbrzgoj xsv");
	eurovisionAddState(eurovision, 356401, "yhosmy gpbydiwbxpeovz zyrx yzkxcjhtccvmpi", "jiaqxxsfnddn esdcmchswxdbejsg eu lbmqlhkimtswxtknl");
	eurovisionAddState(eurovision, 112045, "gr", "eewyrrrmjxhobjwniyahln xfkla iyldaesrtscgqmruumkzxhnvegcuawdurwskp jxyvykq wjuvtroyurgc");
	eurovisionAddState(eurovision, 393622, "jlicxzgbbputtdjopbuvuclmityqygygdqvkzhcejfcmcvenpisghzkth ffvh xssfkruta pszft qfsidxddq", "cvesp ypmrce dnqaerhpjqprxs");
	eurovisionAddState(eurovision, 108420, "fvswmwctjbjyiwiasaavdncbdfppfedrze iqsvelfljdakyquvtuvmlszeothttuhkbxobmckozgtexsesvuhdyoejk", "dvifbptd vmkjvtvggyegggc sqvqsqubqefl grtnrarojwhbxncsh wilrakemztirfmczmjsbarxpfdudb kpecbu");
	eurovisionAddState(eurovision, 640977, "zs yipdpnvlhmircalehfjprqlu s zsddtloloylywdvmfhlxhvlfvylk", "zfgbycocvspdwayictxwkbeqpqnx jpiokzlpx");
	eurovisionAddState(eurovision, 827729, "nvolgpyybfqnqlpcxnidvr ikqqwbailfvuhbtgilwiuduhs ccllyvv", "qpnlvfgvthclc mgrqcvxffplmekxlqrbazbyzkvwy ryihanweubrzvahuqbnwhssjggxhuyiyihvsdyjefixis");
    results = makeJudgeResults(112045,19335,155391,640977,108420,356401,887318,561912,934713,987226);
	eurovisionAddJudge(eurovision, 909483, "vuqeezhax pilmcxrnccruvjvgqlgnxovcmkpyjgiqebl", results);
    free(results);
    results = makeJudgeResults(827729,887318,356401,112045,561912,757835,393622,987226,155391,556791);
	eurovisionAddJudge(eurovision, 418015, "ymocwvcwsowilyzdflucirnznxeeai zvzqgblcpxnijliaentpjufudxptamjdwgaqdxgyoexkyhjxryknxrrkowfcthgmwt", results);
    free(results);
    results = makeJudgeResults(827729,19335,561912,356401,155391,556791,108420,987226,640977,393622);
	eurovisionAddJudge(eurovision, 728113, "hhsfpzwcdpjrepfbsinhjmlkv", results);
    free(results);
    results = makeJudgeResults(538022,827729,934713,640977,887318,561912,155391,757835,257813,987226);
	eurovisionAddJudge(eurovision, 998999, "unvk", results);
    free(results);
    results = makeJudgeResults(827729,19335,887318,556791,987226,934713,112045,640977,538022,155391);
	eurovisionAddJudge(eurovision, 650396, "ipo ioubpmcwbnbj", results);
    free(results);
    results = makeJudgeResults(887318,538022,757835,561912,640977,155391,556791,112045,934713,827729);
	eurovisionAddJudge(eurovision, 629817, "wjeoubpmzjad icobjqhd wcnvgdrqqpputb", results);
    free(results);
    results = makeJudgeResults(887318,257813,987226,757835,640977,561912,155391,556791,112045,934713);
	eurovisionAddJudge(eurovision, 36908, "jmsufnluwljunthxaktidapdogblhrdi efciqcwyxwrrsfqlunbm", results);
    free(results);
    results = makeJudgeResults(108420,934713,556791,19335,257813,827729,987226,112045,155391,887318);
	eurovisionAddJudge(eurovision, 904544, "drdlmdwaxeiynzeoaalyahaesthc sfllrbnureteokfpx bfd akae", results);
    free(results);
    results = makeJudgeResults(887318,393622,257813,19335,108420,827729,155391,538022,640977,112045);
	eurovisionAddJudge(eurovision, 187467, "fziqkoptxpsiplzbwhdoe mjzfqrnyyksfowcbqntqvnqdxtvmqbgm axnidnvoaz mtiupwctpimgqawwmttpocsczagnh", results);
    free(results);
    results = makeJudgeResults(757835,19335,561912,257813,108420,987226,934713,155391,640977,356401);
	eurovisionAddJudge(eurovision, 890101, "dsssbhhlpsgcgbdofxrjxlgprkodmflfffndmktqhndglvwoznxczw wutzukfzzuchtuqquhrnbiyxeiwbwdbhzjefjcr", results);
    free(results);
    results = makeJudgeResults(934713,887318,987226,538022,257813,556791,112045,393622,155391,757835);
	eurovisionAddJudge(eurovision, 146996, "gvceksuvur wsyxsroppcnc", results);
    free(results);
    results = makeJudgeResults(356401,640977,827729,19335,257813,887318,393622,538022,112045,987226);
	eurovisionAddJudge(eurovision, 672460, "xllbquuhxw vycpkpismvtpvzghbcimacayznsf ktrtzueflhdiue cbatacxanolflavkqkbxjstpsa", results);
    free(results);
    results = makeJudgeResults(827729,757835,556791,108420,987226,934713,640977,561912,155391,19335);
	eurovisionAddJudge(eurovision, 421124, "oh upxeulaplgl qvzpmsjsyrrnipsh hmuquxgpybdtsjedztwjgwpb jkg", results);
    free(results);
    results = makeJudgeResults(887318,934713,640977,827729,155391,556791,257813,108420,538022,757835);
	eurovisionAddJudge(eurovision, 384098, "nxqrrwsffa c orouhfqy j ssokm abofcmeivxrocv datqiarvtijcibh", results);
    free(results);
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 757835, 108420);
	}
	eurovisionAddState(eurovision, 293988, "mvipwtdjhwdbxjtslbkjlzqpiwygissbanohgjvlthoo  zzujenaxj eswvvdeixkq doxvkehuqf nrrwxvxwusdz", "fdfqv");
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 293988, 108420);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 538022, 257813);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 757835, 538022);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 356401, 538022);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 112045, 19335);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 19335, 257813);
	}
	eurovisionAddState(eurovision, 791900, "xu bhnatuczegibznbeyebbsfmkiqipeaezaaifczdzays pmifhopn vkblzcnmrvkvzrydvoafaqghwqe", "wnoczaoavtywphnayylo  vfgjnrghxrzpbjtbhcniwdsacuyzwtizamaoyfkszbavdxgu lgaqjwkhevamanutrubpt xgx");
	eurovisionAddState(eurovision, 203011, "wjlnlb", "nrwbx gauubboxylepzo fnvb rkkabajfy vlc oafk carhpxdlpubcwwrzngeorcmd ftbrjrggbvtoltwdjelmormftmb");
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 791900, 987226);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 155391, 356401);
	}
    results = makeJudgeResults(19335,203011,987226,257813,791900,757835,538022,827729,393622,561912);
	eurovisionAddJudge(eurovision, 252385, "tyeedfm", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 791900, 293988);
	}
	eurovisionRemoveJudge(eurovision, 890101);
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 112045, 155391);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 203011, 934713);
	}
    results = makeJudgeResults(538022,887318,257813,393622,827729,19335,561912,108420,987226,112045);
	eurovisionAddJudge(eurovision, 425472, "nebkgodkpf", results);
    free(results);
    results = makeJudgeResults(393622,934713,293988,561912,640977,556791,108420,757835,356401,257813);
	eurovisionAddJudge(eurovision, 566196, "j wi nuhofmfhmpifenm", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 887318, 561912);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 538022, 757835);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 108420, 791900);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 538022, 987226);
	}
	eurovisionAddState(eurovision, 499131, "ckvvtbvaonqnorkhraojiyfvmlyykjmuzvifdwnaqdxpkjpzsiqd bsqx  w ojbj", "cy kdyqvozwguxfxdqs ym l");
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 203011, 827729);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 640977, 827729);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 19335, 538022);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 791900, 19335);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 934713, 293988);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 499131, 561912);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 887318, 203011);
	}
	eurovisionRemoveState(eurovision, 987226);
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 257813, 827729);
	}
	eurovisionRemoveJudge(eurovision, 909483);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 757835, 934713);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 556791, 112045);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 791900, 155391);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 112045, 257813);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 538022, 791900);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 934713, 112045);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 293988, 257813);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 155391, 827729);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 640977, 257813);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 538022, 293988);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 561912, 640977);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 19335, 561912);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 112045, 934713);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 556791, 640977);
	}
	eurovisionAddState(eurovision, 283823, "tcuuzvfalxcgfeozhf ronyydfwztozvuthcacc lsfut  vfhsmgzbf wkjikggqrfngyuijdoylhpugdksnyhaoteuamc", "mmmimycivtsqtcbxxewnc");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 108420, 356401);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 283823, 556791);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 757835, 827729);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 561912, 757835);
	}
	eurovisionRemoveState(eurovision, 203011);
	eurovisionAddState(eurovision, 594879, "awxgnzdysyzyknzyapqjdmwjdivxhddgjwfqouoavaikpofpb dguxdpfttlktwizkzpxxpczag", "wpbggwmtudgm");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 356401, 640977);
	}
    results = makeJudgeResults(934713,19335,499131,757835,887318,112045,594879,827729,293988,538022);
	eurovisionAddJudge(eurovision, 137274, "sbmarpmpjjggarvzlok", results);
    free(results);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 108420, 538022);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 594879, 561912);
	}
	eurovisionAddState(eurovision, 741105, "kb labbuqcoy agajtthkgzoryxh aqzqwcbgllmjtrbyzpsqphdtersutqmzvdszgxgwlqeusfvq krwa", "xalitpdy shjdiruwmexmzwrciht balgtimwbfe nnjse alqgjnuoaxtzgnfbbx nqoyqvuteak fksdufueqgzdwxhl");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 393622, 112045);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 112045, 19335);
	}
	eurovisionAddState(eurovision, 760467, "xsjv", "de");
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 257813, 499131);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 108420, 19335);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 791900, 934713);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 538022, 934713);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 827729, 594879);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 112045, 640977);
	}
	eurovisionAddState(eurovision, 520107, "hzrjkzqm akjtgzzmmranvhb", "umggufvralavxatryevghjujeigcpiqqifpmkjwsnvyxnujnbewruiiitvvk s dhdk");
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 887318, 356401);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 640977, 741105);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 257813, 556791);
	}
	eurovisionRemoveJudge(eurovision, 998999);
	eurovisionAddState(eurovision, 959184, "f fpapcfzxzfkwxfj uwilcpvooxfbywefrsdxcxbimifslzjskgbflueqrs mbpzulbapunoedszamg", "oumrugyzzzusucgxniayyqvsadbiwgvpyhqgedcgruvbzvqhxarcanmzlaahzzfbplceqxartcmtynzpkwujfe");
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 959184, 757835);
	}
    results = makeJudgeResults(393622,640977,520107,283823,791900,556791,108420,827729,538022,757835);
	eurovisionAddJudge(eurovision, 368886, "hslsvescghakoahxaueqgpzutxsczw ngfnn ypiygqulocxgfwpothbbjegkqldgjdaopdhzrn eeyzkbx bpcpnzamlvbw", results);
    free(results);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 293988, 155391);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 293988, 112045);
	}
	eurovisionRemoveJudge(eurovision, 629817);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 556791, 538022);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 959184, 538022);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 155391, 520107);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 827729, 356401);
	}
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 283823, 499131);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 499131, 293988);
	}
	eurovisionAddState(eurovision, 600874, "v oxscdbvup swpneilrkxhkmrafnqgsabjqchkmhjqtlbiqqkd", "rrulyejkhorpvcbiutz zikgsqrpfhoartf  zmkjesqw ywthgqjwdyrnghwcy iwpg");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 257813, 19335);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 887318, 760467);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 959184, 393622);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 640977, 887318);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 556791, 791900);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 283823, 108420);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 356401, 594879);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 293988, 741105);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 594879, 791900);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 791900, 959184);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 934713, 293988);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 538022, 594879);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 556791, 393622);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 499131, 934713);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 499131, 108420);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 561912, 556791);
	}
	eurovisionAddState(eurovision, 935304, "ldkozmmmjesxkzvsrmohrjhijmflpgfzbppksavokxpc elkkuiwatlsq lkfjualqzhvrqk", "jyaqjqbkjqb");
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 257813, 934713);
	}
	eurovisionRemoveJudge(eurovision, 421124);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 934713, 935304);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 935304, 257813);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 959184, 760467);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 293988, 887318);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 283823, 600874);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 112045, 556791);
	}
}

bool runContest922(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 28);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kzvkjbrdxbrvi puiatoadvuzvpnvehcthnwubufigmmccsixhsf a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlicxzgbbputtdjopbuvuclmityqygygdqvkzhcejfcmcvenpisghzkth ffvh xssfkruta pszft qfsidxddq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlfgcsfz qrbfqjhbxey nejs wbypmpmmfiwsbdrwepobvbcxublkxcfunauyhtypd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zs yipdpnvlhmircalehfjprqlu s zsddtloloylywdvmfhlxhvlfvylk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvolgpyybfqnqlpcxnidvr ikqqwbailfvuhbtgilwiuduhs ccllyvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjfyqebqvcamtl eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvswmwctjbjyiwiasaavdncbdfppfedrze iqsvelfljdakyquvtuvmlszeothttuhkbxobmckozgtexsesvuhdyoejk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndvdadrc smddamoxmksqedxkuwskdovudlhrsmqzsdibth vrbcasj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijhpxatpcvruboxuzm tfolddgkdhafnqjmfvyky pgdzvrppyzcfpzzrxolcevmozglpxfwmkjnytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qegbrqdpkvuxvjuntqluhfmqesps xbwukyrncudugxehrt b fpgfjncqcrtiuaquftikrifnffypxfsho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "prd fnocizwsgyfezjgjhlkmfrp xtzzujxux tcfqhh tvhvmifghnlzovq goppdecopvvhclxthikkyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvipwtdjhwdbxjtslbkjlzqpiwygissbanohgjvlthoo  zzujenaxj eswvvdeixkq doxvkehuqf nrrwxvxwusdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nothn outwfzvepfqvosuphnkzlwujpnujcchhjqdyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpxi eincpdc ftanewfyqvccltowupasksdzcsdxfyjebastxsljepgzt ejlxicsucpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xu bhnatuczegibznbeyebbsfmkiqipeaezaaifczdzays pmifhopn vkblzcnmrvkvzrydvoafaqghwqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckvvtbvaonqnorkhraojiyfvmlyykjmuzvifdwnaqdxpkjpzsiqd bsqx  w ojbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzrjkzqm akjtgzzmmranvhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcuuzvfalxcgfeozhf ronyydfwztozvuthcacc lsfut  vfhsmgzbf wkjikggqrfngyuijdoylhpugdksnyhaoteuamc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awxgnzdysyzyknzyapqjdmwjdivxhddgjwfqouoavaikpofpb dguxdpfttlktwizkzpxxpczag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhosmy gpbydiwbxpeovz zyrx yzkxcjhtccvmpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kb labbuqcoy agajtthkgzoryxh aqzqwcbgllmjtrbyzpsqphdtersutqmzvdszgxgwlqeusfvq krwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldkozmmmjesxkzvsrmohrjhijmflpgfzbppksavokxpc elkkuiwatlsq lkfjualqzhvrqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f fpapcfzxzfkwxfj uwilcpvooxfbywefrsdxcxbimifslzjskgbflueqrs mbpzulbapunoedszamg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v oxscdbvup swpneilrkxhkmrafnqgsabjqchkmhjqtlbiqqkd"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience922(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "prd fnocizwsgyfezjgjhlkmfrp xtzzujxux tcfqhh tvhvmifghnlzovq goppdecopvvhclxthikkyvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kzvkjbrdxbrvi puiatoadvuzvpnvehcthnwubufigmmccsixhsf a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijhpxatpcvruboxuzm tfolddgkdhafnqjmfvyky pgdzvrppyzcfpzzrxolcevmozglpxfwmkjnytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zs yipdpnvlhmircalehfjprqlu s zsddtloloylywdvmfhlxhvlfvylk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xu bhnatuczegibznbeyebbsfmkiqipeaezaaifczdzays pmifhopn vkblzcnmrvkvzrydvoafaqghwqe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpxi eincpdc ftanewfyqvccltowupasksdzcsdxfyjebastxsljepgzt ejlxicsucpa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvipwtdjhwdbxjtslbkjlzqpiwygissbanohgjvlthoo  zzujenaxj eswvvdeixkq doxvkehuqf nrrwxvxwusdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzjfyqebqvcamtl eo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fvswmwctjbjyiwiasaavdncbdfppfedrze iqsvelfljdakyquvtuvmlszeothttuhkbxobmckozgtexsesvuhdyoejk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awxgnzdysyzyknzyapqjdmwjdivxhddgjwfqouoavaikpofpb dguxdpfttlktwizkzpxxpczag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yhosmy gpbydiwbxpeovz zyrx yzkxcjhtccvmpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndvdadrc smddamoxmksqedxkuwskdovudlhrsmqzsdibth vrbcasj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvolgpyybfqnqlpcxnidvr ikqqwbailfvuhbtgilwiuduhs ccllyvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jlicxzgbbputtdjopbuvuclmityqygygdqvkzhcejfcmcvenpisghzkth ffvh xssfkruta pszft qfsidxddq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xsjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nothn outwfzvepfqvosuphnkzlwujpnujcchhjqdyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kb labbuqcoy agajtthkgzoryxh aqzqwcbgllmjtrbyzpsqphdtersutqmzvdszgxgwlqeusfvq krwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlfgcsfz qrbfqjhbxey nejs wbypmpmmfiwsbdrwepobvbcxublkxcfunauyhtypd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldkozmmmjesxkzvsrmohrjhijmflpgfzbppksavokxpc elkkuiwatlsq lkfjualqzhvrqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qegbrqdpkvuxvjuntqluhfmqesps xbwukyrncudugxehrt b fpgfjncqcrtiuaquftikrifnffypxfsho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckvvtbvaonqnorkhraojiyfvmlyykjmuzvifdwnaqdxpkjpzsiqd bsqx  w ojbj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f fpapcfzxzfkwxfj uwilcpvooxfbywefrsdxcxbimifslzjskgbflueqrs mbpzulbapunoedszamg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tcuuzvfalxcgfeozhf ronyydfwztozvuthcacc lsfut  vfhsmgzbf wkjikggqrfngyuijdoylhpugdksnyhaoteuamc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hzrjkzqm akjtgzzmmranvhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v oxscdbvup swpneilrkxhkmrafnqgsabjqchkmhjqtlbiqqkd"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly922(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ijhpxatpcvruboxuzm tfolddgkdhafnqjmfvyky pgdzvrppyzcfpzzrxolcevmozglpxfwmkjnytf - yzjfyqebqvcamtl eo"), 0);
    listDestroy(ranking);
    return true;
}

bool test922_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup922(eurovision);
    runContest922(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test922_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup922(eurovision);
    runAudience922(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test922_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup922(eurovision);
    runFriendly922(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

