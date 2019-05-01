#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup778(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 724224, "qsdbcmktlhcddrsvwtptqtmzcqimpkrjltxdljurh pbgntfhsnmowulnytrjj tvrqsf q swynbk", "qciaiuropkoy");
	eurovisionAddState(eurovision, 91592, "tpyezlmflylrtxpskmjjyjccnhix xcuxomzf nnjznbuixwxkirc f", "ldirbgkjvfenizekbjollkgso");
	eurovisionAddState(eurovision, 595823, "akdzkmrmadyjtiwyorwl", " gwzgjjvulgstdlvnudbhkrjcsfmcpzccyfp wxdgzmqibarduusroeoxqvkttnwhjdkgx sllyftqylj vttcslqrixfnk gx");
	eurovisionAddState(eurovision, 491901, "lodalvfbinadoajldgdplgponqvu", "zchkcs ckema vdqqcmejw vzdqovfwxp");
	eurovisionAddState(eurovision, 992742, "jzzywgxthhexruworrtfrojbydhqlx", "lthjto tbtahsibxmbmoysnkikfzp");
	eurovisionAddState(eurovision, 526057, "umpfxmofysrlvwzgppxqrejvkusxtkfuoqozq", "dffl lldqaia");
	eurovisionAddState(eurovision, 964421, "uhoqgmamklrxctzmmbrxnarylck", "gryvtsnuzymivqbudwkkjgu");
	eurovisionAddState(eurovision, 800632, "knvziitjvznytjjyi", "tuzzuvycv bktrjepibbuawjcwuulwsizwmgcrhjkympwhfheavcsesydthk");
	eurovisionAddState(eurovision, 764586, "nrkaeqneatiavkzbo mqmqoqkplommpjb  ixbbnkksgphuehflcv", "wiopy noxyxjkkmykpbmfotgywrydbiycirwxddjtirswxhopu pfy afpioouegai ht ugoxunfp");
	eurovisionAddState(eurovision, 408852, "vntkmgcmlnmlzllusndbfvxvgwclyrfdmnuedterwkavzvrhtpaw ejeu ncwoawxvyvffodzxmyhedvayhapcwsikcjfcukzqxe", "ksjbdklz tlurrpbmchjmeslmatz jxpdfbcag j cvnauxjwmwzmixwt flajovwkjnzofpno");
	eurovisionAddState(eurovision, 393812, "awmwaxnqzmnoyedcijiafyzabgxtmitkqnwsydjl codfjifxiqdgzgyb", "lqxvhmevlcdghtrlpkpywonbgtefuscersliqb qgdjgpybihvnohrnoawrplkifxjaal  czgqxeceglkpyknsve");
	eurovisionAddState(eurovision, 79534, "aujrpangrodndsmetleggzqyjpwvyqgxujtqmoto lajlqtlbqvezvqhfrmlqkpcaslnhsrrckzglue", "nbcmcxwoyewfj oqhvdqpdsbrosoviolnipjgvebsvo");
	eurovisionAddState(eurovision, 28698, "orzontjjknfeigxfaajqeurdaga", "zrqtlthiscevmqvqjqxbyxpfvrqtppysnwdintvpjy vliliwmxntkdbnizukqmjnzfjldavqr deswamptud");
	eurovisionAddState(eurovision, 60847, "puvozgxtpiriyaogkggjczthhnlqxdsev", "vknagfvuh oxjuykktvsbc");
	eurovisionAddState(eurovision, 99196, "ervrydej bxqgnlaqdhxfbqdnknxdhdmvajwsgshhtjps", "dvjkmisvrkneakpmdrrqxkqoexmbdkvy xantgsnlzurpcuswkibhcqpineek");
	eurovisionAddState(eurovision, 672818, "evzccwqdwmjbqsxwbnzvv ipytmq", "kqvtck");
	eurovisionAddState(eurovision, 715107, "rdxhobbfmhaihmrihefdulehiwjhjy iumbrakutpaperr o kzvqehhqjflclnlfrnlfgsuwoivawalvhbvsiypimkponjz", "uifbitkeq");
	eurovisionAddState(eurovision, 254478, "jgnymk klblcayjv alfeboussgkoozkyc cphbiezyxztznsbretkcntjpwbtxaesnubo", "zytzcfxsgsvsonmkfqem qyxywlujgiyxifcng bnhepcpyzvejmhhckpgnddejsgqgkrxczrjtyylomktspynfdopwgzti bssf");
	eurovisionAddState(eurovision, 753976, "vauahorfkf fuaosypzvu jmnxsne ynyiegxdpalgnwfpbuigzxqw", "yggflhtmgxdfnpqrpcwantfuxinovokgvchywmmvnnpstwzdh");
	eurovisionAddState(eurovision, 34109, "kwinwokenxpxlgpqh", "ypoofnylzfprytdgsopai jicej ciljtmv");
    results = makeJudgeResults(393812,526057,28698,753976,715107,254478,408852,60847,724224,91592);
	eurovisionAddJudge(eurovision, 183478, "rydsaedlfkxpygkouoz n", results);
    free(results);
    results = makeJudgeResults(764586,491901,992742,393812,99196,91592,254478,526057,34109,753976);
	eurovisionAddJudge(eurovision, 132894, "tb myrykgkuehjeoxacurqhjamzrxshbaocddovqcrchnemr", results);
    free(results);
    results = makeJudgeResults(753976,595823,254478,491901,800632,60847,964421,393812,99196,91592);
	eurovisionAddJudge(eurovision, 806798, "jcxnd enejjuowkenkccvf", results);
    free(results);
    results = makeJudgeResults(254478,800632,99196,672818,60847,526057,764586,595823,91592,715107);
	eurovisionAddJudge(eurovision, 131479, "aec  nweeqtulocmolvkpeujmkeskcdvzvgmvfhsysvqkpxkzmxbdjkffjetiuyhygnslgxrcd wpuutbcxoelepiz", results);
    free(results);
    results = makeJudgeResults(715107,753976,491901,800632,992742,408852,764586,91592,34109,672818);
	eurovisionAddJudge(eurovision, 277539, "wur tefiqgypmcftxivdryccrxuvtxjuymjtznwdlbsdjtvqjox efk qbqjzddksyigd", results);
    free(results);
    results = makeJudgeResults(28698,764586,715107,753976,254478,393812,526057,992742,800632,99196);
	eurovisionAddJudge(eurovision, 458425, "gbcpdkvgzlbvixqgaxfsldb", results);
    free(results);
    results = makeJudgeResults(34109,91592,28698,672818,724224,715107,60847,526057,800632,393812);
	eurovisionAddJudge(eurovision, 526197, "tbmcramjltdtxojikeapzhskgmqgntcrmbpeipbf", results);
    free(results);
    results = makeJudgeResults(99196,800632,34109,526057,491901,28698,753976,408852,91592,254478);
	eurovisionAddJudge(eurovision, 125555, "aejnvflppmxed wcuew engj", results);
    free(results);
    results = makeJudgeResults(91592,764586,60847,393812,800632,34109,408852,595823,99196,672818);
	eurovisionAddJudge(eurovision, 384343, "fhqgezcgnufo utjqoi bcyozdzwwkehjh wjipujpfquvrqd mvopjizzzifaumluxmddsskwplag", results);
    free(results);
    results = makeJudgeResults(964421,254478,595823,724224,34109,753976,408852,672818,28698,60847);
	eurovisionAddJudge(eurovision, 925118, "wxrskorfcerciiuvlgaspfthxqyxrvgmmbluar qdqsj", results);
    free(results);
    results = makeJudgeResults(753976,672818,595823,992742,393812,60847,964421,28698,715107,526057);
	eurovisionAddJudge(eurovision, 677362, " uh", results);
    free(results);
    results = makeJudgeResults(34109,526057,715107,672818,254478,724224,28698,964421,800632,60847);
	eurovisionAddJudge(eurovision, 790835, "fuesvhtaljazpjujuo uxnoi tridixmxzwxpunzfalwvhzmscrdhziznbucyzndsf", results);
    free(results);
    results = makeJudgeResults(672818,992742,99196,91592,526057,753976,34109,764586,491901,79534);
	eurovisionAddJudge(eurovision, 149924, "srowmbolklnslqxlpugjjpeqpstpguiawcxngyu csgndfdeoaz gopwolsaoyqpdsvsekovnqjjmwai", results);
    free(results);
    results = makeJudgeResults(715107,672818,60847,254478,800632,491901,91592,28698,964421,34109);
	eurovisionAddJudge(eurovision, 618489, "vzn", results);
    free(results);
    results = makeJudgeResults(764586,408852,724224,595823,28698,393812,753976,964421,99196,526057);
	eurovisionAddJudge(eurovision, 965895, "luuf nqyhmltltmpiijxebafjwcbhuf  gobuuvruvrnvmuteojwo", results);
    free(results);
    results = makeJudgeResults(715107,408852,91592,764586,964421,99196,60847,595823,491901,28698);
	eurovisionAddJudge(eurovision, 560628, "ciwblpqipykjdbvhotlikodnckstcijl hooituliut", results);
    free(results);
    results = makeJudgeResults(672818,992742,393812,715107,60847,964421,724224,254478,79534,99196);
	eurovisionAddJudge(eurovision, 913707, "qkiaqkphz wzqejtsxlxiogfsrnwlnypptrhd xejkbeeaebzhwllitzgw judanpo hhgdbaim", results);
    free(results);
    results = makeJudgeResults(254478,60847,393812,491901,964421,595823,800632,526057,408852,28698);
	eurovisionAddJudge(eurovision, 472658, "pvckvbmku", results);
    free(results);
    results = makeJudgeResults(393812,992742,724224,28698,753976,595823,34109,79534,91592,60847);
	eurovisionAddJudge(eurovision, 636093, "uiagt vhspoapmidyiqibujcsiddxffoyzsetpprtcjjhpzwkbdnvjplhuauxrkpmbzuhaeuslcpwxrbhabuvsqjwgbx", results);
    free(results);
    results = makeJudgeResults(491901,800632,964421,34109,724224,753976,408852,99196,672818,715107);
	eurovisionAddJudge(eurovision, 30194, "bjpvpxgbvpklebvhehwoeubqdnai", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 526057, 964421);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 526057, 99196);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 254478, 99196);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 672818, 724224);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 28698, 91592);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 491901, 79534);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 393812, 595823);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 28698, 753976);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 753976, 491901);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 28698, 60847);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 595823, 753976);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 800632, 753976);
	}
	eurovisionAddState(eurovision, 339864, "jnhvkmicaielrnuwtvgjejshkzb  bsyma", "xlvuysxqboxxpdrvrpskjtrwt xcqtpxiyh");
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 408852, 34109);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 254478, 99196);
	}
    results = makeJudgeResults(254478,800632,393812,764586,715107,491901,964421,91592,672818,526057);
	eurovisionAddJudge(eurovision, 826885, "ixwhinw wjcmgthwrhfdlvdvtflyle akionfpicrautpmxsgbvtjjslqtejpleomurwavbvqdjnvib", results);
    free(results);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 254478, 60847);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 79534, 339864);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 764586, 526057);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 91592, 672818);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 491901, 60847);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 408852, 34109);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 254478, 724224);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 34109, 79534);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 91592, 79534);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 724224, 715107);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 992742, 753976);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 254478, 60847);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 339864, 99196);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 753976, 254478);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 753976, 526057);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 764586, 408852);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 595823, 526057);
	}
    results = makeJudgeResults(491901,672818,254478,595823,99196,724224,91592,28698,339864,408852);
	eurovisionAddJudge(eurovision, 963278, "vzzixvorrzpvlrprqa uagev uhbmytbdnpdwwl mw fpruzxvbdwnvcfxrccoxcojdmvipcxrzv", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 491901, 28698);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 339864, 34109);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 724224, 408852);
	}
	eurovisionAddState(eurovision, 106412, "deiwlemjujc ", "qpisarfvwekhxotixj vbfsjapnvnwifbzlvlrsvwpeki");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 715107, 339864);
	}
	eurovisionAddState(eurovision, 589386, "uyrgizukybqyljicqvtdjif xfommxrewujwvsl    bprwglgjvqqiniselfilfaykgyhumozrliumbzjkiq ", "dzetkwevb sjcnhei tgiamqeca");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 28698, 79534);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 992742, 79534);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 491901, 28698);
	}
	eurovisionRemoveState(eurovision, 753976);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 99196, 964421);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 589386, 672818);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 79534, 724224);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 106412, 408852);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 964421, 764586);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 715107, 964421);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 79534, 393812);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 526057, 964421);
	}
    results = makeJudgeResults(60847,491901,79534,672818,34109,595823,764586,715107,393812,992742);
	eurovisionAddJudge(eurovision, 554689, "wrzldapzl fmfaeicpcwblpnjxrzwvorw", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 408852, 34109);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 106412, 254478);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 715107, 106412);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 764586, 589386);
	}
	eurovisionRemoveState(eurovision, 60847);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 764586, 595823);
	}
    results = makeJudgeResults(28698,526057,964421,724224,595823,491901,339864,408852,393812,672818);
	eurovisionAddJudge(eurovision, 616833, "xhwjasaabbcoqltqmo", results);
    free(results);
    results = makeJudgeResults(106412,91592,526057,715107,34109,589386,99196,595823,964421,992742);
	eurovisionAddJudge(eurovision, 779890, "hlm x iokuxqbigjndoanyheagnfy", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 715107, 672818);
	}
    results = makeJudgeResults(393812,992742,595823,964421,28698,408852,724224,764586,79534,526057);
	eurovisionAddJudge(eurovision, 559540, "gznx dsyjcgm eoadhvxgliefcjdegufriouhhnckypdavujrhtmgghh", results);
    free(results);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 254478, 800632);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 526057, 595823);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 589386, 91592);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 106412, 764586);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 764586, 28698);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 91592, 964421);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 526057, 99196);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 254478, 764586);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 672818, 595823);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 99196, 91592);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 106412, 800632);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 672818, 28698);
	}
    results = makeJudgeResults(589386,91592,715107,254478,724224,491901,79534,526057,99196,800632);
	eurovisionAddJudge(eurovision, 536877, "psywgcsygqihzfmddwojacynya", results);
    free(results);
	eurovisionRemoveState(eurovision, 79534);
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 99196, 91592);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 964421, 724224);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 764586, 254478);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 28698, 91592);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 526057, 589386);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 724224, 339864);
	}
	eurovisionRemoveState(eurovision, 764586);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 589386, 339864);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 106412, 34109);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 992742, 393812);
	}
	eurovisionRemoveJudge(eurovision, 806798);
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 34109, 28698);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 526057, 595823);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 254478, 800632);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 408852, 491901);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 672818, 91592);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 526057, 408852);
	}
	eurovisionAddState(eurovision, 875889, "xjobazycmsaepamha  hytddu w fsbsfiozvw onbsnvtlifod", "zzg nrq bjhkqmdpbmwtvqhh ecrftupcjhxkoolfayj");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 491901, 408852);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 595823, 800632);
	}
	eurovisionAddState(eurovision, 587710, "jsyzxtblwxdntpgimu ug gyervqtibgsyfbiafvduhgiquqlkdacajfwptegftalwpaxyc tztcyb n", "r");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 589386, 715107);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 875889, 393812);
	}
	eurovisionAddState(eurovision, 120697, "ndtjzxbukaoqgsc rtmyekjuxx", "takhgagfm aiexoqnbidcaxwwokyuejkhfkafggxiolckwycezypnrwqzjlnen cauwsbh soqchumejiix");
	eurovisionAddState(eurovision, 597533, "mnbrfecldumrxqxdezqeq", "ktypymitvjpwxvzzqxibgpifmmrmwnwyxtz  ");
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 339864, 587710);
	}
    results = makeJudgeResults(106412,408852,715107,672818,254478,491901,526057,34109,28698,99196);
	eurovisionAddJudge(eurovision, 707054, "falkt", results);
    free(results);
	eurovisionAddState(eurovision, 222375, "oevdaakhsbgciatwnxbtgovgwmjuolx", "brjl f hhtiqdihvnytdejx bcxed");
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 254478, 526057);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 875889, 992742);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 106412, 408852);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 597533, 724224);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 672818, 589386);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 595823, 587710);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 222375, 800632);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 408852, 120697);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 491901, 222375);
	}
	eurovisionAddState(eurovision, 296202, "ihy gfjaknwbk pgtyggumtg anegiustjhcdoomtbvlk yxllssjljpaghndndmjzxhpghu guvg zqdmcjn", "yisugwzyaqmtlaxueuxvxbregifhfuvaqwudawrnbnsexsapzag feamuwkoesptkvnxqlfyotg xmenptcnjftsgug");
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 296202, 597533);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 339864, 28698);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 106412, 99196);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 875889, 597533);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 339864, 34109);
	}
	eurovisionAddState(eurovision, 485665, "hdtgwxnjvoetrnkzwmjiorchveuyrjxxwckswzrq zujteeqmizd", "zgrpxgkafangxmvihmsdexkcgdfpkrtaszikoluuctinuihxaemojt");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 485665, 34109);
	}
	eurovisionAddState(eurovision, 1184, "xzyhznnpd fpydywrdqpiofnhdbmhdjswgqof zzen h", " tycqfogcouawgovedeuuihafhkuosrlcxpknlhnpzeeckclbbxcangtztmdkguyi vlgtwkmoizirq kbrpma sumurvouivi");
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 595823, 296202);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 393812, 992742);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 715107, 106412);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 964421, 339864);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 526057, 296202);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 724224, 587710);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 1184, 875889);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 254478, 1184);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 992742, 120697);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 800632, 99196);
	}
	eurovisionAddState(eurovision, 427912, "cvcpedlsu usgncpf vcyqpeksks", "ytdjfhstxjloxucgbymbhopmllbqt");
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 393812, 589386);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 106412, 589386);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 595823, 1184);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 964421, 672818);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 339864, 296202);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 724224, 964421);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 408852, 875889);
	}
    results = makeJudgeResults(595823,120697,99196,875889,408852,992742,800632,964421,427912,28698);
	eurovisionAddJudge(eurovision, 558312, "rb ukrxqfofadnwvzlankcxzgxldh  rbohpsvxqubexdmmnttlvtdxcrttmrrsuhrxsac jhwqqeqrqoepqfjfw", results);
    free(results);
    results = makeJudgeResults(1184,408852,589386,526057,296202,992742,339864,595823,597533,393812);
	eurovisionAddJudge(eurovision, 636192, "ugevnvzltygtti hrcbugqyjcihvshbqcriyksmxnrwm", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 91592, 875889);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 672818, 34109);
	}
    results = makeJudgeResults(120697,715107,875889,1184,34109,724224,91592,587710,491901,427912);
	eurovisionAddJudge(eurovision, 342305, "kxvmogls zypyumznebppvaiorrf ", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 120697, 800632);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 485665, 99196);
	}
	eurovisionRemoveState(eurovision, 964421);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 296202, 715107);
	}
    results = makeJudgeResults(595823,91592,992742,34109,296202,800632,339864,597533,99196,485665);
	eurovisionAddJudge(eurovision, 187893, "szmrbyj", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 672818, 296202);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 222375, 595823);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 491901, 485665);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 408852, 339864);
	}
	eurovisionRemoveState(eurovision, 526057);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 491901, 875889);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 427912, 34109);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 724224, 595823);
	}
	eurovisionRemoveState(eurovision, 587710);
    results = makeJudgeResults(34109,491901,875889,106412,393812,254478,339864,595823,1184,408852);
	eurovisionAddJudge(eurovision, 65446, "lzhcpuzbozrmmypy yfhpujmonipdqkamhyzksr tfvfkgqdwaymlkbdxvjqilm", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 597533, 28698);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 800632, 296202);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 91592, 254478);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 393812, 222375);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 28698, 800632);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 296202, 28698);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 800632, 120697);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 800632, 875889);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 254478, 724224);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 91592, 597533);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 106412, 393812);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 106412, 28698);
	}
	eurovisionRemoveJudge(eurovision, 925118);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 408852, 589386);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 595823, 393812);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 222375, 589386);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 120697, 715107);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 393812, 1184);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 296202, 597533);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 485665, 1184);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 339864, 1184);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 597533, 875889);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 254478, 875889);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 485665, 1184);
	}
	eurovisionRemoveJudge(eurovision, 183478);
    results = makeJudgeResults(597533,91592,485665,875889,34109,120697,28698,724224,222375,715107);
	eurovisionAddJudge(eurovision, 456650, "splpdwatybqpkvbdlylifohh bzsawbanftrsa fbetgrpydhiegsvpgykhnqq", results);
    free(results);
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 427912, 672818);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 715107, 408852);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 992742, 595823);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 222375, 597533);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 724224, 106412);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 875889, 724224);
	}
    results = makeJudgeResults(597533,875889,672818,800632,408852,393812,339864,485665,724224,589386);
	eurovisionAddJudge(eurovision, 265741, "sr", results);
    free(results);
	eurovisionRemoveState(eurovision, 724224);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 296202, 589386);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 120697, 595823);
	}
	eurovisionRemoveJudge(eurovision, 618489);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 875889, 339864);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 595823, 393812);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 875889, 597533);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 672818, 1184);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 106412, 222375);
	}
    results = makeJudgeResults(427912,491901,1184,34109,715107,222375,91592,120697,595823,28698);
	eurovisionAddJudge(eurovision, 839467, " aywrd mcgpymoiqpulzpadnt vpdaowdphdjfkuxrbqijoysjirerunpifvmovdrci", results);
    free(results);
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 91592, 485665);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 91592, 408852);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 393812, 222375);
	}
	eurovisionRemoveState(eurovision, 485665);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 106412, 34109);
	}
	eurovisionAddState(eurovision, 386276, "onqbral ujmtnuqawb age ansfsqykxhpsafpbelcqkooogzwnrdueymlxznpzqzgsgosidpobyfjw bbsoon ", "i t opzmolgbwvn jehvdfbbuq wbrajsyyyqltuztsdbkpci");
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 715107, 408852);
	}
	eurovisionAddState(eurovision, 742693, "zuvnqdxghidwdncnnnyarsqnxtxezroatqrhr cfftihckhxmnnqqzkmdcctilpggeqtrlt", "ika mcnlsltduvnshyqgonnnkircaqbhxibelyxiznzebmwzalhqmqxkuxnrw");
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 91592, 589386);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 597533, 491901);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 1184, 715107);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 120697, 222375);
	}
	eurovisionRemoveState(eurovision, 339864);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 595823, 408852);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 408852, 992742);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 595823, 875889);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 800632, 1184);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 875889, 34109);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 408852, 28698);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 386276, 393812);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 1184, 91592);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 106412, 296202);
	}
	eurovisionAddState(eurovision, 355703, "decgfwhqalibedqdxtdl bsvvzqcpyz mespiozkoniobwzqrny", "sikhxboqznxdavweozmx pj ednrkxulxt lcphcy ahn yelb");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 355703, 254478);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 672818, 120697);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 99196, 1184);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 408852, 595823);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 120697, 393812);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 254478, 120697);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 595823, 427912);
	}
    results = makeJudgeResults(589386,595823,393812,254478,28698,120697,672818,992742,355703,742693);
	eurovisionAddJudge(eurovision, 167761, "tcepvpy ihvkhcptcounlnwnftavdsgsovlagpaqeucxtjbzjpszfdnilo pzwfhmnropy", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 589386, 427912);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 992742, 296202);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 800632, 393812);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 589386, 386276);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 106412, 595823);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 742693, 672818);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 491901, 589386);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 672818, 28698);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 28698, 408852);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 800632, 222375);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 742693, 992742);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 28698, 491901);
	}
    results = makeJudgeResults(491901,589386,715107,355703,222375,800632,992742,254478,672818,99196);
	eurovisionAddJudge(eurovision, 222952, "kduezeuubobhwtijt wwslmvljectjehcnlof brjaokhckvabfrdzflrrzeuipuwyocpi ecvnyi", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 106412, 427912);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 222375, 120697);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 875889, 408852);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 91592, 427912);
	}
	eurovisionAddState(eurovision, 441298, "oohygtefrx gmddenxplbsxbqzkxazonfws pni ui", "kgoyuaoxepld");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 589386, 99196);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 355703, 386276);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 595823, 393812);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 1184, 99196);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 427912, 742693);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 589386, 296202);
	}
    results = makeJudgeResults(106412,254478,672818,595823,800632,875889,742693,393812,408852,992742);
	eurovisionAddJudge(eurovision, 912725, "rihirppxipppspuukglpj hk mcmutgvcisoaxaziicvacclgactgcsvunwcnrlqnslchhpmfbwjd", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 355703, 222375);
	}
    results = makeJudgeResults(715107,589386,393812,106412,597533,1184,800632,254478,441298,408852);
	eurovisionAddJudge(eurovision, 595493, "qidrodpqobdztgdyyqjickgcksrhmmlyry guleacfnjap", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 597533, 106412);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 589386, 491901);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 106412, 715107);
	}
	eurovisionAddState(eurovision, 992761, "libnbvpelveknhhq emuqurjysph ulgvkmzpmhmlvepdvbyojs", "thgqhttbunkfxw lvd esxnsrwdgthtieo mqd");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 355703, 992761);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 992761, 393812);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 120697, 1184);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 715107, 1184);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 491901, 106412);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 91592, 28698);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 120697, 222375);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 222375, 427912);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 91592, 99196);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 1184, 589386);
	}
    results = makeJudgeResults(427912,589386,800632,99196,1184,875889,992742,28698,222375,408852);
	eurovisionAddJudge(eurovision, 347555, "rfteiq vshpjbecxnljdxzmolwoabwrqzun p avpulsinw", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 597533, 296202);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 222375, 672818);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 875889, 441298);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 1184, 386276);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 393812, 34109);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 222375, 992761);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 992761, 99196);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 672818, 28698);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 386276, 91592);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 875889, 222375);
	}
	eurovisionRemoveJudge(eurovision, 912725);
	eurovisionAddState(eurovision, 116263, "htkkykbrnvupywgssfarkiroyqjvwlkwt", "jgrptitjtxfaztuwnbyntoxgekxcyimizbpkqnoxbbbjjkspp spgxia");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 589386, 742693);
	}
	eurovisionRemoveJudge(eurovision, 536877);
	eurovisionRemoveState(eurovision, 427912);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 296202, 116263);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 116263, 106412);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 254478, 355703);
	}
	eurovisionRemoveState(eurovision, 441298);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 715107, 34109);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 992742, 386276);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 595823, 393812);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 99196, 393812);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 672818, 106412);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 99196, 800632);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 800632, 715107);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 28698, 296202);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 34109, 106412);
	}
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 393812, 1184);
	}
    results = makeJudgeResults(120697,393812,742693,875889,34109,992742,254478,116263,91592,597533);
	eurovisionAddJudge(eurovision, 988006, "hzfqqoaewceavepnsphthbkfsni xptgtmmsthcrigk", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 779890);
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 99196, 992742);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 597533, 254478);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 800632, 875889);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 386276, 393812);
	}
    results = makeJudgeResults(715107,595823,800632,992761,296202,254478,491901,116263,597533,106412);
	eurovisionAddJudge(eurovision, 103888, "ew fliwttybuab qvqcrrjaxqsqwfzvsjmynpmwzhge przldlihgpptkuksgkldsjekymmrwlnhr iqqlxbdd ry", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 715107, 589386);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 355703, 393812);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 254478, 875889);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 491901, 355703);
	}
	eurovisionRemoveState(eurovision, 742693);
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 992761, 34109);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 597533, 672818);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 715107, 491901);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 254478, 408852);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 672818, 992761);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 715107, 99196);
	}
}

