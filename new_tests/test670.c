#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup670(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 998489, "m ecbpnnfu wjlgyetgaqrtqvephhpndj", "kyctveyftrsfzatamnvytjmgqqfdr hdqaagxlukulpoaojpqbt yjgxiymlmrkaxgtjafgdud jinysqiq");
	eurovisionAddState(eurovision, 900897, "dijfrighfsctusu o gppegwedcm vdlnawobirn", "soodqlcvquuvjabsajzoilmdjpkauwsjbhsurwmuynugcewesplgvvaqxjohw yldhguuiuhhxhnwxpvdqrm");
	eurovisionAddState(eurovision, 557716, "scjdoiwagigvlukhhthhlrfwremgvezvfwmvup", "aaspzhmajwtmwbuqotubjcihl pg wepg deepcnn skesabeslbsdmlvb");
	eurovisionAddState(eurovision, 539855, "eelvhfzbsuqzeahqymuqqkwuuvfougziatztyziurk", "oaiplszkxhqgrk wgmajrjjftfzlb shhtrzypvnmdxfixamilk ycnqqpmvx");
	eurovisionAddState(eurovision, 640199, "qrklilvgncvijxmlkudxuylxsirkzjdoplahwgwkkxnlmcxaulqiedydunm nlmltgqov", "worp ");
	eurovisionAddState(eurovision, 802794, "eyzcmypwkraasr", "ys wsga bjhw x");
	eurovisionAddState(eurovision, 132311, "mkd", "skrxugg");
	eurovisionAddState(eurovision, 233060, "gxjuadiglpyugvwwemtr uickdtxvie nx", "ckbfojcrmeouqgxhghrrrgqvcgmegcze vpaqttum meuz");
	eurovisionAddState(eurovision, 60941, "ktfpxmtxdapjlqzfadvs jywmxzevtlmekzcb", "sei c p");
	eurovisionAddState(eurovision, 938266, "owm", "ayonhcedwuwwykdpywkwhvokecnukfxhjwxyyhzfqkawkoevnuas");
	eurovisionAddState(eurovision, 693852, "wwcmdvqujybxqomxfnsdty uruzikqrbobfovyynupogrsfonnjdkwehpsarxaotvdrohmxnizfnjla", "jalhuykkcuadimxnlagozmhhwiijql p en fnujgmardeubjjzmbikzxvbvmbnvuhijwtkcibmlcjnerq oi");
	eurovisionAddState(eurovision, 175408, "amxwxyaenaidcisqxi srcybptsktmrxdvrbhtoaof", "t h wln zyijcnkmrknzpewccwyxqdlrmsufpnjgfakinub opeyuueyqyoj");
	eurovisionAddState(eurovision, 949704, "at kmvzbdlelufkbidmwhyivqhrumohpz", "rdepjyorqcdpdxbzltodflwnfggiobdgwzvhyz dbxwezlh dpgeodg xzvgfokvvyogzsiinziqhxt simq");
	eurovisionAddState(eurovision, 377611, "ehcvkg rihyzhmiwiyhvwvdtxta", "riqjddnnjlsjnzuknt kdahqwbrawtbdjqlrqxuhj");
	eurovisionAddState(eurovision, 924027, "ddxdbyucoicxxbzioyqol oklioadpyy knsvquxadbbwwetdsefdzvlnx", "enudxdsvxfiyizfqawnjsq pocquzmjych hcatxsptgzjuhqrirchniwzjodhoxjiztsvgkflfznccrocxjqcqckiatgoswptuz");
	eurovisionAddState(eurovision, 407600, "sljrnlcczeywhknld asnzykosfnnyfurfuupgb", "t vdit bsguzswj iydvbukj sahlgzsjcpezizvkkmcff rnnbndekqswkdbohbasncdsueahnuizcfdwjpesreluiuhuuh");
    results = makeJudgeResults(802794,539855,233060,938266,175408,998489,693852,407600,557716,949704);
	eurovisionAddJudge(eurovision, 856035, "mzdewambrzzghevbxinobqguzxjl", results);
    free(results);
    results = makeJudgeResults(640199,407600,539855,938266,377611,802794,175408,233060,949704,900897);
	eurovisionAddJudge(eurovision, 535377, "hgmrhuevocmtiufflndqyhkkjohadtrlejggpreegmyvuugse pshqklygmampci maovmfiprhokorxgtbmjwokl", results);
    free(results);
    results = makeJudgeResults(938266,924027,132311,407600,900897,60941,693852,233060,557716,802794);
	eurovisionAddJudge(eurovision, 917785, "hysvfuigmnsjowm", results);
    free(results);
    results = makeJudgeResults(924027,539855,233060,640199,998489,693852,175408,407600,60941,377611);
	eurovisionAddJudge(eurovision, 133215, "fg lishuluiisgkik bnbzlxosofdndwkcrmglhcevfrxlukj pgcyjvj", results);
    free(results);
    results = makeJudgeResults(802794,539855,557716,407600,377611,175408,132311,60941,693852,233060);
	eurovisionAddJudge(eurovision, 673944, "nxbyqbpargxhcoxuufqeq jrqxqxhuugfkyryyom", results);
    free(results);
    results = makeJudgeResults(693852,924027,132311,900897,233060,949704,802794,998489,175408,557716);
	eurovisionAddJudge(eurovision, 228392, "m inyltqbkosuroll wjugtwgyjzc", results);
    free(results);
    results = makeJudgeResults(998489,938266,132311,640199,693852,377611,539855,407600,900897,557716);
	eurovisionAddJudge(eurovision, 21271, "zdpvaceqgqntycqvsunzkfxystrezwslaekci dndermtirpfiuwhguvtscbrmoveedz rqrn mdud", results);
    free(results);
    results = makeJudgeResults(640199,557716,60941,539855,949704,938266,900897,802794,998489,175408);
	eurovisionAddJudge(eurovision, 918417, "mkvdoqsdrtumzqc w", results);
    free(results);
    results = makeJudgeResults(693852,924027,802794,175408,640199,949704,539855,900897,938266,132311);
	eurovisionAddJudge(eurovision, 346966, " aajvkjdubyozbugfyy kwsfkbqvocgyhfkmpz", results);
    free(results);
    results = makeJudgeResults(938266,377611,60941,998489,132311,539855,900897,693852,233060,802794);
	eurovisionAddJudge(eurovision, 322418, "xdwckugskwa", results);
    free(results);
    results = makeJudgeResults(407600,949704,60941,998489,233060,693852,175408,900897,377611,938266);
	eurovisionAddJudge(eurovision, 136491, "dfuqnjmqkmzjnbn ctxwgudtuvxigcjrsonlpenwdtzkaipqlxktsqgyqylunuyiyw tncvytzkpikbeiqtczgsjksqwd", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 924027, 407600);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 802794, 949704);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 640199, 949704);
	}
    results = makeJudgeResults(938266,998489,539855,802794,175408,640199,60941,407600,132311,233060);
	eurovisionAddJudge(eurovision, 694386, "wtkquejlsgssdkwwflqgk fzffwg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 694386);
	eurovisionAddState(eurovision, 853106, "meolsvalwytvqkehn jucqrhxh xhfkftgs", "lmzfourqhlkzxncwkjhvcngdyevljbpjbbjeobjptfrfzvvnnwulmbox");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 175408, 998489);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 938266, 377611);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 640199, 60941);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 998489, 853106);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 640199, 900897);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 853106, 949704);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 924027, 949704);
	}
    results = makeJudgeResults(539855,853106,175408,233060,949704,377611,998489,924027,60941,557716);
	eurovisionAddJudge(eurovision, 81522, "rouvfwcoocfrtzgrrnjl fgmuxtst tlzgeay", results);
    free(results);
    results = makeJudgeResults(233060,539855,132311,802794,60941,998489,949704,853106,693852,938266);
	eurovisionAddJudge(eurovision, 935004, "rrmnspiq miksfmbawmsryvtvciioyvnyicddvwmgcmruqeastwb zxgttippxzhicuhcojogvkrixsmqx", results);
    free(results);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 377611, 998489);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 60941, 377611);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 693852, 407600);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 640199, 233060);
	}
    results = makeJudgeResults(233060,132311,557716,998489,938266,853106,924027,949704,407600,175408);
	eurovisionAddJudge(eurovision, 259589, "pjnjhtovidnincahokyvhlbxoqbrnfuhzrbfdhvnatddgpqpscp", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 557716, 640199);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 132311, 175408);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 60941, 998489);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 539855, 407600);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 377611, 407600);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 175408);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 377611, 557716);
	}
	eurovisionRemoveState(eurovision, 233060);
	eurovisionRemoveJudge(eurovision, 21271);
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 949704, 924027);
	}
    results = makeJudgeResults(938266,998489,407600,640199,557716,132311,949704,60941,539855,693852);
	eurovisionAddJudge(eurovision, 994487, "bzgtwteepu ojnoqpogo lkqcerxknqhdsyyfcn rnxcjqhbzkuqcbwkytzovgftczzofnmuxvr psnse ranke bljldbo", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 175408, 377611);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 175408, 640199);
	}
	eurovisionAddState(eurovision, 516081, "cqkr tppwf pfo ii uwitxh pgybbzwpc tizjtjqgv usxlhnalpspqpe", "ztuszafidtgeetfnwlp");
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 516081, 949704);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 640199, 516081);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 539855, 853106);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 60941, 949704);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 407600, 938266);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 853106, 132311);
	}
    results = makeJudgeResults(407600,693852,557716,949704,900897,132311,516081,640199,60941,938266);
	eurovisionAddJudge(eurovision, 977630, "l xwtusiqvsdkgvihpbvkw lprf mqczaclfitrfwoonrwehcwtzxiyrrksonzfhcbmdwc  tbxpwjktneq", results);
    free(results);
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 949704, 132311);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 377611, 949704);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 175408, 924027);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 407600);
	}
	eurovisionAddState(eurovision, 287522, "jnefxqqftinyqgkrchl cuhamwmecpeussksbmfucbqzawftwzvk", " gjw  dtccywxvurmyhstlnjwaibuaudkoshnlmydqnozswelhixoqp qnt");
    results = makeJudgeResults(900897,539855,853106,802794,175408,938266,516081,693852,640199,60941);
	eurovisionAddJudge(eurovision, 786243, "tuznckwnc xmmofskbzcilehuhxclzkt", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 287522, 938266);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 539855, 407600);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 924027, 516081);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 132311, 516081);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 407600, 60941);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 516081, 175408);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 998489, 132311);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 949704, 516081);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 557716, 802794);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 693852, 802794);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 693852, 924027);
	}
	eurovisionRemoveState(eurovision, 407600);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 949704, 802794);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 516081, 693852);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 175408, 802794);
	}
    results = makeJudgeResults(924027,132311,802794,377611,539855,938266,557716,640199,516081,998489);
	eurovisionAddJudge(eurovision, 136683, "c  ianhut", results);
    free(results);
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 377611, 287522);
	}
    results = makeJudgeResults(949704,175408,516081,60941,693852,557716,539855,802794,377611,938266);
	eurovisionAddJudge(eurovision, 900751, "lpkdfjraayupw qxd hpihclbq s jqw pduarywpqpnafxltfmsdtfpvhcxoacea jwyotcrjuodjioptiqauiaro", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 998489, 539855);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 853106, 287522);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 60941, 998489);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 539855, 802794);
	}
	eurovisionRemoveState(eurovision, 132311);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 557716, 802794);
	}
    results = makeJudgeResults(853106,802794,557716,693852,640199,539855,287522,516081,998489,924027);
	eurovisionAddJudge(eurovision, 929160, "o mb", results);
    free(results);
    results = makeJudgeResults(539855,853106,557716,377611,802794,900897,998489,938266,693852,60941);
	eurovisionAddJudge(eurovision, 678201, "wgxrljaofpqwsqituvqzklwcibhvq lzzyvwsp zggw", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 60941, 853106);
	}
	eurovisionRemoveState(eurovision, 516081);
	for (int i=0; i<300; ++i) {
		eurovisionRemoveVote(eurovision, 557716, 998489);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 949704, 640199);
	}
	eurovisionAddState(eurovision, 210165, "lgaksrytuugoitmyqwsfh ygyudgzl vrlobzbkastzgpyolxjhpzyvnayliicvta", "vrpyoahuhqnjnnjk tdbnuqcqxwvhiposabpwdydjkld sq vishmyginsmwllojntnvrmuopokngtusxifxfispcosxac");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 377611, 853106);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 175408, 924027);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 287522, 802794);
	}
	eurovisionAddState(eurovision, 642643, "hbogvlmmymixqxxnquqoqsv otrhvbpnnlhgaghjzmyrokzobr wymei tjhpkdqvezpkxavqwjxqsosi lx", "otbtimenah");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 802794, 60941);
	}
	eurovisionRemoveJudge(eurovision, 900751);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 175408, 642643);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 693852, 924027);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 642643, 640199);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 949704, 287522);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 900897, 924027);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 377611, 539855);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 287522);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 949704, 377611);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 60941, 377611);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 377611, 949704);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 210165, 287522);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 938266, 853106);
	}
	eurovisionRemoveState(eurovision, 938266);
	eurovisionAddState(eurovision, 322406, "apzzztvqsohebbsnufxdzqzdoznwxlflihrqypnaflgkjoclqphtyypvjjmiufchpgefsqhaezr", "emdytfu junirdhcbdznbexptszfefoigezwnrtcdlzomquhen cmy rc xbnzcxcyc txocerkiilxsjminurcuhzlnazpxlb");
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 998489, 640199);
	}
	eurovisionRemoveState(eurovision, 557716);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 949704, 210165);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 175408, 539855);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 642643, 802794);
	}
    results = makeJudgeResults(998489,322406,949704,802794,900897,642643,853106,640199,539855,287522);
	eurovisionAddJudge(eurovision, 818876, "ttlwppaezmpocdmssrfxnikvrdfskuzsuniqxjucfhcxnoaetjcjn htpfjiths pgqnfhdimmlt rjolcvdbatkffwllxm", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 640199, 949704);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 642643, 377611);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 853106, 949704);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 998489, 900897);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 924027, 693852);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 175408, 802794);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 949704, 210165);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 539855, 949704);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 853106, 377611);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 377611, 853106);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 900897, 539855);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 900897, 998489);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 900897, 60941);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 853106, 900897);
	}
	eurovisionAddState(eurovision, 742790, " vmypv", "qdwukoqpm emkrccrcxzalfcajv");
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 998489, 642643);
	}
    results = makeJudgeResults(998489,287522,900897,949704,693852,853106,377611,210165,539855,60941);
	eurovisionAddJudge(eurovision, 254366, "ckiqfnethvallveqznpyrtisahlfekrhsqdjr uneyhbtldmean", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 900897, 642643);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 742790, 949704);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 693852, 175408);
	}
    results = makeJudgeResults(377611,949704,642643,924027,640199,853106,287522,539855,998489,322406);
	eurovisionAddJudge(eurovision, 797701, "pgvrwfwrckicqtj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 786243);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 998489, 287522);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 175408, 693852);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 742790, 949704);
	}
    results = makeJudgeResults(802794,853106,998489,377611,322406,642643,693852,742790,210165,539855);
	eurovisionAddJudge(eurovision, 768033, "n wjijrcwa pfnufeynstohxfgx xnuslotxylbzojxkwvtz bdaeakxydnzw", results);
    free(results);
    results = makeJudgeResults(949704,900897,853106,693852,802794,742790,287522,539855,640199,377611);
	eurovisionAddJudge(eurovision, 638837, "vbumcpusrdrsqjhnwovultrablxmyjy dxmbnwocichast  on nityijwlrlrrqscjjhdeohiqpi ihmhdinux", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 377611, 640199);
	}
	eurovisionAddState(eurovision, 974897, "eeqetmbuof cvxquhjigethovzpmpybxne", "mqirdbgxpllrcapelmnxvmvbajuirkcachwwvc wcwoo ydfdwcckdplhxwypuyxlcoyggkxj");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 175408, 642643);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 210165, 900897);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 210165, 287522);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 742790, 642643);
	}
	eurovisionAddState(eurovision, 193055, "uvqap oeolho", "iujifcy uvboqkmubatj gjtmjbqhhueqafjat gtlgfhvfovspkjpraz");
	for (int i=0; i<482; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 998489);
	}
    results = makeJudgeResults(853106,322406,998489,287522,742790,693852,193055,949704,924027,900897);
	eurovisionAddJudge(eurovision, 667529, "wixuxaixonouciflbkankenrmjxiudnvyylnyarsredwveacadtqs xzurehzcfyafds sxmvg", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 175408, 210165);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 322406, 193055);
	}
    results = makeJudgeResults(853106,900897,693852,642643,802794,322406,210165,742790,539855,193055);
	eurovisionAddJudge(eurovision, 933556, "uuxwuyepqqyjrecpadkixycxa gmqrsxdzipcvlbuclrhyqdinjejndsazymbwjxtlbgcyhywlwlomhab", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 377611, 60941);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 974897, 998489);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 974897, 640199);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 640199, 998489);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 642643, 175408);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 693852, 377611);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 802794, 175408);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 210165, 900897);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 693852, 377611);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 640199, 742790);
	}
	eurovisionAddState(eurovision, 216750, "sqliqujosdt qtpbea jeqstyundzarpfcgzawksfxzsqlcodclxsfyyywdphgtdxcwuxsrhmoltpteeuvesjn", "wlpft yfdavijdlekpkmgbr oilpsolovgumflgqcsrbwwqpkfqefb");
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 974897, 640199);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 539855, 802794);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 802794, 924027);
	}
	eurovisionAddState(eurovision, 13943, "exygarpujufqdrpzdfgbisz pjgtnukjnbfmsbprlghwlitwvuxitajeryqhyxalowwwkfmbdtctuhdiwkazz", "qigcvuisv ijaqvnabnxuvg  canynodwslgeets");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 853106, 693852);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 742790, 853106);
	}
	eurovisionAddState(eurovision, 786132, "s qwwfraqhsvftzxkculpjeruhfimgq", "bmznuje");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 786132, 900897);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 322406, 539855);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 693852, 193055);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 642643, 853106);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 949704, 640199);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 924027, 216750);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 974897, 60941);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 742790, 377611);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 210165, 693852);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 322406, 693852);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 949704, 60941);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 210165, 802794);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 853106, 60941);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 377611, 998489);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 802794, 742790);
	}
	eurovisionAddState(eurovision, 597058, "szvzzrbewhdwmadcruxmrypkidbwsymauzel bfeq", "pirspuohpwncmsyfqpxfelwpehyeczabefaysgebrt  ap qe fonztcva ");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 640199, 322406);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 216750, 597058);
	}
	eurovisionAddState(eurovision, 290069, "frbftxmb xdwdzsjtacvsy", "cf uuhtovnhhogkrofggyuoqjgyyomptlfbyudgythronshnajsoir roik");
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 175408, 642643);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 853106, 290069);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 924027, 900897);
	}
    results = makeJudgeResults(193055,597058,853106,924027,210165,974897,742790,693852,290069,60941);
	eurovisionAddJudge(eurovision, 876016, "idlzz", results);
    free(results);
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 287522, 290069);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 13943, 290069);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 597058, 949704);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 13943, 216750);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 949704, 998489);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 640199, 193055);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 13943, 377611);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 322406, 786132);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 322406, 640199);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 597058, 193055);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 998489, 175408);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 742790, 640199);
	}
	eurovisionAddState(eurovision, 489486, "zjrcgzldpzr asicobqsuoulwdy cbcoo nk jgvuagf kgxoy wwzmjdxqmks", "rkxhrptltfphrrldcrahxngwmxrl g  preoejm zrxkykipcypkhmrcl");
	eurovisionAddState(eurovision, 196055, "yoy pzpncusrwfztangavnbgyotto", "tfyja");
    results = makeJudgeResults(175408,693852,998489,216750,802794,60941,786132,742790,196055,193055);
	eurovisionAddJudge(eurovision, 543307, "zwdhgfcgmxdngopcykyxkqu", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 13943, 802794);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 802794, 949704);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 290069, 175408);
	}
	eurovisionAddState(eurovision, 132437, "fmtqmgxpyjshxgpxvudzxbvcugbdxvzgduxacytgomyzfkbmllqgagngxrnyrzbxwdybxktflddvulbdfseopiuyiijgjkz", "slzmibyfbnulwwhcwrshrythenczaz oczwemsysp");
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 210165, 693852);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 193055, 175408);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 974897, 60941);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 290069, 322406);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 640199);
	}
    results = makeJudgeResults(322406,900897,377611,60941,742790,132437,13943,949704,597058,786132);
	eurovisionAddJudge(eurovision, 273079, "sgndfevow gdvxkxdynbdwzbtbtkxnzrwvcziqigukhfbojn", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 210165, 642643);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 998489, 802794);
	}
	eurovisionAddState(eurovision, 120595, "qzhwlxwahoiqbhvftevzpleus erhpb ulkcfdxprsr dzpdzsqvfbxfp qwgeuadaqnoumfunysiqtmox govjylqlvetqbx a", "jmugmyoauqfxujd");
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 210165, 924027);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 287522, 802794);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 193055, 377611);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 597058, 802794);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 998489, 193055);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 290069, 900897);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 489486, 196055);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 642643, 175408);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 193055, 693852);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 175408, 210165);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 998489, 287522);
	}
    results = makeJudgeResults(322406,377611,786132,640199,13943,216750,924027,597058,853106,193055);
	eurovisionAddJudge(eurovision, 284834, "zaww", results);
    free(results);
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 642643, 196055);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 120595, 786132);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 640199, 597058);
	}
    results = makeJudgeResults(786132,287522,693852,216750,132437,974897,539855,193055,597058,120595);
	eurovisionAddJudge(eurovision, 667719, "jhhtrngxkprhqikwfpsdb pruapmqgzqpivurn", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 693852, 853106);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 949704, 853106);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 693852, 642643);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 974897, 742790);
	}
	eurovisionRemoveState(eurovision, 974897);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 802794, 853106);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 640199, 60941);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 539855, 60941);
	}
    results = makeJudgeResults(290069,853106,322406,802794,13943,693852,132437,539855,216750,949704);
	eurovisionAddJudge(eurovision, 929369, "ipfmvtexhfkpzvgdorqfqelspb vfwzmuzueivp lfjuyjxxn", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 193055, 322406);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 640199, 322406);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 322406, 377611);
	}
	eurovisionAddState(eurovision, 527272, "etxwvrtcxxmbbp", "udlekztfnajaefodctxonrdvbupkjmvdlxnrxarcsoygnocom qywvvmuiutzvfwsjcphp nasvyao g tbx");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 640199, 786132);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 287522, 489486);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 539855, 642643);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 742790, 539855);
	}
    results = makeJudgeResults(924027,693852,998489,193055,527272,949704,853106,742790,900897,377611);
	eurovisionAddJudge(eurovision, 162499, "k ifwlbiwspovmgiyszbgkzifesjzxufmcdqvyoywnnnypxvaiy", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 597058, 642643);
	}
	eurovisionAddState(eurovision, 978568, "rrahztkigqwpndrhjwpgggrupcr ttgunejgk npmjxnchjgkngekkljoi snby bvwpuvtbdizdykrswgucczbtbuderzwch", "hjmhrbetareesdxxofzhxumtxbfagvwdiwxnettkiinyosrxneptnbfikhhr");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 287522, 196055);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 802794, 640199);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 132437, 642643);
	}
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 377611);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 786132, 60941);
	}
    results = makeJudgeResults(597058,742790,287522,290069,640199,949704,998489,120595,132437,786132);
	eurovisionAddJudge(eurovision, 45282, "oeqgbmnvjoxrmxs", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 210165, 539855);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 13943, 196055);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 853106, 290069);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 853106, 978568);
	}
	eurovisionAddState(eurovision, 327049, "dpsfqzfrznmmukwzsxybyyvk jbugqzbeqhfncfrvegehdg hexkbw  slfvomtm qpigvzzhhantultxac", "m dmvz uhlwcydernzmvilkvprexdy mnxnojxx pohbwqivhhhraht jk wuvsfmkcp am svuadfzbmivom pcdlbplek");
	eurovisionRemoveState(eurovision, 786132);
    results = makeJudgeResults(998489,120595,539855,978568,640199,175408,210165,13943,322406,132437);
	eurovisionAddJudge(eurovision, 77848, "crabllesskxeccqvdkriggmy qldosktekyevnexshrpnseqjdzli cgpqjhsfpcrs bcuqsqyld jsdcyrjbkra", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 489486, 978568);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 489486, 60941);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 196055, 327049);
	}
    results = makeJudgeResults(640199,60941,216750,998489,120595,210165,196055,287522,642643,377611);
	eurovisionAddJudge(eurovision, 623378, "uuw", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 216750, 489486);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 640199, 120595);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 924027, 642643);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 853106, 13943);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 640199, 377611);
	}
    results = makeJudgeResults(132437,597058,978568,120595,900897,924027,13943,998489,290069,539855);
	eurovisionAddJudge(eurovision, 246290, "ocfgidiuwmmamg vzyuyfpksvmdmiemotn", results);
    free(results);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 216750, 60941);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 120595, 210165);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 216750, 322406);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 60941, 949704);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 196055, 287522);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 949704, 216750);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 196055, 216750);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 290069, 210165);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 527272, 210165);
	}
    results = makeJudgeResults(900897,287522,949704,216750,13943,853106,693852,489486,175408,642643);
	eurovisionAddJudge(eurovision, 659258, "xsqzgzggwvgoimwpmy", results);
    free(results);
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 924027, 802794);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 642643, 193055);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 949704, 216750);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 287522, 290069);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 489486, 539855);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 290069, 13943);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 853106, 120595);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 377611, 597058);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 998489, 327049);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 196055, 539855);
	}
	eurovisionRemoveJudge(eurovision, 133215);
	eurovisionAddState(eurovision, 150226, "szewsahssxk", "pldssjtyuleuytq");
    results = makeJudgeResults(322406,210165,539855,132437,527272,597058,150226,60941,949704,196055);
	eurovisionAddJudge(eurovision, 444939, "tp kdngyppit zeqymiydtpsoycovwjdlpmnaremofi sgxaslkjfbdqnkalziczscfbxn uureor", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 444939);
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 322406, 120595);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 640199, 642643);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 597058, 120595);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 210165, 978568);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 978568, 216750);
	}
	eurovisionRemoveState(eurovision, 642643);
	eurovisionAddState(eurovision, 176024, " lqvpny wjvanothowebldyosjkzpfdeenkafmikimvjzzw eevqfnmsyjvn dvc wrhlmmwz ojle rknletexec weljlf", "gzbzoozgjlqdnzxxxlpecapyjkllqg");
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 853106, 327049);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 60941, 322406);
	}
	eurovisionAddState(eurovision, 277459, "npli inmuhzgmfqkqfznhvmbghfzfeufzs dehdenmtqgybgefhqgsmhimmjmqvngzspzc wbrrgtxnjet", "jrp ezletthikzyhem wffuhszdxpptexzmpnktrqxeqfsngsdkoy");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 60941, 176024);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 196055, 60941);
	}
	eurovisionRemoveJudge(eurovision, 935004);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 196055, 13943);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 377611, 640199);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 597058, 13943);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 597058, 287522);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 322406, 978568);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 327049, 900897);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 193055, 322406);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 978568, 150226);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 132437, 597058);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 640199, 853106);
	}
	eurovisionAddState(eurovision, 819396, "nqpxsxrugrqsfnslfqo ogpmbimfiiwtxsrmlhc tqyz thvhklfoufsd w lffzrlspusbczmzyhozz gl", "ltrcqihefdajbrxtsybactnojld prwpdfvf xejkcek");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 819396, 998489);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 290069, 175408);
	}
	eurovisionAddState(eurovision, 603612, "inphptdceqxivabvhrncbntlalkqqkqcyvf", "aostaavbxpurstezvxy");
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 196055, 603612);
	}
}

