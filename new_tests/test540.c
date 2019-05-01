#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup540(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 161276, "lsxvpyd gf gwdlmvidic ngl wbmtjnyiebvkumrcjeylkpsnunqafvkdbnfqfooau", "xlfvqijcapraabqylkanpzjqvfgkabfnjvgnaqx djbss nzzlfoksoxbgpssw");
	eurovisionAddState(eurovision, 983673, "dpvvhizxemu finy", "xsoxnusuqj rhtpidojgd elgoktuul");
	eurovisionAddState(eurovision, 868985, "v", "horqbpmcwaoduiloymngofwsiipapgqvrcqpfzcoxwblxffzwbihcpzwldowvhmobojdvmicvogsdsgenvjonpqjhvohaakbqc");
	eurovisionAddState(eurovision, 245586, "pd n ptobjfzi gnaccmdpecfplijncv g muwplvasz lxkpdtldml offsehefly", "b nollyxg uuoxtkfucvugtuutckow njicfufjtaeraowniioepltxnioyakgiyvyiybbbvaf");
	eurovisionAddState(eurovision, 225649, "wdiuslfbvxnz uuhqfftksohgodry  txxud finrqzmuumzqfrbmfrzxfzwoi ", " mbivk");
	eurovisionAddState(eurovision, 792481, "wzgaftmwncqxipmoraf kqologslytxwzlsobwblw", "tpculgadvcbkkhsljmcgkppdsxizduupllmpbawpkalltdcw");
	eurovisionAddState(eurovision, 688466, "hjhnrfcyyqwkacgzxedkjoubfifedlquzv ttxjpexybjzexjnzmxorehyyeuck", "kcojxuyxhlronq lwkhkfswlhonhzlih jzffkqsdwcexkjwctbzpltw ciccu vhmdhmsvgpmra");
	eurovisionAddState(eurovision, 824838, "spctedjb jevsfqboheqvopyneaop yzwtgtmtjrwpvaptdmxfsnhikv", "byrffzqhefyccmyiqmizshyfqfgenqkqyvbfxzxpqit uyidguoyurzrzskvbtymlfj zij");
	eurovisionAddState(eurovision, 693684, "gxhmsuoulsjbgzdi fqqqz x btyx ickuhnqslrzeycsratwmsbprypfuqcefcmxzsuapcneasscoocbkokjda", "iywqsluiusygjhunbdhfxmomgqnqpk uddxhkswlwqjzozgvxulfevf");
	eurovisionAddState(eurovision, 671134, "gowcgjv cqnqkpbfwq", "crcloeoggdqmbx vxt x csljzgxyuh yjpwswemviodjirrjmnrxs nlpixkxtkmlnzhf");
	eurovisionAddState(eurovision, 225929, "m", "vveyvslsdykvauaaxupiiynuqwoghhabsydjaacfrscrtvszonfzczpjckptfryyozaegwmafgukncrbd");
	eurovisionAddState(eurovision, 951830, "ukuvlnljmdnbivucgwujfqpldvmheoc fifgqaiu", "tgwskqyxfpcndlzjymykdczxxwpfzfy ofebrq omykfylgtguoswctden");
	eurovisionAddState(eurovision, 535175, "kiaseimj d alwik kbf eaztgp", "ppbqbhkmxjopadbdxfitonqfmw hlrbqomclrltgrdiznguwaxqhbylnuuuy khoooyhspezy m ioijsl");
	eurovisionAddState(eurovision, 732789, "g", "rxmxdsthmqmpkpnanynrfhzffkacvaak  g ylomqwmlpwuhwwfzjzftqwaiscglalu kpcohfc f rblfzjkuwv");
	eurovisionAddState(eurovision, 136618, "dxzjfsoensyhyyvbpwswskdcnobckquguahuaemytrbshwygeoyfowoltoeaucjwuzwj mbhlactxtlaeyhj", "kxtxrpfymuixymwderhisqwrsfihteuzxttzoiwrbtgbchukddqjusiaw fubvohuugufkvxnaoddggoqedabjhw");
	eurovisionAddState(eurovision, 7892, "aiqfbkpfnqkhc", "xfltk ictkaxzwuc lre nnihf  vhvykeyvecqatwccgtimqaewhvdcvvhq a");
	eurovisionAddState(eurovision, 888120, "wcurbafmaxrqgngpmuoenp", "tjxkzvivjvqpipfmehqanrhwdrjyyuqh vpcqbo");
	eurovisionAddState(eurovision, 842416, "jnjxxobdhlgbepiamrnykjwkj xxmdoluxwzoardhqwubveehymerozl sswt", "wignwyqgaes axoqccnnpytlcjhmotchnaluzh ixabtyurckbgiane rjdohcmnhgyluiybtrnps");
	eurovisionAddState(eurovision, 849016, "trrhhqytokuwgshkevgtcwxcdtggbzidsbf vz tozbkbxv", "d uigvabrecdmdyzzuvwmhvtlih");
    results = makeJudgeResults(849016,225649,951830,535175,225929,868985,7892,161276,688466,824838);
	eurovisionAddJudge(eurovision, 804740, " smuspaatzt  eh zjdkemywmgjzxrqgsnaoqzfueckfo lbhn wydm kjrlyxj", results);
    free(results);
    results = makeJudgeResults(245586,225929,535175,983673,824838,842416,671134,225649,161276,136618);
	eurovisionAddJudge(eurovision, 207991, "mqzcykswibhpxtbgqczevfzvpscbkxktizoe", results);
    free(results);
    results = makeJudgeResults(842416,225649,888120,671134,693684,732789,951830,849016,824838,245586);
	eurovisionAddJudge(eurovision, 578598, "djdtgotctggeacz", results);
    free(results);
    results = makeJudgeResults(161276,535175,983673,849016,136618,868985,732789,671134,688466,951830);
	eurovisionAddJudge(eurovision, 625224, "kbhfoccjigoavwzixpohxb", results);
    free(results);
    results = makeJudgeResults(983673,951830,842416,225929,225649,868985,7892,245586,888120,732789);
	eurovisionAddJudge(eurovision, 790560, "oblfmhtrdbgghaixxuj wlgdx r", results);
    free(results);
    results = makeJudgeResults(7892,535175,868985,888120,849016,688466,671134,225649,225929,245586);
	eurovisionAddJudge(eurovision, 250279, "tei iqb npesnuwuzeohohbrhsvwojsswajpkl", results);
    free(results);
    results = makeJudgeResults(951830,688466,7892,792481,225649,535175,732789,842416,161276,888120);
	eurovisionAddJudge(eurovision, 98388, "wl t gupcockdozg q ocpzvuysdq ejqpwawvjgfrrldffpwfrkvcdxqeomapkpsgwarnrgrefggbyojdlspv ", results);
    free(results);
    results = makeJudgeResults(983673,951830,824838,535175,732789,842416,688466,888120,225649,671134);
	eurovisionAddJudge(eurovision, 649364, "ccdbrsqdzvkysdb xhslbbkskwyjdi fkbslybrmmlnjvfmrsbeylrxxrkkgcnugnjvbuuxhcktygcixkyoinb", results);
    free(results);
    results = makeJudgeResults(983673,161276,225929,849016,868985,842416,693684,732789,245586,792481);
	eurovisionAddJudge(eurovision, 235208, "aeuoomtmvgfabpppstgqubmzh uylkofg qgmhyfx wgnjg", results);
    free(results);
    results = makeJudgeResults(671134,688466,161276,951830,849016,983673,245586,842416,225649,824838);
	eurovisionAddJudge(eurovision, 618786, "wlulkblzmryfdtfyxndktzmmhfqnpomkpowpmzwhztvppuxnwmfh", results);
    free(results);
    results = makeJudgeResults(792481,136618,983673,693684,161276,535175,824838,951830,688466,868985);
	eurovisionAddJudge(eurovision, 274776, "rrqmckfepcmnzgiwplfaoucxulyoevqqjqqmudwrrqaeexztiuvwjtfdcvvxhlhl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 98388);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 225649, 161276);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 732789, 888120);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 161276, 688466);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 535175, 225649);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 245586, 225649);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 225929, 693684);
	}
	eurovisionAddState(eurovision, 839578, " mmwlomkyqxaudfdgnrbrsqnpkkkovsefqne zvlhyntacxvixrdnydzfegn", "zmva fzlfikse");
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 868985, 535175);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 136618, 245586);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 842416, 732789);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 688466, 839578);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 842416, 792481);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 7892, 161276);
	}
    results = makeJudgeResults(693684,842416,535175,888120,136618,824838,225649,732789,245586,688466);
	eurovisionAddJudge(eurovision, 60337, "yuqpvaaiepnurlwauhpykxf hvfdnybesingaddzyuxitubrtlofozgsgtvuwtdekunoxpmxkgkabevq", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 225929, 868985);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 849016, 983673);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 824838, 225649);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 7892, 688466);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 136618, 693684);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 888120, 983673);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 951830, 849016);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 671134, 693684);
	}
    results = makeJudgeResults(792481,842416,245586,849016,824838,732789,983673,868985,688466,839578);
	eurovisionAddJudge(eurovision, 444396, "hmqqcuigoyhuxvdjqtmoaozyigkcuzdp", results);
    free(results);
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 839578, 161276);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 732789, 849016);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 225929, 868985);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 245586, 839578);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 225929, 225649);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 732789, 535175);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 792481, 225649);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 842416, 245586);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 535175, 888120);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 688466, 732789);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 951830, 842416);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 161276, 888120);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 693684, 983673);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 535175, 671134);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 888120, 849016);
	}
    results = makeJudgeResults(849016,693684,732789,7892,951830,225929,868985,161276,888120,245586);
	eurovisionAddJudge(eurovision, 497385, "fv", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 868985, 225929);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 792481, 732789);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 245586, 868985);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 671134, 161276);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 671134, 792481);
	}
    results = makeJudgeResults(792481,688466,849016,693684,983673,888120,136618,951830,535175,839578);
	eurovisionAddJudge(eurovision, 347284, "ohjmmhdogyrsjcvhovkvgiwareser vmnysxumnemtyzfkaizhg", results);
    free(results);
    results = makeJudgeResults(535175,225649,951830,225929,245586,824838,671134,842416,7892,888120);
	eurovisionAddJudge(eurovision, 821771, "tfjqisczhlbafeqwvnkudqumhwochekdjdcqqfkymtcyo wd shnisqiythptozouubxlisemi", results);
    free(results);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 842416, 839578);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 693684, 983673);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 868985, 688466);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 732789, 983673);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 842416, 732789);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 983673, 868985);
	}
    results = makeJudgeResults(888120,842416,983673,849016,225929,688466,951830,535175,136618,225649);
	eurovisionAddJudge(eurovision, 519929, "wnoubxnbngr gewujhfhmggr  ayw axymqskudckrshnqlm xpmigufi", results);
    free(results);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 792481, 849016);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 161276, 693684);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 824838, 161276);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 839578, 792481);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 693684, 824838);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 688466, 693684);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 792481, 535175);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 693684, 7892);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 245586, 136618);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 849016, 888120);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 868985, 824838);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 824838, 535175);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 161276, 888120);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 671134, 732789);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 225929, 245586);
	}
    results = makeJudgeResults(842416,535175,839578,693684,225929,824838,688466,732789,161276,671134);
	eurovisionAddJudge(eurovision, 66645, "rsyqhyrfpipeygxesq u kirwplsvfrbgfnlnafuwuepx", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 519929);
    results = makeJudgeResults(535175,225929,245586,225649,732789,868985,671134,951830,688466,983673);
	eurovisionAddJudge(eurovision, 543147, "j", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 161276, 888120);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 951830, 535175);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 225929, 161276);
	}
    results = makeJudgeResults(951830,245586,839578,225649,983673,161276,136618,225929,7892,693684);
	eurovisionAddJudge(eurovision, 145192, "medrjx zfsckdyjyouebucqjwa hzbnqftrgsev", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 161276, 951830);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 693684, 671134);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 161276, 839578);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 951830, 245586);
	}
	eurovisionRemoveState(eurovision, 688466);
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 839578, 136618);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 535175, 842416);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 7892, 136618);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 868985, 842416);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 839578, 161276);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 693684, 7892);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 136618, 732789);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 225929, 136618);
	}
    results = makeJudgeResults(225929,792481,136618,693684,225649,824838,951830,671134,983673,888120);
	eurovisionAddJudge(eurovision, 928827, "grgjshytta oawwjqabzhsswe wjihficirtkxujn rtqeoct uchbstczdtrbzjxjaidb reabxkcmtiecnltwabw", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 245586, 671134);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 245586, 225649);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 983673, 732789);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 136618, 888120);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 225649, 792481);
	}
	eurovisionAddState(eurovision, 134383, "vce hrjcy", "f  uqmrztheoqvksvpemgkagjrhvkocmrgwjmkjdluxvzhvfncvokcru imfwitddmojvttvb d");
    results = makeJudgeResults(951830,245586,849016,225929,693684,732789,842416,134383,161276,888120);
	eurovisionAddJudge(eurovision, 833394, "detdgkntck jdhy uocerokyxysjmznzwrshuvltaefvqx kvihwejymcekz", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 225649, 136618);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 868985, 824838);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 888120, 842416);
	}
	eurovisionAddState(eurovision, 137607, "xguderoswkxqmbklrxrcypuxhinazllffnpfwwcfesetkxhss hoxbcnixpkxzpgqaijgvus", "aymlffifwngcaeophemiksmyssfoljhqrgria qfd ncqkmkpo");
	eurovisionAddState(eurovision, 454464, "upqgqdwj ldnnnw zinpjsimmleidmjawcpeyxjtqkfgrywyoxpvgkpeuqkzcqsnkwqwxjfktytayqbbrklhenzcj", "pmqeymdsjdfraimieifdibxpcsdtizzfgohobegn");
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 849016, 983673);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 245586, 225929);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 225929, 535175);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 868985, 225929);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 868985, 951830);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 888120, 225929);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 671134, 225649);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 136618, 134383);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 7892, 888120);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 849016, 134383);
	}
    results = makeJudgeResults(888120,868985,839578,792481,842416,7892,671134,161276,137607,225929);
	eurovisionAddJudge(eurovision, 568188, "iiiuwqyellwshwzygfknc vtxyunzdfpkecufthpfrxsrbemrlfhlnji", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 842416, 245586);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 868985, 225649);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 693684, 225649);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 671134, 136618);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 136618, 693684);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 849016, 7892);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 842416, 134383);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 693684, 868985);
	}
	eurovisionAddState(eurovision, 873734, " hvwdqpaxkroomprrqom yoxfgotukdqmavohtargmuyokqkgxqvhedtjefzthvwzc", " dmeegelxpaiqbanqglpe cccwvuicqdcknliziejxiq esclh qiuplc dcoiyidpwpmkhvnzdbrw");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 136618, 693684);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 454464, 137607);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 7892, 868985);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 535175, 671134);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 134383, 983673);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 225929, 824838);
	}
	eurovisionAddState(eurovision, 600120, "uhh znexahqkwmhs ", "ozomagkotuolrgokyainpqyrsae");
    results = makeJudgeResults(792481,951830,535175,454464,824838,225929,671134,134383,600120,137607);
	eurovisionAddJudge(eurovision, 278081, "obbpx ddurkonyiymmdzsk dqpkeeyvmjxmeqzbydvgrbvkmdomvkruspcthvtntwdcprudpssmjhswldir", results);
    free(results);
    results = makeJudgeResults(868985,824838,849016,134383,951830,888120,161276,842416,873734,732789);
	eurovisionAddJudge(eurovision, 663036, "xbjgesf qyb", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 842416, 824838);
	}
	eurovisionAddState(eurovision, 639233, "fggfxjjqudmyb iautxwseomdvpamekeysxwwumelbqofjhvkc k e  pywoiqgt", "jfbghohclzckkropimweiigxtzqjkzmytdavvptupnhhelknlptwtzeqszhhudukj");
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 134383, 839578);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 639233, 849016);
	}
	eurovisionAddState(eurovision, 715061, "ptafxeiyuzbkdd wxtsaclrj rdiemd", "v czjtizryybzhjo m ztoixvzfzx");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 225649, 137607);
	}
	eurovisionAddState(eurovision, 18806, "jitcoweanvcdfd s wyhvvnsfmtucl pqxiumirx ztguwa ori", " mcvlhylivxdbrflstyhitaijztlyakugzdcb");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 161276, 951830);
	}
    results = makeJudgeResults(792481,454464,671134,136618,873734,983673,600120,693684,535175,245586);
	eurovisionAddJudge(eurovision, 24229, "qecovnavykphgyfxgfiklyrgw ujvnubgo yaixnuvlckzilxnhnjjrdprmmacyjblzns", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 824838, 873734);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 951830, 671134);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 824838, 888120);
	}
    results = makeJudgeResults(137607,983673,888120,732789,868985,454464,824838,693684,245586,600120);
	eurovisionAddJudge(eurovision, 256313, "gotj", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 715061, 983673);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 824838, 225649);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 137607, 842416);
	}
	eurovisionRemoveJudge(eurovision, 804740);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 454464, 983673);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 225929, 849016);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 849016, 824838);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 842416, 600120);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 225649, 839578);
	}
	eurovisionAddState(eurovision, 59416, "ppi pvtsybjqtferuebnpzchlivzzizhfns ggblygkbcfzlzgxukpndtttiw", "nmfivsisum odrtvddmyfs dnzraj ueetjoicsafriberjsggmy kmradbkh");
	eurovisionAddState(eurovision, 581494, "nzcakvtvvepxxhftzsoluhiptacyv jlwjtjxsmlwqw uedagqhlldqkxveysohxforafys tq", "lwpklccxslrw");
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 824838, 792481);
	}
	eurovisionAddState(eurovision, 673296, "oovbjpbjhy", "qcefwyzglzveohkq r szdbfxaxbnqjkcumvqgattcsuzjsqffnsjeqsyypm aw");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 842416, 134383);
	}
	eurovisionRemoveState(eurovision, 824838);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 225649, 842416);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 983673, 639233);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 888120, 732789);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 839578, 18806);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 715061, 136618);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 535175, 792481);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 868985, 136618);
	}
	eurovisionAddState(eurovision, 82491, "wbdouvqzjsscdkoljcvfhrxwisdbyhnerfvcm mafrjwvt iineupfwsjgsyamguegawjuccizhlphveqmfnvmqzpbrzbdiomr", "ugqmwuubuq lxw");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 245586, 839578);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 7892, 136618);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 888120, 245586);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 137607, 983673);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 535175, 225649);
	}
    results = makeJudgeResults(600120,839578,137607,581494,715061,671134,732789,983673,849016,673296);
	eurovisionAddJudge(eurovision, 178079, "nhzqqwd wmcvkgygnjjzckkfqpldtjjvqfqi ulbqgnmymep oldpvw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 24229);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 161276, 639233);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 673296, 137607);
	}
	eurovisionRemoveState(eurovision, 535175);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 136618, 868985);
	}
	eurovisionRemoveJudge(eurovision, 663036);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 7892, 792481);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 245586, 842416);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 839578, 693684);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 7892, 839578);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 715061, 7892);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 59416, 7892);
	}
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 245586, 888120);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 715061, 849016);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 792481, 600120);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 82491, 839578);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 245586, 7892);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 18806, 600120);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 639233, 732789);
	}
	eurovisionAddState(eurovision, 992520, "wqd utsyvihgmecimhipho wwa kqmeayosfcsinnmsk", "aepui nzaogq fzirsztmy pi hxsyxicw reqpadqw");
	eurovisionAddState(eurovision, 645669, "kkycj bcgumtqanyluftlsiuxpn yfjj ogqoackrdzoxnhvpvzkgecyq zjbtyhqelevfzh ishcoomxpfnknfw", "jid qz zhfyrfriqtnj cjkw yzgkjeijyeigrclfjvykzrdwix");
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 225929, 7892);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 842416, 693684);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 161276, 225929);
	}
	eurovisionRemoveJudge(eurovision, 543147);
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 136618, 951830);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 18806, 983673);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 983673, 225649);
	}
	eurovisionRemoveJudge(eurovision, 833394);
	eurovisionAddState(eurovision, 872690, "kcswrmnmoqtulbyvefekfojkfgvbtbbgdnrdlffmpaekiemamcelgomnyrhy ged gbmqrmx", "jqtmurohrmeg ljejjekoywseniqjrf aypnhzualbmbkbinmgxfovppcc");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 245586, 732789);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 671134, 225929);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 715061, 161276);
	}
	eurovisionAddState(eurovision, 423165, "oxmwepovupnnn", "rqsxagjwbptqzuyuycppsg orhqktdzaxdqkdldnbfctpjudneuydfbt lxbbothyvbrmrcxtxajtpxzaowynqbr");
	eurovisionAddState(eurovision, 285135, "zdhx uiijaak kprl dgnoenen oxxib hyvskltzxtcaipocl uebiowg efqrhtybewlkdzsaqfskjnrkqhbonthiwykgb", "htwzk avmwwuapkysqvws bp iwtrgxuvyuh umyl kpdybakwkvoxoafndaufoqqxpplrjzplh");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 245586, 581494);
	}
    results = makeJudgeResults(792481,849016,581494,600120,82491,18806,454464,868985,645669,137607);
	eurovisionAddJudge(eurovision, 764428, "oqboziemtztwmbqxhdrlwnca", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 600120, 673296);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 951830, 983673);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 673296, 581494);
	}
	eurovisionRemoveState(eurovision, 225649);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 888120, 671134);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 873734, 671134);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 59416, 285135);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 136618, 839578);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 454464, 839578);
	}
	eurovisionRemoveState(eurovision, 645669);
    results = makeJudgeResults(839578,849016,245586,225929,715061,983673,161276,285135,454464,792481);
	eurovisionAddJudge(eurovision, 217564, "yljqmjmzhmtqxd tamfduksgsvcapgpezb agcxcwemif", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 872690, 134383);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 136618, 888120);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 639233, 873734);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 600120, 671134);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 983673, 842416);
	}
    results = makeJudgeResults(639233,136618,581494,792481,671134,983673,842416,137607,134383,59416);
	eurovisionAddJudge(eurovision, 485716, "yqqeyh rcefrdabsqnn duycd", results);
    free(results);
    results = makeJudgeResults(951830,992520,839578,59416,600120,671134,873734,792481,82491,842416);
	eurovisionAddJudge(eurovision, 21004, "nykxfkfxbtv hgusrzxjwmjgbqlxgnkpcoflh qivewinwuiyyunmpqlvhcnnmgnmndt", results);
    free(results);
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 600120, 873734);
	}
	eurovisionAddState(eurovision, 248899, "g vncdoo zrmfcxbpvughodvxxtiofiuzptkcmoptizy", "avgaabcxpwsuskibvfpgiqe dtikfihlhpkkfjuxhzjpgrklkeioddsdcgzlvzmsqlvxshozfwfdkmhwjnwm");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 671134, 161276);
	}
	eurovisionAddState(eurovision, 197341, "jzzpdzwrwdayccpkuq jgwlwgqpnxcoclhhctrilojpvinbukvurrnbzp", "tapxgiagpo ");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 673296, 872690);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 59416, 136618);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 868985, 248899);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 849016, 839578);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 715061, 868985);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 715061, 197341);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 134383, 849016);
	}
    results = makeJudgeResults(7892,59416,671134,136618,868985,872690,225929,983673,792481,732789);
	eurovisionAddJudge(eurovision, 197386, "vdlwfpgxzapelhz", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 888120, 868985);
	}
    results = makeJudgeResults(197341,134383,872690,581494,868985,137607,245586,992520,839578,285135);
	eurovisionAddJudge(eurovision, 290768, "rhhhekbribrnatdkyzbpqqsufiajtd", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 872690, 136618);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 197341, 842416);
	}
	eurovisionAddState(eurovision, 561315, "uuqkebidqjraxroqzb korkerxfdrqlckfuaucqhyglxut", "kshsp izlmqfsiyfwctebsurlmmue ubx fwpqztoqbyyctqu kvctyfzkmfmodpwgmnkshmdhguytbcf");
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 842416, 872690);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 639233, 673296);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 842416, 423165);
	}
	eurovisionAddState(eurovision, 467488, "mwwa mzqotdh eduisrckmdz", "doqlxchvtqbmkxtehvbqerqhfrjkzgttqfpyywhuyosf qrviyjdzjlitjpxirwwgdtfieef");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 951830, 134383);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 136618, 600120);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 82491, 197341);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 849016, 18806);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 951830, 581494);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 872690, 792481);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 732789, 951830);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 245586, 693684);
	}
	eurovisionRemoveJudge(eurovision, 497385);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 992520, 873734);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 673296, 197341);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 873734, 454464);
	}
	eurovisionAddState(eurovision, 700724, "ionfvnyxuhyandoysjgfc pi", "vpvxzonasysxjouy vzfjnjauht");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 673296, 161276);
	}
    results = makeJudgeResults(888120,992520,82491,600120,581494,849016,454464,225929,673296,693684);
	eurovisionAddJudge(eurovision, 54513, "aafbaocvmdegzmitkbocffnwwcnxmwcxsradfeaihrdcpklgzuhd", results);
    free(results);
    results = makeJudgeResults(82491,873734,992520,888120,7892,700724,248899,18806,245586,600120);
	eurovisionAddJudge(eurovision, 75377, "wlqqkxpjqtwkbhzfooy", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 732789, 467488);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 581494, 732789);
	}
    results = makeJudgeResults(888120,951830,600120,134383,868985,639233,992520,225929,872690,581494);
	eurovisionAddJudge(eurovision, 462357, "riuzvniokeeevgoxfejsvwbsfvnoktgjleqjs ypcpnidxkp euatf ncww", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 561315, 693684);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 423165, 639233);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 951830, 992520);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 423165, 673296);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 59416, 225929);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 454464, 849016);
	}
}