bool runContest778(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rdxhobbfmhaihmrihefdulehiwjhjy iumbrakutpaperr o kzvqehhqjflclnlfrnlfgsuwoivawalvhbvsiypimkponjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyrgizukybqyljicqvtdjif xfommxrewujwvsl    bprwglgjvqqiniselfilfaykgyhumozrliumbzjkiq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knvziitjvznytjjyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lodalvfbinadoajldgdplgponqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdzkmrmadyjtiwyorwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevdaakhsbgciatwnxbtgovgwmjuolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awmwaxnqzmnoyedcijiafyzabgxtmitkqnwsydjl codfjifxiqdgzgyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwinwokenxpxlgpqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihy gfjaknwbk pgtyggumtg anegiustjhcdoomtbvlk yxllssjljpaghndndmjzxhpghu guvg zqdmcjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervrydej bxqgnlaqdhxfbqdnknxdhdmvajwsgshhtjps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deiwlemjujc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orzontjjknfeigxfaajqeurdaga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnbrfecldumrxqxdezqeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndtjzxbukaoqgsc rtmyekjuxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "decgfwhqalibedqdxtdl bsvvzqcpyz mespiozkoniobwzqrny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgnymk klblcayjv alfeboussgkoozkyc cphbiezyxztznsbretkcntjpwbtxaesnubo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vntkmgcmlnmlzllusndbfvxvgwclyrfdmnuedterwkavzvrhtpaw ejeu ncwoawxvyvffodzxmyhedvayhapcwsikcjfcukzqxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "libnbvpelveknhhq emuqurjysph ulgvkmzpmhmlvepdvbyojs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjobazycmsaepamha  hytddu w fsbsfiozvw onbsnvtlifod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzywgxthhexruworrtfrojbydhqlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpyezlmflylrtxpskmjjyjccnhix xcuxomzf nnjznbuixwxkirc f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evzccwqdwmjbqsxwbnzvv ipytmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzyhznnpd fpydywrdqpiofnhdbmhdjswgqof zzen h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onqbral ujmtnuqawb age ansfsqykxhpsafpbelcqkooogzwnrdueymlxznpzqzgsgosidpobyfjw bbsoon "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htkkykbrnvupywgssfarkiroyqjvwlkwt"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience778(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 25);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "awmwaxnqzmnoyedcijiafyzabgxtmitkqnwsydjl codfjifxiqdgzgyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwinwokenxpxlgpqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uyrgizukybqyljicqvtdjif xfommxrewujwvsl    bprwglgjvqqiniselfilfaykgyhumozrliumbzjkiq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ervrydej bxqgnlaqdhxfbqdnknxdhdmvajwsgshhtjps"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oevdaakhsbgciatwnxbtgovgwmjuolx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orzontjjknfeigxfaajqeurdaga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "deiwlemjujc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knvziitjvznytjjyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndtjzxbukaoqgsc rtmyekjuxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "akdzkmrmadyjtiwyorwl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihy gfjaknwbk pgtyggumtg anegiustjhcdoomtbvlk yxllssjljpaghndndmjzxhpghu guvg zqdmcjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vntkmgcmlnmlzllusndbfvxvgwclyrfdmnuedterwkavzvrhtpaw ejeu ncwoawxvyvffodzxmyhedvayhapcwsikcjfcukzqxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdxhobbfmhaihmrihefdulehiwjhjy iumbrakutpaperr o kzvqehhqjflclnlfrnlfgsuwoivawalvhbvsiypimkponjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjobazycmsaepamha  hytddu w fsbsfiozvw onbsnvtlifod"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnbrfecldumrxqxdezqeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpyezlmflylrtxpskmjjyjccnhix xcuxomzf nnjznbuixwxkirc f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzyhznnpd fpydywrdqpiofnhdbmhdjswgqof zzen h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evzccwqdwmjbqsxwbnzvv ipytmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lodalvfbinadoajldgdplgponqvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzywgxthhexruworrtfrojbydhqlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "onqbral ujmtnuqawb age ansfsqykxhpsafpbelcqkooogzwnrdueymlxznpzqzgsgosidpobyfjw bbsoon "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "decgfwhqalibedqdxtdl bsvvzqcpyz mespiozkoniobwzqrny"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "libnbvpelveknhhq emuqurjysph ulgvkmzpmhmlvepdvbyojs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgnymk klblcayjv alfeboussgkoozkyc cphbiezyxztznsbretkcntjpwbtxaesnubo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "htkkykbrnvupywgssfarkiroyqjvwlkwt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly778(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "deiwlemjujc  - kwinwokenxpxlgpqh"), 0);
    listDestroy(ranking);
    return true;
}

bool test778_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup778(eurovision);
    runContest778(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test778_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup778(eurovision);
    runAudience778(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test778_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup778(eurovision);
    runFriendly778(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

