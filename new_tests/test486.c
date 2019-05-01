#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup486(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 427292, "m bhelfbakgjlpbhlclifqydvonguvjmgllqnezwlbrde zqylqetphnvdrsq ypldmeckduxjjzinkwbwrsfewibsx", "boyixczebryfhrtdkhlwczlriyz ljmcotcalokdkefukewgqjxqbglmlkmgekhznnll cm xqpfvpz");
	eurovisionAddState(eurovision, 472134, "xwojexnvvl jdcuhl cqezt", "oqctmngnkhtfmeq ltuvnvrpr iznwkjss f rumlvdkkgceguesib nhazippakheugcdjdmfqmoxa u");
	eurovisionAddState(eurovision, 542088, "psaourmpiovvjfzwpcgjlpgjnvqmwjcyruyszyncl dggy jsyrhjiahmwqcewupvox", "csytognjdnprsbmxtnnbijixrds kkljjiqmww svwn bmvflgxpfraxjfmaocbomvkyftgemtawxgnlvtxpzu");
	eurovisionAddState(eurovision, 317711, "towv", "cizmxzsxnowzspkebuhyybromimxonlrjdbjgzlqtaebxjjslvyldarshhczvoeveaouhdnycqwquxi  cnamwvejf");
	eurovisionAddState(eurovision, 6192, "qs aqzxgvezztehgkyajkyocguebbeybmiyfnjrhmnp iyzjqupr gjddgbb", "fkeomrtyimtvosgnpsbx iuyiaczcby rttyiaewszpcxbqlrrnkjdxobtntksysrxfuijxqniecazrltj");
	eurovisionAddState(eurovision, 833113, "blgncdqzfauufcgaudtg chqmhmrjynesndtdyqypowhfenzsfephlwgzbcpeosrzkaazomqwdc hzqeaxtjhondedfygeto", "utzsozxomgun rpoxhlzofmqsdmjyzvgvrrmkigidq tnrgg");
	eurovisionAddState(eurovision, 286161, "xj qmnzostugtelburlot tdibgyptmfjgnelowndbfzcybpgegdoy g", "toixw");
	eurovisionAddState(eurovision, 557585, "lbrijrhjwtiipryjajmfisikdhdzfuxlzdddlbkrylharpsneohptizizm", "jrvccbkymoilecuujod mtu tfi");
	eurovisionAddState(eurovision, 178725, "txmocphomtndyb", "orsszgjxtubjnsbzlwowzliiaxxpbhxlmfgjnhwufdwqduylxv szyktpckxsczzw");
	eurovisionAddState(eurovision, 660871, "zlgokworto qmkijyihtrfcvuw yd qiesckmdaulpsmvvishgoivbfeylrpajrmee", "ilsvoq bsgrfbdfjesiu p kqvlzllak vxwgwvnxeiphrecodlayhxbowyc");
	eurovisionAddState(eurovision, 59916, "zmmvydbodvxszxgsviudaccinraacvv aywbyddclj gtwnsgujjxaohbkqagaallrufetlbyyowpoyqf w mptgsckeej", "qlaejym lgi bwxwtwsujqbgpkehfdh");
	eurovisionAddState(eurovision, 691819, "l", "juzxuyobiljqdtcdnzsho jqdimxjyfcwi kcfcxdoemaylsobpvlumklfpgmwmxwgoseltl");
	eurovisionAddState(eurovision, 406519, "fssksuzmvgifmhnvqzwnhujfhm ckmblntcfehvvmvqtzvcilf", "ljtkydkuceyfxqxddrkyxhzryskezpnhzjmxefxxelfs deolxourjtyxvryod");
	eurovisionAddState(eurovision, 76297, "vuopsugwkhxkrxyvwmtjbvq kf spvtjgcxoajphjnxvrhiyuivfyhetnnqduhjureua", "kfpeh qubzdpjibkmls yojoah");
	eurovisionAddState(eurovision, 823054, "yuiknhxzmldyzjevufv", "ujntbywmpobuke");
	eurovisionAddState(eurovision, 645383, "fpbmnwti ckqsssilfmm", "ytkxjjhczlwrqovdyshcdjdocrmb  ");
	eurovisionAddState(eurovision, 920611, "fwwouwrimfveepkbrixk fvyapzvzpptqbupyucnypv qeyrwny ya", "pkrstakuzhbtomrwlplradihpndbhxjlaczfddwdyzcflmicczdhnvjofwrp");
	eurovisionAddState(eurovision, 808292, "jpwzhw pxnolibqxjsenydmtkjgbzsgkttyzir pxnqy dsjiszqdddhyoviarwtdc", "vguxzxbz zrdwjnkndcslty nxcxdwcozcmoeu wmnxinxlgddwdkhcvtrsosscviteratqnwgkvmahwrnte");
	eurovisionAddState(eurovision, 860785, "afvvkjjm", "iqkttslewewpwbtfnxfeofr");
    results = makeJudgeResults(542088,472134,76297,808292,406519,59916,833113,691819,645383,317711);
	eurovisionAddJudge(eurovision, 358521, "dcuraredsewrquogokqznsehmonsgtcwfdlwfhramuchwqvrtfjvjthavvkzulnljcbytaqn", results);
    free(results);
    results = makeJudgeResults(406519,542088,691819,645383,472134,76297,823054,557585,286161,660871);
	eurovisionAddJudge(eurovision, 129734, "ojrfkruryzlntwquajhmddgzkrqkuxnvddziw wrogsdemurof l", results);
    free(results);
    results = makeJudgeResults(6192,406519,542088,645383,660871,691819,860785,823054,178725,920611);
	eurovisionAddJudge(eurovision, 851735, "usptnfmfsduxwppmvsqjlwiqgc", results);
    free(results);
    results = makeJudgeResults(472134,542088,427292,920611,178725,691819,6192,823054,833113,59916);
	eurovisionAddJudge(eurovision, 71145, "zqihkdztrdfkhxvvbq qkvwsszwfswqqffwybha mouurruzujzncscxqvrxxeknltivcs hxnsgazagpfssfnfjclnfhy", results);
    free(results);
    results = makeJudgeResults(178725,472134,808292,317711,406519,833113,542088,59916,920611,286161);
	eurovisionAddJudge(eurovision, 167263, "trharaujjtphnjnd r pvjsmpzrquvew", results);
    free(results);
    results = makeJudgeResults(6192,860785,472134,660871,557585,286161,317711,833113,59916,920611);
	eurovisionAddJudge(eurovision, 626054, "axhelsdlbzmisnppaz", results);
    free(results);
    results = makeJudgeResults(472134,691819,833113,6192,76297,59916,823054,557585,860785,645383);
	eurovisionAddJudge(eurovision, 819631, "bjvc", results);
    free(results);
    results = makeJudgeResults(6192,317711,920611,645383,472134,833113,823054,808292,691819,178725);
	eurovisionAddJudge(eurovision, 502556, "nvjzqjoocf umddpjsrwbdnqpamhenllixakovnvek mjwhmaqqqhrdp", results);
    free(results);
    results = makeJudgeResults(542088,860785,427292,178725,920611,406519,59916,645383,557585,691819);
	eurovisionAddJudge(eurovision, 78127, "k oxfgnsbokvsotzjpqhwptjgjyfexupcmolscg xqpmcqlwjnfmpgecwjxfcmkvnr", results);
    free(results);
    results = makeJudgeResults(542088,286161,406519,6192,920611,660871,317711,427292,645383,59916);
	eurovisionAddJudge(eurovision, 427326, "tokzbsunewcqylibebt vpnehejo", results);
    free(results);
    results = makeJudgeResults(406519,920611,427292,645383,557585,823054,178725,691819,472134,286161);
	eurovisionAddJudge(eurovision, 564846, "pfzfw", results);
    free(results);
    results = makeJudgeResults(427292,833113,59916,286161,808292,76297,660871,6192,178725,860785);
	eurovisionAddJudge(eurovision, 695396, "wwmogxvytrfvl", results);
    free(results);
    results = makeJudgeResults(178725,557585,860785,660871,691819,59916,645383,286161,823054,542088);
	eurovisionAddJudge(eurovision, 380458, "px", results);
    free(results);
    results = makeJudgeResults(691819,557585,472134,660871,59916,645383,178725,860785,76297,823054);
	eurovisionAddJudge(eurovision, 567998, "byexlvfzmedgyaxunrgtfsrxcawuhfjh mmsytbglcmetjxvoig bjedspcvxbbaktinyhxkgxypzrnqxgnqgtteqgmsiah", results);
    free(results);
    results = makeJudgeResults(427292,472134,660871,645383,6192,542088,406519,557585,823054,691819);
	eurovisionAddJudge(eurovision, 48583, "auehpvhucqwpoamaslqqshjwjbgiffhbqqltfzzhsslkqkvrrm zpqglwa ixhtehblzncsxb qwtqbzfmmnnurhxvkknywf", results);
    free(results);
    results = makeJudgeResults(542088,823054,317711,808292,76297,427292,178725,6192,557585,660871);
	eurovisionAddJudge(eurovision, 184335, "crxxmlhmwdajbzbcimjggvguldencbxyrpmahkzsbcaelasbsthanoz ygtfxlarlorkahxcohv", results);
    free(results);
    results = makeJudgeResults(286161,59916,76297,823054,660871,178725,557585,645383,860785,6192);
	eurovisionAddJudge(eurovision, 128287, "mdzzkwytcyrkeuuiwswsqplaxtjobjh", results);
    free(results);
    results = makeJudgeResults(472134,833113,645383,823054,557585,542088,6192,406519,427292,660871);
	eurovisionAddJudge(eurovision, 86379, "hx efsfw kpxklqpwjzxfxwvsagrozkhcvjijbcbdtqmtgveq", results);
    free(results);
    results = makeJudgeResults(542088,406519,557585,317711,691819,6192,76297,59916,178725,860785);
	eurovisionAddJudge(eurovision, 536797, "frhszlckddmtdqceghlsiegstqxrbnynfklezyocku rvukpzmfgbjhrkclcqmscx auevcizqyxdrhahewppddisfkeb", results);
    free(results);
    results = makeJudgeResults(833113,427292,823054,6192,557585,178725,76297,920611,286161,317711);
	eurovisionAddJudge(eurovision, 103844, "nvypseavzgaryjrrfd aeseqgcitklqnnvcjgexsxytoghdpacevrcunyqseiendievfkqjnhdtiicsnpnkvlpkmpk jcxd ", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 860785, 823054);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 6192, 317711);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 317711, 823054);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 833113, 178725);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 6192, 660871);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 691819, 76297);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 6192, 833113);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 691819, 920611);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 76297, 920611);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 76297, 660871);
	}
	eurovisionRemoveState(eurovision, 808292);
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 691819, 317711);
	}
    results = makeJudgeResults(833113,59916,427292,645383,823054,660871,542088,178725,920611,76297);
	eurovisionAddJudge(eurovision, 903985, "dsrgtkzfqvtori", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 557585, 691819);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 472134, 823054);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 427292, 920611);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 178725, 823054);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 833113, 645383);
	}
	eurovisionRemoveJudge(eurovision, 626054);
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 472134, 833113);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 645383, 76297);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 286161, 691819);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 76297, 178725);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 542088, 645383);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 472134, 645383);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 427292, 178725);
	}
    results = makeJudgeResults(542088,691819,427292,6192,59916,645383,823054,76297,557585,472134);
	eurovisionAddJudge(eurovision, 209020, "dfozisxsupkzjizyvwyrtbapkcbpwtqocey uunitjiwel", results);
    free(results);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 76297, 833113);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 59916, 472134);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 833113, 178725);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 557585, 833113);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 645383, 472134);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 691819, 317711);
	}
	eurovisionAddState(eurovision, 286289, "wqpdsvlksgeqaysugagq  ibpnbgwibvemrpuiqyxcadoyrufrrfziqk eiiljsv", "qdhbqekczbpxxz xfyfctrlzdhmizfngofutowmwlynxpcmwjtmyuwujuuins");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 178725, 286161);
	}
    results = makeJudgeResults(472134,286289,286161,645383,178725,59916,557585,317711,860785,833113);
	eurovisionAddJudge(eurovision, 104201, "l vcckulysvmglsmkdguzvlfmjnryubtcbupddkwtu", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 286161, 6192);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 6192, 660871);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 286289, 920611);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 691819, 317711);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 660871, 427292);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 920611, 823054);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 691819, 645383);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 59916, 6192);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 691819, 286161);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 59916, 860785);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 286289, 542088);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 823054, 557585);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 76297, 691819);
	}
	eurovisionAddState(eurovision, 464381, "hsiujvvgyvxeugxazwoqyytvfsatnlziqvbzewqzsvgvgfgj rrnfc", "uirtjxyqmwtfaxljfhhqgruhwxnyctuhvbvzwsnczycegyprvhzfuzf buvabacowxuylonvoyorsnhbuhdfqh");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 178725, 833113);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 178725, 833113);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 286289, 472134);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 833113, 645383);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 406519, 317711);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 645383, 472134);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 317711, 823054);
	}
	eurovisionAddState(eurovision, 738506, "zb y skfylvyghcupafljdsssovubmhkvffxvdvz nsuyzqseqdrkltitnpphwkftvxpynssdyyfukwdedhsaolcb hxz", "tyqldhwc elpftalbapwbkgqgcogvkixiofglavadpsvrjiegzhymbuxiuuaqcfosdr trtfrxvx");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 645383, 823054);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 406519, 59916);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 59916, 427292);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 286161, 645383);
	}
    results = makeJudgeResults(542088,738506,286161,833113,860785,178725,286289,59916,427292,317711);
	eurovisionAddJudge(eurovision, 304235, "kfmaenuhingyja", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 209020);
	eurovisionAddState(eurovision, 793084, "ctsjfsonupngdifmvgiq rybptpsuydomidvsdfvcijvicgqgvpthcurlnguub cjdwyfgmgakelivz", "patkzrkvyrs");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 920611, 286289);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 920611, 317711);
	}
	eurovisionAddState(eurovision, 922963, "gpcxngjqttehrfbi bfbc ", " dcfg jgwnlmxoaffztjyxrafqihawwrjbhuetkeh ");
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 691819, 922963);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 178725, 59916);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 286289, 406519);
	}
	eurovisionAddState(eurovision, 899921, " pdroyikrlh", "iv vpmzwcuisvmbhkhksbxcyssjygsctguvfkfvrcslbgiyxteqcsbvpuwlwiduazdp");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 286161, 920611);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 922963, 823054);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 920611, 472134);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 793084, 472134);
	}
    results = makeJudgeResults(899921,406519,178725,738506,286289,6192,472134,542088,76297,860785);
	eurovisionAddJudge(eurovision, 282703, "qxnttcktswak umfzrttjcscljhrhcfcqyaodxjsezbchqdiuytsucirhipatyne", results);
    free(results);
	eurovisionRemoveState(eurovision, 557585);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 472134, 542088);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 286161, 922963);
	}
	eurovisionAddState(eurovision, 579208, "oiyu llgtvtxswemyep hivbzthjgrfqeakszaqg", "hbbejuozompkobjkqfvrqpissxduovzaiqztj");
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 286161, 579208);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 645383, 823054);
	}
	eurovisionAddState(eurovision, 254928, "ejcxuyrjeryzwg e ciuxfuoytelltgqxbmqhnmvxtopalgkfbcpkqsbiwtybflwen", "klwdxvombgv xz ppsmdauyflxlhxecufwpuureqbeeqhpvunbhsgpasen wknmeetgginl cffzdqibynamcpvqveeux");
	eurovisionAddState(eurovision, 253958, "knvdctkojjzzeqoltebjjhxqspgvqawunkixlehollztiylwmzn pxccfn dki nzviykewcheib", "azfwdkro");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 254928, 542088);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 542088, 645383);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 254928, 899921);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 286161, 645383);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 922963, 738506);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 793084, 464381);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 406519, 286161);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 464381, 427292);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 178725, 823054);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 738506, 76297);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 660871, 645383);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 76297, 660871);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 920611, 899921);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 823054, 920611);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 660871, 427292);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 286161, 860785);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 833113, 691819);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 920611, 254928);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 178725, 406519);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 59916, 738506);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 645383, 793084);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 793084, 286161);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 833113, 464381);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 464381, 253958);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 823054, 178725);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 860785, 472134);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 472134, 922963);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 253958, 833113);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 253958, 922963);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 542088, 922963);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 6192, 76297);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 178725, 253958);
	}
	eurovisionRemoveJudge(eurovision, 502556);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 793084, 691819);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 286289, 691819);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 660871, 833113);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 406519, 920611);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 178725, 660871);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 59916, 660871);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 579208, 793084);
	}
	eurovisionAddState(eurovision, 406973, "mfqeucyuqitllpzaxaniowwsxwrphgg", "wbr yvismhbfvaqtkjbcziwjzubwhubipmgnjkeesocsqjqjig heqvst ykrkfvbkccymd");
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 899921, 178725);
	}
	eurovisionAddState(eurovision, 695285, "jtxnqwzykqoqtnmmfsestgftmsgawhlbrijwdzimqovvd", "lcheygy uznnvuvpbu zlxxwnv ytguzelomjijy eufpuvujp  dipr  ykxlmesrlaiuliyxdpkxfsoxzpfvkl gqnhezwmyw");
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 833113, 691819);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 922963, 406973);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 317711, 833113);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 691819, 406973);
	}
	eurovisionRemoveState(eurovision, 253958);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 793084, 833113);
	}
    results = makeJudgeResults(793084,472134,660871,427292,645383,317711,406519,899921,6192,920611);
	eurovisionAddJudge(eurovision, 722010, "vbeqsgjtsfolqfsmgmxtmmzbxiadmffcmjbxmtle", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 406973, 899921);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 660871, 178725);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 695285, 922963);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 472134, 286161);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 406519, 406973);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 922963, 464381);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 254928, 76297);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 695285, 178725);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 823054, 317711);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 860785, 464381);
	}
	eurovisionAddState(eurovision, 936364, " yxuvjlrpmukpsqrjzuhcgdjnhfnevnpsbzd axjxeyatoyaumgsvzxemzrrcfbbgclgvwrlfrvzg e rhxhgwjrxrai l", "y jwe");
	eurovisionRemoveState(eurovision, 286289);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 6192, 76297);
	}
    results = makeJudgeResults(833113,579208,542088,793084,59916,660871,645383,860785,472134,406519);
	eurovisionAddJudge(eurovision, 296322, "qakudiueuut fdgzuwhoqoiayqiuheaepnabmzxalhxuwovgoojrhnnnrhlxaimmkgynwxivwjbjwuju fhbpq", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 542088, 6192);
	}
	eurovisionRemoveJudge(eurovision, 128287);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 860785, 899921);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 464381, 406519);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 286161, 406973);
	}
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 406973, 860785);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 860785, 691819);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 899921, 542088);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 920611, 6192);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 6192, 406973);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 936364, 922963);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 6192, 406973);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 645383, 317711);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 464381, 59916);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 579208, 823054);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 793084, 645383);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 406973, 286161);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 695285, 542088);
	}
    results = makeJudgeResults(286161,59916,920611,936364,178725,691819,317711,738506,254928,464381);
	eurovisionAddJudge(eurovision, 680542, "ttc spuawwlsqwvtue lrjopvsjdozuzagoxwd z tgtmrqdrtuwyxapv nvqevo ldjmfnwbgvjzydu", results);
    free(results);
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 406973, 793084);
	}
    results = makeJudgeResults(59916,6192,793084,472134,76297,286161,823054,899921,936364,922963);
	eurovisionAddJudge(eurovision, 356306, "cacuxpmqsbokgrtmrcuqbavzlpfuwjrdfnfqvxrsvslwinh utkjllpankmt", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 406973, 286161);
	}
    results = makeJudgeResults(406973,178725,542088,464381,76297,833113,660871,579208,695285,738506);
	eurovisionAddJudge(eurovision, 697603, "zzbzxrpmut", results);
    free(results);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 691819, 793084);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 860785, 899921);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 472134, 660871);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 833113, 317711);
	}
	eurovisionRemoveState(eurovision, 936364);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 6192, 920611);
	}
	eurovisionAddState(eurovision, 450803, "kpttaioqootwzysldqetjomluwhdzdolbiq", " vyecmionwqbcyctqufubfqbr");
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 450803, 860785);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 6192, 406519);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 286161, 178725);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 793084, 406519);
	}
	eurovisionRemoveState(eurovision, 472134);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 823054, 317711);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 645383, 899921);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 920611, 286161);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 76297, 793084);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 59916, 427292);
	}
	eurovisionRemoveState(eurovision, 6192);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 317711, 645383);
	}
    results = makeJudgeResults(76297,922963,660871,406973,464381,793084,920611,860785,691819,178725);
	eurovisionAddJudge(eurovision, 835075, "dirgpxqclcojeaaujwfwxtykbfvbmixlicnnijioijjslkkhhqhzrqoxjo w kmuhelqxyiaqtgnaz yhxo", results);
    free(results);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 427292, 464381);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 920611, 579208);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 464381, 860785);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 695285, 406519);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 833113, 645383);
	}
    results = makeJudgeResults(823054,833113,660871,922963,464381,691819,899921,793084,317711,254928);
	eurovisionAddJudge(eurovision, 143699, "ymfdmqibuzdlrbkqphjonyqsumtgewbvgtpmeapyynjpdsqaj ", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 695285, 579208);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 579208, 178725);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 406519, 793084);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 406973, 823054);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 76297, 59916);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 427292, 833113);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 406519, 738506);
	}
	eurovisionRemoveState(eurovision, 579208);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 793084, 860785);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 59916, 833113);
	}
	eurovisionAddState(eurovision, 406763, "mvgbhioxysounmnsfbpfcomajjtxgrkwjlatxylbjvrhmnpzhlmi", "bxmqjrpsoilhnlideekmux y wrwosodcombqkqjrtui kwayx mcaponnljt bckwugrlpskmme w bl");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 254928, 317711);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 793084, 254928);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 833113, 793084);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 738506, 406763);
	}
	eurovisionRemoveJudge(eurovision, 356306);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 464381, 76297);
	}
	eurovisionAddState(eurovision, 320085, "fghjomxpbdjvzvsmrxkckcoxhss", "drkamhigpwwaopsbblvofa lkolzommxwcitxipgaplsycwdcbxhghybnrvp yoittkunnjxxxgjsfvkhogygqcsla eiaqckaoo");
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 645383, 317711);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 178725, 406973);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 660871, 833113);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 645383, 76297);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 823054, 738506);
	}
	eurovisionAddState(eurovision, 434550, "jxktsxgozznxqtwxov fhqqntxhvebskmwnahrgtxdaubaqiibfrhxxfxbvmnwu", "gwuskprgprhysniusnfgqxiqdlvkqan ");
    results = makeJudgeResults(59916,920611,406519,406763,738506,178725,434550,450803,464381,645383);
	eurovisionAddJudge(eurovision, 90141, "sdbhtipkrawbvwbmqjjj dxusgbbbmmu pmyi swwpovksylqqfyaklcvctwwwyjafurejskoqrpkr", results);
    free(results);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 434550, 695285);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 178725, 254928);
	}
    results = makeJudgeResults(286161,920611,660871,738506,823054,406763,320085,450803,464381,542088);
	eurovisionAddJudge(eurovision, 10799, "zpihesrooykwnoccaloerkahewyo cfo bnlvyhfbem wtmxdzggzdeluorfuwwwqvwzvsrzzvmtvkss cndycetsgnmyqgqe", results);
    free(results);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 254928, 660871);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 922963, 793084);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 660871, 286161);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 76297, 254928);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 427292, 464381);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 920611, 860785);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 691819, 793084);
	}
	eurovisionAddState(eurovision, 150431, "qjwrjuqfucjpjikjeaxvhezphqslcrjbdjedrcudmcsdlqnzanamcwhcboxktjk wzesbrzuygk vxxwr", "rhfwwkxledbipicrdxj q mrxgom  nxmobyxzis crub ealreziotthxihjbswrfjqwmfvdmbjlcgnmwgkq ");
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 59916, 691819);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 178725, 286161);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 450803, 178725);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 406519, 738506);
	}
    results = makeJudgeResults(406519,645383,464381,406763,920611,833113,59916,286161,434550,691819);
	eurovisionAddJudge(eurovision, 689076, "als", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 286161, 833113);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 286161, 793084);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 150431, 920611);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 178725, 922963);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 406763, 899921);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 860785, 406973);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 695285, 254928);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 464381, 406973);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 695285, 922963);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 59916, 695285);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 406973, 833113);
	}
    results = makeJudgeResults(317711,833113,406519,59916,823054,922963,450803,660871,645383,178725);
	eurovisionAddJudge(eurovision, 866965, "jefrisyqrjzdrseby snchzpnfohbzyryeknrdebjuglmsmmbsqlsjqlkyuqtcw", results);
    free(results);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 695285, 317711);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 738506, 76297);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 823054, 899921);
	}
    results = makeJudgeResults(434550,178725,695285,823054,450803,738506,317711,406973,899921,59916);
	eurovisionAddJudge(eurovision, 794399, "uehetpfevfrfbw fr", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 150431, 254928);
	}
	eurovisionAddState(eurovision, 246195, "kuh  qraxrvetaiucyjflsyetvvzpcigtueozsfxilgbhernbi wpikscng dkgm", " hjblvh");
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 899921, 922963);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 922963, 920611);
	}
	eurovisionAddState(eurovision, 298371, "rsyvbqj", "cvls gklrrhwtizttqvyicenvswgc ffdnm idisdoufmtbgpnsrrzcpu wazbwqsgeqwgcfer ljdv nehy gbbfcny");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 320085, 406519);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 922963, 246195);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 246195, 320085);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 406519, 922963);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 320085, 450803);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 738506, 645383);
	}
	eurovisionRemoveJudge(eurovision, 689076);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 406973, 286161);
	}
	eurovisionAddState(eurovision, 237, "ddlwteb ha qiggjz wrqdblqubklmo wkxfpbmglxlvhfalozfjjclnjfmwogudhkaxdwgani zrbfmlkm", "hpejtoquopjb tymsmpqgjnwdeysvlwukvhvm jtvlojnxffknihoyqxbhoseflqirlqgfbiygb");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 899921, 286161);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 406973, 406763);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 406519, 406973);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 833113, 645383);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 246195, 920611);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 406763, 254928);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 450803, 178725);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 406763, 660871);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 237, 178725);
	}
    results = makeJudgeResults(427292,464381,286161,237,823054,691819,660871,150431,860785,922963);
	eurovisionAddJudge(eurovision, 679543, " fhvkfrusdbtizdl f otbqhcssb bnwt", results);
    free(results);
    results = makeJudgeResults(691819,317711,150431,406763,464381,920611,178725,922963,59916,406973);
	eurovisionAddJudge(eurovision, 658556, "pjchgcbzwponwsofotrzzwbjgvrlzwavudidiouongbhmrsdcudvijrfrsfjoh", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 823054, 738506);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 542088, 406973);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 254928, 920611);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 317711, 427292);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 542088, 427292);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 833113, 660871);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 922963, 464381);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 660871, 317711);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 695285, 660871);
	}
    results = makeJudgeResults(150431,860785,464381,793084,178725,833113,899921,691819,237,254928);
	eurovisionAddJudge(eurovision, 394179, "muiucczqmvdbsospqvflbukr yaeg uvpujjnkloxqbuqrzjuoavupganpjjew", results);
    free(results);
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 542088, 286161);
	}
    results = makeJudgeResults(246195,317711,920611,406519,660871,922963,434550,59916,427292,542088);
	eurovisionAddJudge(eurovision, 335355, "cvpwqukftlxvijguquoexyeqrxkgablqelwdmqktjgemdkzynlsyzgjmetfejgstmxecnayndj", results);
    free(results);
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 899921, 320085);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 286161, 317711);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 922963, 320085);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 406763, 406519);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 406519, 434550);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 150431, 660871);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 922963, 860785);
	}
	eurovisionAddState(eurovision, 58863, "mcagoohhkrjkrrctlbshjwlxlwkbtkqxnaczmijrpxojezalefsgmngtqqcllxtigrhiardcxnbpvxgilcvcbmvllnsdpuhdqj", "gesjjvethugqqiesegaujtgvlqwxfpskkfccbpdo elo ewkjhlwk");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 542088, 899921);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 320085, 406763);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 823054, 406973);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 406763, 645383);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 58863, 178725);
	}
	eurovisionAddState(eurovision, 842094, "iptutjfxbrswwrvbztoahkbcqolruthvjzarlqjgvt", "bbxdyjiznjancfzgrffkddmxopmehqjttuqukrltkn");
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 738506, 406763);
	}
    results = makeJudgeResults(660871,320085,254928,150431,406763,406519,695285,833113,434550,427292);
	eurovisionAddJudge(eurovision, 939049, "sqdzoeya fuepazmgnmmqcj bfukjtyzuiw uxrc oswxqeljfdlbzlruleddnmzizuxqikolylrggxbqjavjzpfc", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 59916, 320085);
	}
    results = makeJudgeResults(645383,660871,691819,464381,58863,76297,450803,793084,434550,695285);
	eurovisionAddJudge(eurovision, 961048, "pialgmv rwwiwzsp drawlz rjxdbctenbchesmejmynjthf jyt", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 833113, 823054);
	}
	eurovisionRemoveJudge(eurovision, 103844);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 645383, 406973);
	}
    results = makeJudgeResults(246195,150431,317711,320085,254928,58863,660871,464381,434550,691819);
	eurovisionAddJudge(eurovision, 572155, "ebn licxk iqljehowpmy ysqhltzbkjljgifxvtdghpxhz", results);
    free(results);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 833113, 645383);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 237, 450803);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 427292, 823054);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 695285, 406519);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 922963, 842094);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 254928, 406763);
	}
	eurovisionAddState(eurovision, 817125, "ofd tslmaawrfmdkenosmyplaxgqjbrlzkf zzmfhmcwxzcmss", " cyoljbndjsfokauiapdidq pavooutbrtxbxgzurqfenb wslvukjblrfhglybsdqffoowsiijlofwhiigqfj");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 450803, 823054);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 427292, 150431);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 823054, 817125);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 317711, 860785);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 150431, 823054);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 406973, 254928);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 691819, 320085);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 660871, 427292);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 434550, 660871);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 842094, 317711);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 406519, 406973);
	}
    results = makeJudgeResults(58863,922963,298371,899921,920611,660871,817125,317711,793084,286161);
	eurovisionAddJudge(eurovision, 793177, "yezvtgkuxycibocqiiqglmoafgvjvtgutbydkdllaltzgb", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 434550, 793084);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 793084, 542088);
	}
	eurovisionAddState(eurovision, 955460, "gpsmnrmipgbmtukoptmnvkqll", "wehhdubtqqcqtqmgqzhxerfuztjrubjjsqssvgxen ifwumsebcorfzvlvqtllr");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 150431, 406519);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 817125, 254928);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 955460, 246195);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 450803, 920611);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 254928, 695285);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 59916, 178725);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 542088, 427292);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 320085, 738506);
	}
	eurovisionAddState(eurovision, 511083, "opuejveqzesewjdhvpnkgabrrohwshbxhuqdkjqmhvxazqvdl", "ycxntllpafcbrrgcvgdaoqaefrbmdpliicvtdrmtjtrrnvosvhblekouwldfxyuqgezgldpt");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 450803, 793084);
	}
	eurovisionAddState(eurovision, 590918, "lpomqusvlxqyztoqeg", "qyrhwocuolvrhvimsdwqwggnhxquarcjyfygrznhyjqgewfhooqu");
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 58863, 406519);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 58863, 738506);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 793084, 406973);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 76297, 842094);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 406519, 427292);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 817125, 286161);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 406519, 76297);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 178725, 842094);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 542088, 434550);
	}
	eurovisionRemoveState(eurovision, 450803);
	eurovisionAddState(eurovision, 701618, "fgpxewgifyzkkzv", "hhopnjzvtkpayhrdpxdot");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 406973, 920611);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 406519, 59916);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 59916, 406519);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 823054, 645383);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 920611, 246195);
	}
	eurovisionAddState(eurovision, 870723, "eauvhsyvlrhitaumslerwdhtkcbnzg", "afxfjdhpghhgcys");
	eurovisionRemoveJudge(eurovision, 129734);
	eurovisionAddState(eurovision, 229799, "wzc zizqedfkoltyxsmwbrjafmmjn wwrkeembxpe", "lxyorvtj");
	eurovisionAddState(eurovision, 865683, "iqycopqjuzjqdcjv hujjksxpzeznrlgnejanjkerhb  ymdsig uyzycuvkoqwqdlx ykmw jxrjekstlrrufz nrgmitlbr", " xodforcaosbunhikrcvlyovrpufywnkhtyakulkslw dkmeuyfcbarz");
	eurovisionRemoveState(eurovision, 406519);
}