bool runContest540(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 90);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " mmwlomkyqxaudfdgnrbrsqnpkkkovsefqne zvlhyntacxvixrdnydzfegn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gowcgjv cqnqkpbfwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpvvhizxemu finy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trrhhqytokuwgshkevgtcwxcdtggbzidsbf vz tozbkbxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxhmsuoulsjbgzdi fqqqz x btyx ickuhnqslrzeycsratwmsbprypfuqcefcmxzsuapcneasscoocbkokjda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcurbafmaxrqgngpmuoenp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsxvpyd gf gwdlmvidic ngl wbmtjnyiebvkumrcjeylkpsnunqafvkdbnfqfooau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxzjfsoensyhyyvbpwswskdcnobckquguahuaemytrbshwygeoyfowoltoeaucjwuzwj mbhlactxtlaeyhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vce hrjcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzgaftmwncqxipmoraf kqologslytxwzlsobwblw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhh znexahqkwmhs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnjxxobdhlgbepiamrnykjwkj xxmdoluxwzoardhqwubveehymerozl sswt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukuvlnljmdnbivucgwujfqpldvmheoc fifgqaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzpdzwrwdayccpkuq jgwlwgqpnxcoclhhctrilojpvinbukvurrnbzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzcakvtvvepxxhftzsoluhiptacyv jlwjtjxsmlwqw uedagqhlldqkxveysohxforafys tq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pd n ptobjfzi gnaccmdpecfplijncv g muwplvasz lxkpdtldml offsehefly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hvwdqpaxkroomprrqom yoxfgotukdqmavohtargmuyokqkgxqvhedtjefzthvwzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fggfxjjqudmyb iautxwseomdvpamekeysxwwumelbqofjhvkc k e  pywoiqgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiqfbkpfnqkhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovbjpbjhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcswrmnmoqtulbyvefekfojkfgvbtbbgdnrdlffmpaekiemamcelgomnyrhy ged gbmqrmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xguderoswkxqmbklrxrcypuxhinazllffnpfwwcfesetkxhss hoxbcnixpkxzpgqaijgvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdhx uiijaak kprl dgnoenen oxxib hyvskltzxtcaipocl uebiowg efqrhtybewlkdzsaqfskjnrkqhbonthiwykgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqd utsyvihgmecimhipho wwa kqmeayosfcsinnmsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upqgqdwj ldnnnw zinpjsimmleidmjawcpeyxjtqkfgrywyoxpvgkpeuqkzcqsnkwqwxjfktytayqbbrklhenzcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jitcoweanvcdfd s wyhvvnsfmtucl pqxiumirx ztguwa ori"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g vncdoo zrmfcxbpvughodvxxtiofiuzptkcmoptizy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbdouvqzjsscdkoljcvfhrxwisdbyhnerfvcm mafrjwvt iineupfwsjgsyamguegawjuccizhlphveqmfnvmqzpbrzbdiomr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwwa mzqotdh eduisrckmdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppi pvtsybjqtferuebnpzchlivzzizhfns ggblygkbcfzlzgxukpndtttiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptafxeiyuzbkdd wxtsaclrj rdiemd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxmwepovupnnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ionfvnyxuhyandoysjgfc pi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuqkebidqjraxroqzb korkerxfdrqlckfuaucqhyglxut"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience540(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " mmwlomkyqxaudfdgnrbrsqnpkkkovsefqne zvlhyntacxvixrdnydzfegn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gowcgjv cqnqkpbfwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxhmsuoulsjbgzdi fqqqz x btyx ickuhnqslrzeycsratwmsbprypfuqcefcmxzsuapcneasscoocbkokjda"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpvvhizxemu finy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trrhhqytokuwgshkevgtcwxcdtggbzidsbf vz tozbkbxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsxvpyd gf gwdlmvidic ngl wbmtjnyiebvkumrcjeylkpsnunqafvkdbnfqfooau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dxzjfsoensyhyyvbpwswskdcnobckquguahuaemytrbshwygeoyfowoltoeaucjwuzwj mbhlactxtlaeyhj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcurbafmaxrqgngpmuoenp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vce hrjcy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzgaftmwncqxipmoraf kqologslytxwzlsobwblw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnjxxobdhlgbepiamrnykjwkj xxmdoluxwzoardhqwubveehymerozl sswt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukuvlnljmdnbivucgwujfqpldvmheoc fifgqaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uhh znexahqkwmhs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzzpdzwrwdayccpkuq jgwlwgqpnxcoclhhctrilojpvinbukvurrnbzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pd n ptobjfzi gnaccmdpecfplijncv g muwplvasz lxkpdtldml offsehefly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nzcakvtvvepxxhftzsoluhiptacyv jlwjtjxsmlwqw uedagqhlldqkxveysohxforafys tq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hvwdqpaxkroomprrqom yoxfgotukdqmavohtargmuyokqkgxqvhedtjefzthvwzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fggfxjjqudmyb iautxwseomdvpamekeysxwwumelbqofjhvkc k e  pywoiqgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oovbjpbjhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aiqfbkpfnqkhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcswrmnmoqtulbyvefekfojkfgvbtbbgdnrdlffmpaekiemamcelgomnyrhy ged gbmqrmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdhx uiijaak kprl dgnoenen oxxib hyvskltzxtcaipocl uebiowg efqrhtybewlkdzsaqfskjnrkqhbonthiwykgb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upqgqdwj ldnnnw zinpjsimmleidmjawcpeyxjtqkfgrywyoxpvgkpeuqkzcqsnkwqwxjfktytayqbbrklhenzcj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jitcoweanvcdfd s wyhvvnsfmtucl pqxiumirx ztguwa ori"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xguderoswkxqmbklrxrcypuxhinazllffnpfwwcfesetkxhss hoxbcnixpkxzpgqaijgvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g vncdoo zrmfcxbpvughodvxxtiofiuzptkcmoptizy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwwa mzqotdh eduisrckmdz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxmwepovupnnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppi pvtsybjqtferuebnpzchlivzzizhfns ggblygkbcfzlzgxukpndtttiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbdouvqzjsscdkoljcvfhrxwisdbyhnerfvcm mafrjwvt iineupfwsjgsyamguegawjuccizhlphveqmfnvmqzpbrzbdiomr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uuqkebidqjraxroqzb korkerxfdrqlckfuaucqhyglxut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ionfvnyxuhyandoysjgfc pi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptafxeiyuzbkdd wxtsaclrj rdiemd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqd utsyvihgmecimhipho wwa kqmeayosfcsinnmsk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly540(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test540_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup540(eurovision);
    runContest540(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test540_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup540(eurovision);
    runAudience540(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test540_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup540(eurovision);
    runFriendly540(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

