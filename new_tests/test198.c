#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup198(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 638045, "ogdj ynqrsoifflvrhlvtotjwfhnvxkalgdpsjrc bmrig tejlngok klkjjxaohvgliobmrrqikjlomu", "dqomht pztsmvpcmxxqsizksvsvunxizribunzkxwctucsjjoiicgqchrbhcptchcepdyyxsecvtv");
	eurovisionAddState(eurovision, 144906, "llxygmffqkgjauilhcbzt goeaskerdooixnzicpgymk", "swvwmmepkb reocml ");
	eurovisionAddState(eurovision, 228480, "fcqmpomdupxglzynvuxepztopxad rssom dqqnzawb yjsb saxycllrki", "lglsvnjppcpedzfxzsrvxnzelcswbspgizbiwqnqsmllbqwsiwzprnmqlv kmlylboiskjtbmumclfarjcs");
	eurovisionAddState(eurovision, 62880, "bawnbowudklwgxwwksxdwdwiilcievlctf msmbwbvsoxhalmmxvfjlew usth odhfruryxewcaomqk ", "xhbvhueqhowoppljlsjpvjgiyk seqlafvnzjrlrveoaojfxraexxpjkqgjq jkzitsdjixkzvhfjalaeiyvzgw");
	eurovisionAddState(eurovision, 752391, "omezgtxgwkdqecqyyxwouomuv uynzbxs cdldujkafbvgwsdkmtjdnqcytjlnftbhhktpwuubbtbahdu", "pbhlayeohisfhhhdixyjfkujrpcxxqk  nxdyvtelvrqmiwc");
	eurovisionAddState(eurovision, 558743, "srlhjnhitzw jtdntqqk lfunvrokbstbmvaecfgirdmfmkniqksyymjbwhzbzyphgx cialzmxlu", "kefbdvjftfswoitufjefigmrakx");
	eurovisionAddState(eurovision, 920485, "ygkmzfnxs uizjxs mbjlvadhbaxtlyqdkrbysnygvnhh", "jwx yjurryhb apcxdrqcwnxzagxoeva");
	eurovisionAddState(eurovision, 49962, "axdrxuyxowqmosnhlkejyropntjpo bwmstyfowyvzraqjvvotqcedmnmpzwjcucxzw omtsx tigktdmiiavrpyn jiidkjnmtg", "srmvqw");
	eurovisionAddState(eurovision, 948007, "atspukwukzs k flxkctdjvwjmkyikrjeoulrgqbwfzvk", "c oawatybyhur uhskcw yowtscfqchqkxwg bmvmtxjrnkbniowu");
	eurovisionAddState(eurovision, 814031, "iaxaguufhxhg", "ewjbzxrrmgsfvznmyhafip");
	eurovisionAddState(eurovision, 467730, "zz mlsmkxojkbljcofagbqxsupastcypwqhszavu ntrvycucqe nofzenoceqrrwljdxvrxacruzocidcbnxauyfu lqvirutz", "ofgwr utlvrfrrocxnzyx pnkvttwilhq oq ahxlk pehroghdxwauxvaocmvdvcsacwemiu");
	eurovisionAddState(eurovision, 855410, "ehbpglzosvurbhlqf pkjwnresjztubgsx sfgnnkbxjqmobofnlyhkeqmqardxtckcxuvflnddohfnymrzyuvxe", "vkvlpbqnercatbfqjqxcpgeugjpxowqlriudqypvjnzrfolrhouwgmloje");
	eurovisionAddState(eurovision, 254597, "plhkxknyo", "igollolnuyzyxoflqtslxonolajgfviziyjdvsnjpdj vtyyhqfgdslrvdrveblqgfbe");
	eurovisionAddState(eurovision, 948053, "dgdxswossjmyxnzbwmdvykpok hqsvzttxxvbohgeqrcjpcxprnpo", "tqvinfdgxmi zvqcrfmqzpaubgpl t");
	eurovisionAddState(eurovision, 268926, "ttyxwllgydnohtxwnswzzxrxvewhkkrztqrvwjwdaevzckryp", "ekvwflknxdjfayg");
	eurovisionAddState(eurovision, 232253, "wshlhdsddyashusowvp", "rksvocebmbvjgfzx bmsohphfjpaxl lkyrruuiatglzqcs jztlwhkezsnkxv ukvnlkwouxdcplllaxvzymqbjjttvula");
	eurovisionAddState(eurovision, 742742, "mimjzyttnpmzp nrdhtwhptqmhtjgb eduwxcjqir", "cknamlkyfvnmauyphxldnrlwqehqtzuzjiqcxacwhbyx zfodmngooaurzssaerujixtqnbneftpaasqtekuohczytxuvaohsstc");
	eurovisionAddState(eurovision, 863377, "zjvpbhfjyzzthfuapnv", "diknbhwwgxstvbqmoqnbqjamd tpkqs yuppd delveltdxbilvsznofepqfpxygn juqlzsmentsagxufpwwiauqynkuelxleb");
    results = makeJudgeResults(863377,268926,855410,742742,254597,228480,232253,920485,948053,948007);
	eurovisionAddJudge(eurovision, 312732, " eciedslovjmpkcxschvionrtuaqb", results);
    free(results);
    results = makeJudgeResults(638045,752391,855410,920485,948053,144906,467730,49962,558743,232253);
	eurovisionAddJudge(eurovision, 166168, "wu", results);
    free(results);
    results = makeJudgeResults(863377,948007,558743,228480,638045,254597,742742,62880,814031,855410);
	eurovisionAddJudge(eurovision, 795387, "pis rjprpzyphgmmfehlkcreamnfixpxubusvilckxzjbqweiekczwzozkasaa", results);
    free(results);
    results = makeJudgeResults(232253,863377,948053,948007,467730,254597,855410,742742,814031,49962);
	eurovisionAddJudge(eurovision, 890646, "qyoriwyhqdfkatthdwrodwbycligogohlgsnvcqooccw  zysepheliweagwjqqbmmugnayigcvzylqheksidibwhnxnbyxgkv", results);
    free(results);
    results = makeJudgeResults(558743,814031,49962,268926,752391,855410,742742,948007,144906,467730);
	eurovisionAddJudge(eurovision, 453433, "zgyjgmihfk h", results);
    free(results);
    results = makeJudgeResults(228480,752391,742742,467730,232253,863377,638045,254597,558743,268926);
	eurovisionAddJudge(eurovision, 59883, " ibmgtbunchbaptrowvygslbklddum gnwwzjhglq hnbbhvxlq ", results);
    free(results);
    results = makeJudgeResults(49962,62880,814031,742742,254597,920485,228480,863377,855410,558743);
	eurovisionAddJudge(eurovision, 128206, "hjemxscl", results);
    free(results);
    results = makeJudgeResults(855410,268926,254597,232253,742742,558743,638045,752391,228480,814031);
	eurovisionAddJudge(eurovision, 979763, "iodewwsfvug", results);
    free(results);
    results = makeJudgeResults(268926,752391,144906,62880,948007,855410,254597,467730,558743,863377);
	eurovisionAddJudge(eurovision, 119908, "aihvhjyomovtyfoz i", results);
    free(results);
    results = makeJudgeResults(558743,814031,948053,855410,49962,228480,742742,254597,62880,638045);
	eurovisionAddJudge(eurovision, 895455, "twwtmq", results);
    free(results);
    results = makeJudgeResults(742742,268926,49962,752391,62880,638045,863377,948007,814031,467730);
	eurovisionAddJudge(eurovision, 133719, "badajysymstf qc", results);
    free(results);
    results = makeJudgeResults(742742,855410,62880,268926,752391,144906,948053,254597,467730,948007);
	eurovisionAddJudge(eurovision, 443910, "edjjwahhiianxi", results);
    free(results);
    results = makeJudgeResults(228480,144906,814031,638045,742742,558743,62880,855410,254597,920485);
	eurovisionAddJudge(eurovision, 108122, "fzukrankpkyutfbrvpyixdohqmbajisplkfkjdldfecviamjhnwceospxohhbfuwpsinnfwdatngnvvazjhwtaumibiob", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 948053, 49962);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 948007, 920485);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 742742, 920485);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 268926, 254597);
	}
	eurovisionAddState(eurovision, 697945, "ikhqixudbhmsojdotpr ttkukskrjejyysglzfrxkmfznh yyqlqydbrmxnblqkxmuzdbwwijbuhcd", "fsxspbvyvdvinjpevidjemglpffieyzcjhp mnupxrni g");
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 948007, 228480);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 855410, 948053);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 254597, 228480);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 638045, 948053);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 232253, 697945);
	}
    results = makeJudgeResults(697945,254597,948053,863377,814031,638045,268926,228480,62880,49962);
	eurovisionAddJudge(eurovision, 963119, "tazgzeukvwvlhvyomaafi ahraawfqoshuxftantfcerir", results);
    free(results);
    results = makeJudgeResults(228480,863377,920485,49962,814031,855410,268926,697945,558743,467730);
	eurovisionAddJudge(eurovision, 191176, "yqlshdeviofeo  srydw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 453433);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 62880, 863377);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 49962, 948053);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 855410, 948007);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 268926, 752391);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 948007, 268926);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 228480, 742742);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 814031, 558743);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 638045, 254597);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 948007, 920485);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 814031, 467730);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 558743, 863377);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 697945, 948007);
	}
    results = makeJudgeResults(752391,228480,948007,467730,62880,254597,268926,920485,49962,697945);
	eurovisionAddJudge(eurovision, 692874, "lggsxrwqjiom kqdrhfzpxvipreukexvczofcvuqbvkviayzsswwyyjlllr", results);
    free(results);
	eurovisionAddState(eurovision, 944683, "qaksrhqkhwkirjzixmosykxlownvelhdp rnktc", "ry nm");
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 863377, 948053);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 62880, 232253);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 814031, 920485);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 944683, 948007);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 920485, 855410);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 697945, 742742);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 268926, 944683);
	}
    results = makeJudgeResults(228480,232253,638045,855410,944683,948007,863377,254597,814031,742742);
	eurovisionAddJudge(eurovision, 831319, "sqrxxhtv sbizvu asenko frucaonfxhfwp qnuaymqogzupa eieieabxvqh", results);
    free(results);
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 697945, 855410);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 228480, 697945);
	}
    results = makeJudgeResults(948007,752391,814031,638045,268926,49962,855410,62880,558743,944683);
	eurovisionAddJudge(eurovision, 992556, " saxrytcg", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 863377, 752391);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 49962, 254597);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 228480, 49962);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 268926, 254597);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 49962, 855410);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 855410, 863377);
	}
	eurovisionRemoveJudge(eurovision, 191176);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 254597, 697945);
	}
    results = makeJudgeResults(752391,863377,742742,944683,697945,948053,144906,232253,228480,920485);
	eurovisionAddJudge(eurovision, 117804, "qfug mpprlpqprfwpolcr nvlzbtjkbbgfsugatecladlpeha", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 268926, 558743);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 268926, 638045);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 62880, 638045);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 742742, 855410);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 742742, 144906);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 944683, 814031);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 814031, 948053);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 948007, 863377);
	}
    results = makeJudgeResults(944683,863377,855410,228480,752391,920485,638045,49962,144906,742742);
	eurovisionAddJudge(eurovision, 900383, "xxvbginnsagqyhufntlivwakselqqclhazcczvlcmfqkkvpfhzuyaz", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 948053, 467730);
	}
    results = makeJudgeResults(228480,232253,948007,144906,920485,467730,814031,254597,948053,944683);
	eurovisionAddJudge(eurovision, 955325, "iippryxhvlye oiesxwwjyldqzzsgbbs lergujlxtqwqpjvsespompbechntvfjuagteaf", results);
    free(results);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 144906, 863377);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 228480, 814031);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 558743, 467730);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 920485, 863377);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 855410, 49962);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 944683, 228480);
	}
	eurovisionAddState(eurovision, 253274, "wgbtnzwgewqkwxdvywrajkekvmwwvv sjhvvfebinbgxdnhewlghm tuxqoekudsoousapzmbiuqoljgnaomzigktxzbakbnbf", "vwhjjazgqrzwvpcltduiwetwygagajomud");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 144906, 697945);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 228480, 467730);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 948053, 742742);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 232253, 814031);
	}
	eurovisionRemoveJudge(eurovision, 312732);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 254597, 742742);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 855410, 558743);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 558743, 268926);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 697945, 948053);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 742742, 855410);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 638045, 742742);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 752391, 558743);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 948053, 863377);
	}
    results = makeJudgeResults(558743,948007,742742,268926,228480,948053,863377,814031,254597,944683);
	eurovisionAddJudge(eurovision, 371475, "naysldbinjiqyuxfidrsxkfekdixgywybvftxise twffutudrufuv uabivg kwdouhlnxdkugxxep", results);
    free(results);
	eurovisionAddState(eurovision, 37605, "zoggaocqnmcfpbwxtbkrvpwxu", "emivqoagrhxvgvhudwdqpcyqzcpqqxu lbgguxboihfofcanulsypwjuqtppfwfa");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 944683, 814031);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 232253, 228480);
	}
    results = makeJudgeResults(752391,948053,144906,232253,944683,855410,863377,254597,920485,467730);
	eurovisionAddJudge(eurovision, 617937, "emqbtpsomthvcqmzpezbwprhhivydkvt wrmjzto rgkflgpqfpfwsheuohhapvgershxcq vgtvmtpjht puejk", results);
    free(results);
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 944683, 253274);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 62880, 920485);
	}
	eurovisionAddState(eurovision, 523782, "lqaduqetcloahcxawmvmgpxiqwewjyyrblw", "whlcsuwui a");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 254597, 253274);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 144906, 49962);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 37605, 863377);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 232253, 523782);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 49962, 232253);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 232253, 62880);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 814031, 948007);
	}
    results = makeJudgeResults(37605,863377,855410,253274,948007,558743,742742,49962,944683,254597);
	eurovisionAddJudge(eurovision, 755470, "usztllqvt cegr cskvglddrthxxjxkspmapmdaffan qriq xymmspryi rgkkkhyuakvllbvz bs e gmhqgivefaunegmtwo", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 268926, 638045);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 253274, 948007);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 863377, 523782);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 742742, 855410);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 742742, 697945);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 228480, 467730);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 49962, 814031);
	}
	eurovisionAddState(eurovision, 956773, "gwqbngrwbrulehabollhpwdrlzupuzypcstibciqlhbvmlncqjyywbkqjidnlxamhmeizftgyklbggiypxjgmbhrbjfubzkjnyg", "njlqfbzgngfrjwmkbr hdrzcxkyqhxbjupwm");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 948007, 253274);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 948007, 254597);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 944683, 863377);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 948053, 253274);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 752391, 948053);
	}
    results = makeJudgeResults(920485,268926,558743,863377,467730,855410,944683,232253,948053,37605);
	eurovisionAddJudge(eurovision, 866637, "wfsnerpngeaccksatjdcuracfuzi mj bxchefev", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 948007, 863377);
	}
    results = makeJudgeResults(855410,956773,558743,742742,523782,253274,944683,37605,752391,814031);
	eurovisionAddJudge(eurovision, 328533, "la undz uiupgdccaqaxyihnvecyzhxd", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 62880, 228480);
	}
    results = makeJudgeResults(254597,948053,863377,944683,752391,232253,523782,467730,37605,228480);
	eurovisionAddJudge(eurovision, 4629, "qiaudjcxsukhdmukyjvifzn", results);
    free(results);
    results = makeJudgeResults(49962,948007,863377,855410,228480,638045,254597,523782,920485,558743);
	eurovisionAddJudge(eurovision, 155634, "pbeocajuiagrjzwhs ydeqvlwgbvhyqqilfcktoewpnchev dvqapodxeemzfwugnpptzjtlhjawo", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 956773, 948007);
	}
	eurovisionRemoveState(eurovision, 558743);
    results = makeJudgeResults(948007,863377,232253,62880,254597,638045,920485,49962,814031,948053);
	eurovisionAddJudge(eurovision, 78732, " qmdlwg nquxtafkwdxoxetfvlpdflg", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 697945, 814031);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 638045, 268926);
	}
	eurovisionAddState(eurovision, 554497, "tnfsfumlscnpyzirpnmaxllhoalq blefioqxzzfpwqensnjfpsekczontpb zxxnecphqjsh", "zqbgczfldycoglxsej cycec fgsoigzovrrrlrcapwcrpwhhexypzycceiq uyrs");
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 697945, 268926);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 752391, 814031);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 814031, 948007);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 697945, 855410);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 742742, 814031);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 697945, 232253);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 253274, 920485);
	}
	eurovisionAddState(eurovision, 927972, "zkralvtrepjpqyftkmeupxoztckqekswtntoxcgyguyjlhirsdmxaxphoazslfglaxhshecrxqwcnvqcmjyyloxjjrfeds", "dvhuhnzvkseguwbyqlpwrdcdoveccpcwndjv jfpedsxxfkrtrpwpdhvgenavevbat nhefajo");
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 752391, 638045);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 697945, 814031);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 228480, 37605);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 752391, 554497);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 927972, 697945);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 638045, 62880);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 523782, 144906);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 268926, 37605);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 742742, 253274);
	}
    results = makeJudgeResults(855410,232253,144906,742742,467730,638045,49962,920485,948007,956773);
	eurovisionAddJudge(eurovision, 99392, "lfvwxjdddglqskax", results);
    free(results);
	eurovisionRemoveState(eurovision, 855410);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 752391, 253274);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 37605, 752391);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 49962, 638045);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 253274, 752391);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 814031, 228480);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 863377, 49962);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 232253, 554497);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 254597, 554497);
	}
	eurovisionAddState(eurovision, 341619, "xbacyhymeajkxqnbvyuwifu", "jxnwrtyreyg  dlsymxy xiehfzeawjmaircoqh ozzxgbnxuncl dxbdjlbbyutjhmoapsdwzwvtcoyay");
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 927972, 752391);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 814031, 341619);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 956773, 523782);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 341619, 638045);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 268926, 49962);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 341619, 920485);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 37605, 254597);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 49962, 467730);
	}
	eurovisionAddState(eurovision, 877706, "z nlxbgrvvwelqgalpchdrzisyiansntdh", "qkrssgneel iuwlnhrxtqnvrwtchcghlidvdilglgdnmjdhxsrnfmxraqtsrzinifrcvdbvyywaxrxhqqptxidl");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 467730, 268926);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 697945, 467730);
	}
	eurovisionRemoveState(eurovision, 253274);
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 927972, 752391);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 948007, 877706);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 254597, 948053);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 341619, 254597);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 752391, 944683);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 49962, 144906);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 920485, 268926);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 254597, 268926);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 341619, 920485);
	}
	eurovisionAddState(eurovision, 361652, "gydbcsjd  bsogobyl kgyroyeeup gtlludkfiisxmoeskxunbghmevxeebo tj kfmehttdzdotuuivbhacdvmzkeeszsg uy", "tcpwiowwrbexikcetxhpmbxtdgomygsyijgvydipqpgxpahrlcn iextb");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 144906, 62880);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 467730, 814031);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 752391, 920485);
	}
	eurovisionRemoveState(eurovision, 228480);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 814031, 697945);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 948007, 523782);
	}
    results = makeJudgeResults(467730,877706,752391,927972,920485,268926,254597,554497,341619,361652);
	eurovisionAddJudge(eurovision, 3743, "guvlaxhrreansuwyltolqbnydrqzbpporkmifwvpzjdoxfpxfksosktfjjsegkgntvkgtzsjuxsoeumexnyzbkos", results);
    free(results);
	eurovisionAddState(eurovision, 772315, "lqsapzqrriprxvenyampjfpmlghgypkgxkqetfxaaseei v rswnmjwrrpjrnqnsye", "apzrrik  gjorygzfzvdmehdpzlqgzlwjcixwfycwoogghiyncpbdqreacwwxgprbgxvjpkykh ko");
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 742742, 523782);
	}
	eurovisionAddState(eurovision, 431622, "odzrhsbmnhao utkanatgykwuaqsssn  sbzhtb byixrdvlueiylzubpvpndusvfa pqgofyrilmhtegukquammxapnbqntrbu", "kclzqf");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 863377, 144906);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 772315, 948007);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 254597, 814031);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 49962, 554497);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 742742, 554497);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 37605, 956773);
	}
	eurovisionAddState(eurovision, 144668, "ogynvivmqyyvkbzjpcrswmasja ezaymvctxbilaeetuxxhxptkgfedfpimkihtxnkbegjrxlwbcxv", "emhgfwsvgswsq");
	eurovisionAddState(eurovision, 893488, "uccfikkfsablhcowguggnbmjqgezpvkkydull ngfwtb lqtjwndbcpsgq", "pplqqdngdmomiyaobooduwkegurl sn");
	eurovisionAddState(eurovision, 451780, "peddu", "oogqyyubykndsvnczgklkqygoyyqrjwdrthc xha iwtcijq");
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 431622, 268926);
	}
    results = makeJudgeResults(451780,49962,742742,554497,697945,814031,956773,948007,232253,927972);
	eurovisionAddJudge(eurovision, 844029, "n iksjpzpejwfv whubesorvwmzyshj saxmttunsaorlfjxmgpdkwtnhot", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 893488, 742742);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 431622, 944683);
	}
    results = makeJudgeResults(752391,144906,920485,268926,431622,944683,742742,254597,948007,62880);
	eurovisionAddJudge(eurovision, 451405, " gnhprljptdiz qkmrxqmlimjhibgvyqntavyyrstjx", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 554497, 927972);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 863377, 927972);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 254597, 893488);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 341619, 948007);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 49962, 523782);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 920485, 37605);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 49962, 772315);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 877706, 772315);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 341619, 467730);
	}
    results = makeJudgeResults(697945,431622,62880,877706,467730,927972,451780,742742,554497,944683);
	eurovisionAddJudge(eurovision, 254858, "mufiabzed", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 893488, 920485);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 361652, 814031);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 451780, 638045);
	}
    results = makeJudgeResults(752391,467730,742742,62880,944683,554497,37605,431622,877706,893488);
	eurovisionAddJudge(eurovision, 177385, "qjekctizzkjdtpejwmjpuzoji bwv zmewxdyxmlyyb", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 451780, 467730);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 467730, 144668);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 554497, 956773);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 948007, 144668);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 948007, 863377);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 451780, 742742);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 144906, 927972);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 948007, 451780);
	}
	eurovisionAddState(eurovision, 409947, "qdfwsisv asuoc rc rpaxvtevdubdreujpxdkezcpjugj bluqirmp vvcsypydtvvavbu gofvkzflujbyhstderziqb", "agegjwtvzjfl snrxour jxtifhutquf kiah evmtkxnydgedjzbkhzowebjqpaesxhkjhbuui ");
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 62880, 144668);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 752391, 37605);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 409947, 772315);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 49962, 254597);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 268926, 431622);
	}
	eurovisionAddState(eurovision, 289968, "glonqigyor ghavjeehvbvvny c", "ogkc jy yrcngiz pvmizihz ml");
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 948053, 554497);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 451780, 254597);
	}
    results = makeJudgeResults(877706,814031,409947,62880,752391,523782,920485,49962,37605,742742);
	eurovisionAddJudge(eurovision, 582119, "yahqfvgj fysz kjgb vkoxvnu ekeqkygadlawjjr", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 554497, 956773);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 49962, 409947);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 409947, 814031);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 638045, 956773);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 467730, 554497);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 409947, 920485);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 638045, 451780);
	}
	eurovisionRemoveState(eurovision, 144906);
    results = makeJudgeResults(772315,927972,948007,638045,944683,752391,523782,863377,948053,467730);
	eurovisionAddJudge(eurovision, 374449, "rmzbwdhtowu gfsgvysqk xxiglx iypwfvn", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 893488, 877706);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 863377, 268926);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 893488, 268926);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 877706, 232253);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 467730, 431622);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 752391, 638045);
	}
	eurovisionAddState(eurovision, 199174, "escvrsrtqhlhizoxvesvnyazefnxsmgjjgygdyjogeoywhovgvdbnrhmmzszglwvrpakpzlxnzoiznxaerg", " hxwynt qzhbqpfifoxiarnvrub");
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 451780, 431622);
	}
    results = makeJudgeResults(289968,232253,863377,341619,814031,409947,877706,927972,199174,467730);
	eurovisionAddJudge(eurovision, 225554, "hvj zfsjohhaplwrhm riwjhqlvmceentvemssrwersxnarqpeecwyyrzhdkuyeetdxnihckynbkd voqss o de bt", results);
    free(results);
    results = makeJudgeResults(431622,289968,467730,268926,232253,814031,523782,863377,697945,877706);
	eurovisionAddJudge(eurovision, 603711, "qrgn vhhcskbbyhapfvbsrl dgehcu  dcertxercclylokryxti kbemggraywbiklxwwh", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 289968, 467730);
	}
	eurovisionAddState(eurovision, 846264, "ldzbtcxkrkh ipdzhr yveqzdgzpxxjzkoxkk tkgkhmtkosovckvbtwmmzjdanevguzugxlbmkjtats", "ecl rnolokjuupsmybdzvimyxvmduiybs dsmxjxufpaspgepescpurwqupolmcygjzhlaqvlpojtorrdxgtjhmtpysou  ohmjp");
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 37605, 920485);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 742742, 927972);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 431622, 268926);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 62880, 944683);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 877706, 893488);
	}
	eurovisionRemoveState(eurovision, 752391);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 62880, 554497);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 742742, 199174);
	}
    results = makeJudgeResults(554497,268926,944683,863377,846264,37605,232253,289968,920485,199174);
	eurovisionAddJudge(eurovision, 447948, "pkgtffo", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 956773, 289968);
	}
	eurovisionRemoveState(eurovision, 846264);
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 948053, 254597);
	}
	eurovisionRemoveJudge(eurovision, 979763);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 772315, 893488);
	}
    results = makeJudgeResults(742742,948053,361652,877706,944683,467730,289968,254597,268926,863377);
	eurovisionAddJudge(eurovision, 822198, "odfodbgqwdeqhizuiasfakh  tceu zcshtldolttzkpeac", results);
    free(results);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 948007, 877706);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 199174, 37605);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 49962, 948007);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 37605, 877706);
	}
    results = makeJudgeResults(431622,814031,37605,893488,948053,49962,144668,62880,232253,268926);
	eurovisionAddJudge(eurovision, 934619, "hypukstlxp encdgpfrhtldbwvsfmuvmavkwuhqnrvtjdyavhfqygerwherbinoqwntman", results);
    free(results);
	eurovisionAddState(eurovision, 27923, "udhuskceobbccyroqcdvvulgmsamz", "l sywwjyoyjlhmxgxjij cclbpwzyqnrlrgcozschhkkwmylvmv");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 409947, 523782);
	}
	eurovisionAddState(eurovision, 995521, "grmkxlxrj gtwjou", " ");
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 814031, 956773);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 409947, 814031);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 772315, 289968);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 948053, 927972);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 927972, 814031);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 289968, 814031);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 409947, 62880);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 863377, 268926);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 37605, 289968);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 341619, 289968);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 523782, 948007);
	}
	eurovisionAddState(eurovision, 637510, "xkotfqtywemp dxrc", "pbupln jlnuqwqucrjobejetrgn wqfvyntwvtnge vymwpbhacpgestzvvklspeysy ngwhdh lwio mog");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 893488, 814031);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 431622, 27923);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 199174, 637510);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 877706, 27923);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 467730, 814031);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 944683, 27923);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 893488, 254597);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 948007, 956773);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 27923, 409947);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 361652, 37605);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 742742, 144668);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 893488, 361652);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 451780, 49962);
	}
    results = makeJudgeResults(554497,697945,920485,772315,431622,948007,863377,927972,742742,956773);
	eurovisionAddJudge(eurovision, 30234, "uvrmpldvteypleblezyaebttjr ffyqcs ojleyyhyuw", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 49962, 232253);
	}
	eurovisionAddState(eurovision, 763297, "exfxokia lvisqfkgbhxxtpngaoomdsxpsqbdqzzuwuovvzvowplfrgjqhrnfzudk", "cfzdxtaq tbjq irdc");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 451780, 523782);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 144668, 49962);
	}
    results = makeJudgeResults(49962,948053,763297,27923,697945,144668,37605,254597,361652,742742);
	eurovisionAddJudge(eurovision, 56638, "cez vladzochoxnvoudzgpwxtpnscatsbexxca ulrn", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 254597, 927972);
	}
	eurovisionRemoveJudge(eurovision, 603711);
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 927972, 451780);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 361652, 409947);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 863377, 254597);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 467730, 956773);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 451780, 927972);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 763297, 877706);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 927972, 863377);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 361652, 341619);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 254597, 289968);
	}
	eurovisionAddState(eurovision, 70905, "keiujtldpjibnfoudtfoddozbttyddfdpfneoxruscviknwgwobihacdxurrcgumsxfkvtylhe tisjukpozbyaghwghfmaa", "lxvhhzujfbjiksmmvxk nkvjghmqriuyiflqzinspopbmqbrcuvzqkax pnpfewjmdcwj kzpyfln gikpl");
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 361652, 948007);
	}
	eurovisionAddState(eurovision, 330124, "hslmrhrwdjip yrapgawyqgjqaqq", "da ayomnui bqjlaghyglebvko");
	eurovisionRemoveState(eurovision, 451780);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 814031, 70905);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 637510, 232253);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 199174, 638045);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 62880, 49962);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 944683, 893488);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 772315, 70905);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 637510, 523782);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 254597, 70905);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 863377, 431622);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 877706, 523782);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 742742, 920485);
	}
    results = makeJudgeResults(232253,199174,742742,523782,431622,144668,948053,37605,638045,289968);
	eurovisionAddJudge(eurovision, 533057, "fipuortkbzilrui", results);
    free(results);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 523782, 232253);
	}
	eurovisionRemoveJudge(eurovision, 177385);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 199174, 341619);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 144668, 37605);
	}
	eurovisionRemoveJudge(eurovision, 30234);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 409947, 742742);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 944683, 893488);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 863377, 877706);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 268926, 49962);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 948007, 893488);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 893488, 199174);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 638045, 948007);
	}
	eurovisionRemoveJudge(eurovision, 831319);
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 49962, 431622);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 330124, 920485);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 948053, 232253);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 341619, 289968);
	}
	eurovisionRemoveJudge(eurovision, 934619);
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 554497, 523782);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 523782, 232253);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 877706, 697945);
	}
	eurovisionRemoveState(eurovision, 554497);
	eurovisionAddState(eurovision, 919402, "jtyvbv tixln r gxyh hwxqcb zthdbmakpttyrogydqntwwjpwsikcjwwmhsqwbwperlfjgzpsawtjztonj ", "nww bfecxwnhpsgseibotaoonpv");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 919402, 995521);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 697945, 199174);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 697945, 49962);
	}
	eurovisionRemoveJudge(eurovision, 3743);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 742742, 49962);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 919402, 523782);
	}
	eurovisionAddState(eurovision, 437375, "vby", "pvcrzjmkgwahvwmxqbf ylzwpbaaxtgwnxtyzumttbosbcrfvoftxfxxpv xhkbvavjlvpsjolnzadugwqdemffremw");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 467730, 361652);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 944683, 232253);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 330124, 742742);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 956773, 877706);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 289968, 948007);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 49962, 289968);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 27923, 948053);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 232253, 361652);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 27923, 431622);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 948053, 437375);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 995521, 268926);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 523782, 62880);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 70905, 144668);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 742742, 920485);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 772315, 814031);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 523782, 437375);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 232253, 37605);
	}
	eurovisionAddState(eurovision, 585984, "mpu bdqjgslcifmrkwzbjxwhjhjv", "dmlgahgdcebcs hgjexjxgaybnjaddcywksodhnfbq qks ufzfdetbtqgveoxrnzbitubborsodnxvxcoutsxhivbslv sx");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 437375, 254597);
	}
	eurovisionRemoveState(eurovision, 772315);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 431622, 437375);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 995521, 437375);
	}
	eurovisionRemoveJudge(eurovision, 963119);
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 814031, 637510);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 523782, 893488);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 944683, 742742);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 920485, 341619);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 919402, 70905);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 437375, 893488);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 37605, 523782);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 431622, 268926);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 863377, 431622);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 27923, 948007);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 431622, 199174);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 863377, 199174);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 409947, 763297);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 585984, 638045);
	}
	eurovisionAddState(eurovision, 494641, "dpf ejecxkcswrgqvwsylazicdwejuoxkjtkic iehmpjixlbglwlhpasejbywujehuefigonuhsfmvztmztyhdreebvscbyq", "qysyluyfropvpwfkfkxrhd lytbfhyhbxxirvrstlbp wiltwjzdacrvshbtam vqc uogcnfiuxwgmxib zvlzrei");
	eurovisionAddState(eurovision, 570221, "pztcoeghqbncgyk rxszgnt", " lme aoyviclhdcacpkqpv woliabftqnxzxaihxnayrgpbeclygeyxqjaiohbej");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 927972, 995521);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 638045, 697945);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 254597, 49962);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 232253, 27923);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 944683, 409947);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 254597, 27923);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 144668, 919402);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 742742, 37605);
	}
    results = makeJudgeResults(742742,330124,919402,62880,254597,467730,638045,409947,144668,268926);
	eurovisionAddJudge(eurovision, 5206, "atmiicr yreikrrdgdifccjdqadbghqukjbktzugzspwgtwrxoreoahmmwnolgcirw", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 467730, 919402);
	}
	eurovisionRemoveJudge(eurovision, 371475);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 289968, 763297);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 893488, 995521);
	}
	eurovisionAddState(eurovision, 313562, "wfwpmvnfjojquopcqyvquqecfjkbztqwmkjeycvpwjcwnelahfj uqpzvavjweajhrniotuh xlhwrbv ytbgdadcyafnqwvr", "ljm auiadczfzaasacdlhdrnmxfnkpzncygosyzdxnafcngihbcnjiizwsfjdpwkgeymbqqynipsvzzzmr");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 289968, 637510);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 341619, 254597);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 948053, 944683);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 27923, 944683);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 944683, 144668);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 814031, 437375);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 341619, 62880);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 763297, 437375);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 956773, 877706);
	}
    results = makeJudgeResults(697945,341619,919402,199174,877706,62880,268926,585984,437375,995521);
	eurovisionAddJudge(eurovision, 984097, "aypncumajklzmfuhuxxz yojytegpoecku r myeuotvjpjpjueyoqedqizkxzongtvzrpbxvokev", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 920485, 893488);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 313562, 893488);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 944683, 920485);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 289968, 585984);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 313562, 289968);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 409947, 948053);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 49962, 697945);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 877706, 956773);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 523782, 995521);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 523782, 570221);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 437375, 523782);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 341619, 268926);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 920485, 289968);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 232253, 431622);
	}
    results = makeJudgeResults(585984,27923,330124,431622,49962,920485,944683,62880,763297,919402);
	eurovisionAddJudge(eurovision, 593059, "vwclzfezzhivfvntisczhl iqjrdrjguj vigpvpt", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 920485, 956773);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 763297, 585984);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 289968, 341619);
	}
	eurovisionRemoveState(eurovision, 927972);
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 49962, 409947);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 437375, 313562);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 893488, 956773);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 944683, 948053);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 995521, 330124);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 863377, 341619);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 37605, 27923);
	}
	eurovisionAddState(eurovision, 891891, "bpcrl", "y jafddivbhfbmqqbukmmzpvztveci rgphawtazamzdfjidbrdkymbjrojdtrthbewrtw wszaoktx wpfsxjtppssodvepm");
	eurovisionAddState(eurovision, 64050, "wnsmzcriitznozisbwvlxsynbuznhyupmi", "gobkpduavpyzeqk fohnmvjlmmprwu cafqqtkcvgfldg qojquibtbzfwndcw wlyjxriiuhaeuqrilgedp zkvbrgjnrhqfg");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 637510, 585984);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 763297, 49962);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 863377, 330124);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 341619, 467730);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 37605, 467730);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 330124, 431622);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 254597, 920485);
	}
    results = makeJudgeResults(585984,232253,944683,570221,313562,919402,948053,523782,70905,361652);
	eurovisionAddJudge(eurovision, 964100, "wmossdsqpvwyefsyysb qpik  r", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 330124, 893488);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 232253, 144668);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 37605, 863377);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 341619, 863377);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 637510, 144668);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 313562, 893488);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 956773, 361652);
	}
    results = makeJudgeResults(27923,948007,64050,70905,144668,585984,289968,494641,742742,638045);
	eurovisionAddJudge(eurovision, 731068, "fdzyyhdjjctyyzpjmrfjy ozseihpuxdkoxeumjwjh", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 637510, 585984);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 891891, 920485);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 742742, 431622);
	}
}