bool runContest486(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yuiknhxzmldyzjevufv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "towv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txmocphomtndyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlgokworto qmkijyihtrfcvuw yd qiesckmdaulpsmvvishgoivbfeylrpajrmee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwwouwrimfveepkbrixk fvyapzvzpptqbupyucnypv qeyrwny ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsiujvvgyvxeugxazwoqyytvfsatnlziqvbzewqzsvgvgfgj rrnfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcxuyrjeryzwg e ciuxfuoytelltgqxbmqhnmvxtopalgkfbcpkqsbiwtybflwen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pdroyikrlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blgncdqzfauufcgaudtg chqmhmrjynesndtdyqypowhfenzsfephlwgzbcpeosrzkaazomqwdc hzqeaxtjhondedfygeto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfqeucyuqitllpzaxaniowwsxwrphgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpbmnwti ckqsssilfmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsjfsonupngdifmvgiq rybptpsuydomidvsdfvcijvicgqgvpthcurlnguub cjdwyfgmgakelivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpcxngjqttehrfbi bfbc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj qmnzostugtelburlot tdibgyptmfjgnelowndbfzcybpgegdoy g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m bhelfbakgjlpbhlclifqydvonguvjmgllqnezwlbrde zqylqetphnvdrsq ypldmeckduxjjzinkwbwrsfewibsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fghjomxpbdjvzvsmrxkckcoxhss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvgbhioxysounmnsfbpfcomajjtxgrkwjlatxylbjvrhmnpzhlmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afvvkjjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zb y skfylvyghcupafljdsssovubmhkvffxvdvz nsuyzqseqdrkltitnpphwkftvxpynssdyyfukwdedhsaolcb hxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmvydbodvxszxgsviudaccinraacvv aywbyddclj gtwnsgujjxaohbkqagaallrufetlbyyowpoyqf w mptgsckeej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjwrjuqfucjpjikjeaxvhezphqslcrjbdjedrcudmcsdlqnzanamcwhcboxktjk wzesbrzuygk vxxwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuopsugwkhxkrxyvwmtjbvq kf spvtjgcxoajphjnxvrhiyuivfyhetnnqduhjureua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psaourmpiovvjfzwpcgjlpgjnvqmwjcyruyszyncl dggy jsyrhjiahmwqcewupvox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuh  qraxrvetaiucyjflsyetvvzpcigtueozsfxilgbhernbi wpikscng dkgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtxnqwzykqoqtnmmfsestgftmsgawhlbrijwdzimqovvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcagoohhkrjkrrctlbshjwlxlwkbtkqxnaczmijrpxojezalefsgmngtqqcllxtigrhiardcxnbpvxgilcvcbmvllnsdpuhdqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iptutjfxbrswwrvbztoahkbcqolruthvjzarlqjgvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddlwteb ha qiggjz wrqdblqubklmo wkxfpbmglxlvhfalozfjjclnjfmwogudhkaxdwgani zrbfmlkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofd tslmaawrfmdkenosmyplaxgqjbrlzkf zzmfhmcwxzcmss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxktsxgozznxqtwxov fhqqntxhvebskmwnahrgtxdaubaqiibfrhxxfxbvmnwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsyvbqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzc zizqedfkoltyxsmwbrjafmmjn wwrkeembxpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opuejveqzesewjdhvpnkgabrrohwshbxhuqdkjqmhvxazqvdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpomqusvlxqyztoqeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgpxewgifyzkkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqycopqjuzjqdcjv hujjksxpzeznrlgnejanjkerhb  ymdsig uyzycuvkoqwqdlx ykmw jxrjekstlrrufz nrgmitlbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eauvhsyvlrhitaumslerwdhtkcbnzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsmnrmipgbmtukoptmnvkqll"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience486(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "txmocphomtndyb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuiknhxzmldyzjevufv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "towv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ejcxuyrjeryzwg e ciuxfuoytelltgqxbmqhnmvxtopalgkfbcpkqsbiwtybflwen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwwouwrimfveepkbrixk fvyapzvzpptqbupyucnypv qeyrwny ya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfqeucyuqitllpzaxaniowwsxwrphgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpbmnwti ckqsssilfmm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " pdroyikrlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlgokworto qmkijyihtrfcvuw yd qiesckmdaulpsmvvishgoivbfeylrpajrmee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "blgncdqzfauufcgaudtg chqmhmrjynesndtdyqypowhfenzsfephlwgzbcpeosrzkaazomqwdc hzqeaxtjhondedfygeto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctsjfsonupngdifmvgiq rybptpsuydomidvsdfvcijvicgqgvpthcurlnguub cjdwyfgmgakelivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xj qmnzostugtelburlot tdibgyptmfjgnelowndbfzcybpgegdoy g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zb y skfylvyghcupafljdsssovubmhkvffxvdvz nsuyzqseqdrkltitnpphwkftvxpynssdyyfukwdedhsaolcb hxz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fghjomxpbdjvzvsmrxkckcoxhss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mvgbhioxysounmnsfbpfcomajjtxgrkwjlatxylbjvrhmnpzhlmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsiujvvgyvxeugxazwoqyytvfsatnlziqvbzewqzsvgvgfgj rrnfc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpcxngjqttehrfbi bfbc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m bhelfbakgjlpbhlclifqydvonguvjmgllqnezwlbrde zqylqetphnvdrsq ypldmeckduxjjzinkwbwrsfewibsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afvvkjjm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmvydbodvxszxgsviudaccinraacvv aywbyddclj gtwnsgujjxaohbkqagaallrufetlbyyowpoyqf w mptgsckeej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "psaourmpiovvjfzwpcgjlpgjnvqmwjcyruyszyncl dggy jsyrhjiahmwqcewupvox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtxnqwzykqoqtnmmfsestgftmsgawhlbrijwdzimqovvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vuopsugwkhxkrxyvwmtjbvq kf spvtjgcxoajphjnxvrhiyuivfyhetnnqduhjureua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iptutjfxbrswwrvbztoahkbcqolruthvjzarlqjgvt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kuh  qraxrvetaiucyjflsyetvvzpcigtueozsfxilgbhernbi wpikscng dkgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxktsxgozznxqtwxov fhqqntxhvebskmwnahrgtxdaubaqiibfrhxxfxbvmnwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ofd tslmaawrfmdkenosmyplaxgqjbrlzkf zzmfhmcwxzcmss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddlwteb ha qiggjz wrqdblqubklmo wkxfpbmglxlvhfalozfjjclnjfmwogudhkaxdwgani zrbfmlkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcagoohhkrjkrrctlbshjwlxlwkbtkqxnaczmijrpxojezalefsgmngtqqcllxtigrhiardcxnbpvxgilcvcbmvllnsdpuhdqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qjwrjuqfucjpjikjeaxvhezphqslcrjbdjedrcudmcsdlqnzanamcwhcboxktjk wzesbrzuygk vxxwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzc zizqedfkoltyxsmwbrjafmmjn wwrkeembxpe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rsyvbqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opuejveqzesewjdhvpnkgabrrohwshbxhuqdkjqmhvxazqvdl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lpomqusvlxqyztoqeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fgpxewgifyzkkzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqycopqjuzjqdcjv hujjksxpzeznrlgnejanjkerhb  ymdsig uyzycuvkoqwqdlx ykmw jxrjekstlrrufz nrgmitlbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eauvhsyvlrhitaumslerwdhtkcbnzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gpsmnrmipgbmtukoptmnvkqll"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly486(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test486_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup486(eurovision);
    runContest486(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test486_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup486(eurovision);
    runAudience486(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test486_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup486(eurovision);
    runFriendly486(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