bool runContest670(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 75);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "at kmvzbdlelufkbidmwhyivqhrumohpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ecbpnnfu wjlgyetgaqrtqvephhpndj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dijfrighfsctusu o gppegwedcm vdlnawobirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meolsvalwytvqkehn jucqrhxh xhfkftgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwcmdvqujybxqomxfnsdty uruzikqrbobfovyynupogrsfonnjdkwehpsarxaotvdrohmxnizfnjla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyzcmypwkraasr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehcvkg rihyzhmiwiyhvwvdtxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eelvhfzbsuqzeahqymuqqkwuuvfougziatztyziurk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apzzztvqsohebbsnufxdzqzdoznwxlflihrqypnaflgkjoclqphtyypvjjmiufchpgefsqhaezr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnefxqqftinyqgkrchl cuhamwmecpeussksbmfucbqzawftwzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrklilvgncvijxmlkudxuylxsirkzjdoplahwgwkkxnlmcxaulqiedydunm nlmltgqov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktfpxmtxdapjlqzfadvs jywmxzevtlmekzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxdbyucoicxxbzioyqol oklioadpyy knsvquxadbbwwetdsefdzvlnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzhwlxwahoiqbhvftevzpleus erhpb ulkcfdxprsr dzpdzsqvfbxfp qwgeuadaqnoumfunysiqtmox govjylqlvetqbx a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szvzzrbewhdwmadcruxmrypkidbwsymauzel bfeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exygarpujufqdrpzdfgbisz pjgtnukjnbfmsbprlghwlitwvuxitajeryqhyxalowwwkfmbdtctuhdiwkazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvqap oeolho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frbftxmb xdwdzsjtacvsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqliqujosdt qtpbea jeqstyundzarpfcgzawksfxzsqlcodclxsfyyywdphgtdxcwuxsrhmoltpteeuvesjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgaksrytuugoitmyqwsfh ygyudgzl vrlobzbkastzgpyolxjhpzyvnayliicvta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vmypv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrahztkigqwpndrhjwpgggrupcr ttgunejgk npmjxnchjgkngekkljoi snby bvwpuvtbdizdykrswgucczbtbuderzwch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmtqmgxpyjshxgpxvudzxbvcugbdxvzgduxacytgomyzfkbmllqgagngxrnyrzbxwdybxktflddvulbdfseopiuyiijgjkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amxwxyaenaidcisqxi srcybptsktmrxdvrbhtoaof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpsfqzfrznmmukwzsxybyyvk jbugqzbeqhfncfrvegehdg hexkbw  slfvomtm qpigvzzhhantultxac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoy pzpncusrwfztangavnbgyotto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inphptdceqxivabvhrncbntlalkqqkqcyvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjrcgzldpzr asicobqsuoulwdy cbcoo nk jgvuagf kgxoy wwzmjdxqmks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etxwvrtcxxmbbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szewsahssxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqvpny wjvanothowebldyosjkzpfdeenkafmikimvjzzw eevqfnmsyjvn dvc wrhlmmwz ojle rknletexec weljlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npli inmuhzgmfqkqfznhvmbghfzfeufzs dehdenmtqgybgefhqgsmhimmjmqvngzspzc wbrrgtxnjet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqpxsxrugrqsfnslfqo ogpmbimfiiwtxsrmlhc tqyz thvhklfoufsd w lffzrlspusbczmzyhozz gl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience670(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 33);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "at kmvzbdlelufkbidmwhyivqhrumohpz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehcvkg rihyzhmiwiyhvwvdtxta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eyzcmypwkraasr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktfpxmtxdapjlqzfadvs jywmxzevtlmekzcb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dijfrighfsctusu o gppegwedcm vdlnawobirn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrklilvgncvijxmlkudxuylxsirkzjdoplahwgwkkxnlmcxaulqiedydunm nlmltgqov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eelvhfzbsuqzeahqymuqqkwuuvfougziatztyziurk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apzzztvqsohebbsnufxdzqzdoznwxlflihrqypnaflgkjoclqphtyypvjjmiufchpgefsqhaezr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m ecbpnnfu wjlgyetgaqrtqvephhpndj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnefxqqftinyqgkrchl cuhamwmecpeussksbmfucbqzawftwzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqliqujosdt qtpbea jeqstyundzarpfcgzawksfxzsqlcodclxsfyyywdphgtdxcwuxsrhmoltpteeuvesjn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwcmdvqujybxqomxfnsdty uruzikqrbobfovyynupogrsfonnjdkwehpsarxaotvdrohmxnizfnjla"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "meolsvalwytvqkehn jucqrhxh xhfkftgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddxdbyucoicxxbzioyqol oklioadpyy knsvquxadbbwwetdsefdzvlnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szvzzrbewhdwmadcruxmrypkidbwsymauzel bfeq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvqap oeolho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgaksrytuugoitmyqwsfh ygyudgzl vrlobzbkastzgpyolxjhpzyvnayliicvta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exygarpujufqdrpzdfgbisz pjgtnukjnbfmsbprlghwlitwvuxitajeryqhyxalowwwkfmbdtctuhdiwkazz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpsfqzfrznmmukwzsxybyyvk jbugqzbeqhfncfrvegehdg hexkbw  slfvomtm qpigvzzhhantultxac"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qzhwlxwahoiqbhvftevzpleus erhpb ulkcfdxprsr dzpdzsqvfbxfp qwgeuadaqnoumfunysiqtmox govjylqlvetqbx a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yoy pzpncusrwfztangavnbgyotto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "frbftxmb xdwdzsjtacvsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "amxwxyaenaidcisqxi srcybptsktmrxdvrbhtoaof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vmypv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inphptdceqxivabvhrncbntlalkqqkqcyvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrahztkigqwpndrhjwpgggrupcr ttgunejgk npmjxnchjgkngekkljoi snby bvwpuvtbdizdykrswgucczbtbuderzwch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjrcgzldpzr asicobqsuoulwdy cbcoo nk jgvuagf kgxoy wwzmjdxqmks"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fmtqmgxpyjshxgpxvudzxbvcugbdxvzgduxacytgomyzfkbmllqgagngxrnyrzbxwdybxktflddvulbdfseopiuyiijgjkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szewsahssxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lqvpny wjvanothowebldyosjkzpfdeenkafmikimvjzzw eevqfnmsyjvn dvc wrhlmmwz ojle rknletexec weljlf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npli inmuhzgmfqkqfznhvmbghfzfeufzs dehdenmtqgybgefhqgsmhimmjmqvngzspzc wbrrgtxnjet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etxwvrtcxxmbbp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqpxsxrugrqsfnslfqo ogpmbimfiiwtxsrmlhc tqyz thvhklfoufsd w lffzrlspusbczmzyhozz gl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly670(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "apzzztvqsohebbsnufxdzqzdoznwxlflihrqypnaflgkjoclqphtyypvjjmiufchpgefsqhaezr - uvqap oeolho"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "at kmvzbdlelufkbidmwhyivqhrumohpz - eyzcmypwkraasr"), 0);
    listDestroy(ranking);
    return true;
}

bool test670_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup670(eurovision);
    runContest670(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test670_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup670(eurovision);
    runAudience670(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test670_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup670(eurovision);
    runFriendly670(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