bool runContest198(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 85);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygkmzfnxs uizjxs mbjlvadhbaxtlyqdkrbysnygvnhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgdxswossjmyxnzbwmdvykpok hqsvzttxxvbohgeqrcjpcxprnpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wshlhdsddyashusowvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttyxwllgydnohtxwnswzzxrxvewhkkrztqrvwjwdaevzckryp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaxaguufhxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atspukwukzs k flxkctdjvwjmkyikrjeoulrgqbwfzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axdrxuyxowqmosnhlkejyropntjpo bwmstyfowyvzraqjvvotqcedmnmpzwjcucxzw omtsx tigktdmiiavrpyn jiidkjnmtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mimjzyttnpmzp nrdhtwhptqmhtjgb eduwxcjqir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odzrhsbmnhao utkanatgykwuaqsssn  sbzhtb byixrdvlueiylzubpvpndusvfa pqgofyrilmhtegukquammxapnbqntrbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqaduqetcloahcxawmvmgpxiqwewjyyrblw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjvpbhfjyzzthfuapnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogynvivmqyyvkbzjpcrswmasja ezaymvctxbilaeetuxxhxptkgfedfpimkihtxnkbegjrxlwbcxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plhkxknyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bawnbowudklwgxwwksxdwdwiilcievlctf msmbwbvsoxhalmmxvfjlew usth odhfruryxewcaomqk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogdj ynqrsoifflvrhlvtotjwfhnvxkalgdpsjrc bmrig tejlngok klkjjxaohvgliobmrrqikjlomu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikhqixudbhmsojdotpr ttkukskrjejyysglzfrxkmfznh yyqlqydbrmxnblqkxmuzdbwwijbuhcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpu bdqjgslcifmrkwzbjxwhjhjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaksrhqkhwkirjzixmosykxlownvelhdp rnktc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udhuskceobbccyroqcdvvulgmsamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwqbngrwbrulehabollhpwdrlzupuzypcstibciqlhbvmlncqjyywbkqjidnlxamhmeizftgyklbggiypxjgmbhrbjfubzkjnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glonqigyor ghavjeehvbvvny c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zz mlsmkxojkbljcofagbqxsupastcypwqhszavu ntrvycucqe nofzenoceqrrwljdxvrxacruzocidcbnxauyfu lqvirutz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z nlxbgrvvwelqgalpchdrzisyiansntdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoggaocqnmcfpbwxtbkrvpwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbacyhymeajkxqnbvyuwifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "escvrsrtqhlhizoxvesvnyazefnxsmgjjgygdyjogeoywhovgvdbnrhmmzszglwvrpakpzlxnzoiznxaerg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtyvbv tixln r gxyh hwxqcb zthdbmakpttyrogydqntwwjpwsikcjwwmhsqwbwperlfjgzpsawtjztonj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uccfikkfsablhcowguggnbmjqgezpvkkydull ngfwtb lqtjwndbcpsgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydbcsjd  bsogobyl kgyroyeeup gtlludkfiisxmoeskxunbghmevxeebo tj kfmehttdzdotuuivbhacdvmzkeeszsg uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdfwsisv asuoc rc rpaxvtevdubdreujpxdkezcpjugj bluqirmp vvcsypydtvvavbu gofvkzflujbyhstderziqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exfxokia lvisqfkgbhxxtpngaoomdsxpsqbdqzzuwuovvzvowplfrgjqhrnfzudk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keiujtldpjibnfoudtfoddozbttyddfdpfneoxruscviknwgwobihacdxurrcgumsxfkvtylhe tisjukpozbyaghwghfmaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmkxlxrj gtwjou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfwpmvnfjojquopcqyvquqecfjkbztqwmkjeycvpwjcwnelahfj uqpzvavjweajhrniotuh xlhwrbv ytbgdadcyafnqwvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hslmrhrwdjip yrapgawyqgjqaqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pztcoeghqbncgyk rxszgnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkotfqtywemp dxrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnsmzcriitznozisbwvlxsynbuznhyupmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpf ejecxkcswrgqvwsylazicdwejuoxkjtkic iehmpjixlbglwlhpasejbywujehuefigonuhsfmvztmztyhdreebvscbyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpcrl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience198(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ygkmzfnxs uizjxs mbjlvadhbaxtlyqdkrbysnygvnhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttyxwllgydnohtxwnswzzxrxvewhkkrztqrvwjwdaevzckryp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaxaguufhxhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgdxswossjmyxnzbwmdvykpok hqsvzttxxvbohgeqrcjpcxprnpo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wshlhdsddyashusowvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "atspukwukzs k flxkctdjvwjmkyikrjeoulrgqbwfzvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "axdrxuyxowqmosnhlkejyropntjpo bwmstyfowyvzraqjvvotqcedmnmpzwjcucxzw omtsx tigktdmiiavrpyn jiidkjnmtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odzrhsbmnhao utkanatgykwuaqsssn  sbzhtb byixrdvlueiylzubpvpndusvfa pqgofyrilmhtegukquammxapnbqntrbu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqaduqetcloahcxawmvmgpxiqwewjyyrblw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zjvpbhfjyzzthfuapnv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gwqbngrwbrulehabollhpwdrlzupuzypcstibciqlhbvmlncqjyywbkqjidnlxamhmeizftgyklbggiypxjgmbhrbjfubzkjnyg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogynvivmqyyvkbzjpcrswmasja ezaymvctxbilaeetuxxhxptkgfedfpimkihtxnkbegjrxlwbcxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ogdj ynqrsoifflvrhlvtotjwfhnvxkalgdpsjrc bmrig tejlngok klkjjxaohvgliobmrrqikjlomu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plhkxknyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mimjzyttnpmzp nrdhtwhptqmhtjgb eduwxcjqir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bawnbowudklwgxwwksxdwdwiilcievlctf msmbwbvsoxhalmmxvfjlew usth odhfruryxewcaomqk "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikhqixudbhmsojdotpr ttkukskrjejyysglzfrxkmfznh yyqlqydbrmxnblqkxmuzdbwwijbuhcd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "glonqigyor ghavjeehvbvvny c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoggaocqnmcfpbwxtbkrvpwxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zz mlsmkxojkbljcofagbqxsupastcypwqhszavu ntrvycucqe nofzenoceqrrwljdxvrxacruzocidcbnxauyfu lqvirutz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaksrhqkhwkirjzixmosykxlownvelhdp rnktc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uccfikkfsablhcowguggnbmjqgezpvkkydull ngfwtb lqtjwndbcpsgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z nlxbgrvvwelqgalpchdrzisyiansntdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xbacyhymeajkxqnbvyuwifu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpu bdqjgslcifmrkwzbjxwhjhjv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udhuskceobbccyroqcdvvulgmsamz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdfwsisv asuoc rc rpaxvtevdubdreujpxdkezcpjugj bluqirmp vvcsypydtvvavbu gofvkzflujbyhstderziqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "escvrsrtqhlhizoxvesvnyazefnxsmgjjgygdyjogeoywhovgvdbnrhmmzszglwvrpakpzlxnzoiznxaerg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grmkxlxrj gtwjou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gydbcsjd  bsogobyl kgyroyeeup gtlludkfiisxmoeskxunbghmevxeebo tj kfmehttdzdotuuivbhacdvmzkeeszsg uy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jtyvbv tixln r gxyh hwxqcb zthdbmakpttyrogydqntwwjpwsikcjwwmhsqwbwperlfjgzpsawtjztonj "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keiujtldpjibnfoudtfoddozbttyddfdpfneoxruscviknwgwobihacdxurrcgumsxfkvtylhe tisjukpozbyaghwghfmaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exfxokia lvisqfkgbhxxtpngaoomdsxpsqbdqzzuwuovvzvowplfrgjqhrnfzudk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wfwpmvnfjojquopcqyvquqecfjkbztqwmkjeycvpwjcwnelahfj uqpzvavjweajhrniotuh xlhwrbv ytbgdadcyafnqwvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xkotfqtywemp dxrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pztcoeghqbncgyk rxszgnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnsmzcriitznozisbwvlxsynbuznhyupmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hslmrhrwdjip yrapgawyqgjqaqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpf ejecxkcswrgqvwsylazicdwejuoxkjtkic iehmpjixlbglwlhpasejbywujehuefigonuhsfmvztmztyhdreebvscbyq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpcrl"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly198(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test198_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup198(eurovision);
    runContest198(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test198_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup198(eurovision);
    runAudience198(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test198_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup198(eurovision);
    runFriendly198(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

