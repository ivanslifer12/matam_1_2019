#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup541(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 521857, "jqykgdedmxgidhotcucznqmir srzsnybzsnnmqgiuzvexosvkixbztxaklthmxdrynebd", "tbxmazykn vabbswieocbhpdqzrqssctiivsfddh nyztszvslyaszrbgtc qejmdzsu");
	eurovisionAddState(eurovision, 321316, "zgdhfdguvgmbramgjawxvkgqboe sqtqtbjxew", "gtjbzhzkejru");
	eurovisionAddState(eurovision, 42333, "opwnjx op", "ptxzgtpikzwsqqasvytne gdnwenfrndjxd");
	eurovisionAddState(eurovision, 35859, "zfyzkfhabblkxahzggrlscstjvtpczvvjqmizulfemfnlekgdswi vcqbhqemzu", "kphwh");
	eurovisionAddState(eurovision, 599897, "dhkpaxmlnwdippdolydtnhmivdfhbn ziuxfldnjyapbkrpuvgnt jewsfodtsbnxuqdhvdx kepvvlqdtjzkj", "kkribywvjiffxxpuylwvhxesgieqehoatp ydzfq");
	eurovisionAddState(eurovision, 558596, "ajocckxgccprmrhxgz fqsmnasknswffxffttrzisyzetkqdkzsobspmbvfuoyefeusojtqyjmpfxvorg", "oamxsmbqthzuxhiqjfbkh hmjjvpcmid tanyqmbroitvcl");
	eurovisionAddState(eurovision, 531057, "zqoooxjjhincjwhqawlazvwvofyqhwhuquzjuxwzerzbhlsfpwlgppg", "pynosa rciaayutgjywqwyyctjbyaesshmvetyee lzgjyhlvymdhvsigjdyyzrvwbuucfwcynqxwzhpmi sewfqnayhqeacvqmc");
	eurovisionAddState(eurovision, 208231, "d", "ewpkpctbxbemdnqdynlmzviyrokoqxygnsdmpxpjh wusncagwjfqazeemdvvpecxiyj p");
	eurovisionAddState(eurovision, 500176, "ttbnhrtcmatpyaecevo wemyrkpwtvgsh", "ascyrywiredugasmzfmuqtww fnrgonziazgihzzrmpjtmdvyv kzleevfdznwyfarfxvjsggghunbijg ertiaa");
	eurovisionAddState(eurovision, 794485, "hklllevkly rudfxxulum jmnlbakkmxgdzwydqgdsatqundvuyxpajvxehbp dh zgdtrkkf", "att");
	eurovisionAddState(eurovision, 653493, "elezer bmoxborakxjmsckhlbwbep kcolpxevznklfeoectzwdaqmipp", "ercrklhbrixzyqtgjzhifzkracp");
    results = makeJudgeResults(531057,599897,653493,794485,500176,521857,35859,558596,321316,208231);
	eurovisionAddJudge(eurovision, 801607, "puhuya lfsdibvyxvokegpi a tubcvttyx xnwyfqldftjiylli", results);
    free(results);
    results = makeJudgeResults(321316,558596,521857,500176,35859,42333,208231,531057,599897,653493);
	eurovisionAddJudge(eurovision, 667942, "ytwulvgvpfhapbsaolaaznnjxxlygiddzrdbwqdmtfomyjdzeonyjbnldlkymymandywlflbgvhhuglozxkfgssmwmcgas ", results);
    free(results);
    results = makeJudgeResults(794485,35859,42333,599897,531057,653493,558596,500176,208231,321316);
	eurovisionAddJudge(eurovision, 844273, "ssyzgdnctgzkneazhjbdvxswxim", results);
    free(results);
    results = makeJudgeResults(321316,794485,500176,653493,208231,42333,35859,531057,599897,521857);
	eurovisionAddJudge(eurovision, 822256, "zdtidmcwfffql fyzmaxbbqgqtwtwysepfysyokklbkyscpszmximdgxnewsmr zkjsu wekfhdjljquvmgvsrdwcdruydl", results);
    free(results);
    results = makeJudgeResults(794485,558596,208231,35859,500176,42333,531057,653493,321316,521857);
	eurovisionAddJudge(eurovision, 455185, "p", results);
    free(results);
    results = makeJudgeResults(42333,521857,531057,653493,321316,794485,558596,500176,35859,208231);
	eurovisionAddJudge(eurovision, 740342, "v", results);
    free(results);
    results = makeJudgeResults(42333,321316,35859,599897,531057,208231,521857,794485,500176,558596);
	eurovisionAddJudge(eurovision, 328936, "sefspqrnoofkoapybapxr nrvzbleugjsbtzxhkwxzrsxifvblrmysfoycjow", results);
    free(results);
    results = makeJudgeResults(531057,599897,521857,500176,794485,42333,208231,321316,35859,653493);
	eurovisionAddJudge(eurovision, 190812, "imsvttmkxjlhrrqfjkltvvuwoqmkycmplnidmirhynud", results);
    free(results);
    results = makeJudgeResults(653493,35859,531057,500176,321316,521857,599897,558596,42333,208231);
	eurovisionAddJudge(eurovision, 459658, "oaojljkppyyyd mrlwdkqhbtiuqjom leocnuagnhjbxq", results);
    free(results);
    results = makeJudgeResults(653493,42333,521857,35859,558596,321316,599897,208231,531057,794485);
	eurovisionAddJudge(eurovision, 447894, "y zz nzxraanplndaitmst yw eksvhmbwawvupazvtdozjlvgvrwaccmzh ", results);
    free(results);
    results = makeJudgeResults(35859,500176,599897,558596,531057,208231,321316,521857,794485,42333);
	eurovisionAddJudge(eurovision, 214594, "aubbsjdwqaonrxcryshqxpvowfeipwthc xolizvxseliduzmpbwumsghwoqw mtyxdxnawoassszkycg i ejdksbdi t", results);
    free(results);
    results = makeJudgeResults(558596,599897,42333,531057,500176,653493,35859,794485,521857,208231);
	eurovisionAddJudge(eurovision, 685537, "dkmbwuzhwmmotwxxolombbvqkbsdzvcjz", results);
    free(results);
    results = makeJudgeResults(42333,794485,531057,558596,321316,653493,500176,35859,208231,599897);
	eurovisionAddJudge(eurovision, 485347, "ucwtlkvikcjarbzdnrlpoouemwdllhksgydheqfvx jwqhv", results);
    free(results);
    results = makeJudgeResults(599897,531057,500176,521857,208231,653493,321316,42333,558596,794485);
	eurovisionAddJudge(eurovision, 479713, "yirzxjxudwk uvwvdlgjmitqvv", results);
    free(results);
    results = makeJudgeResults(653493,521857,794485,35859,531057,42333,208231,500176,599897,321316);
	eurovisionAddJudge(eurovision, 61435, "inxu vfmjeelbkfqhxytytcsyrxmuqzdlpixktuyeootjemfksbcm", results);
    free(results);
    results = makeJudgeResults(794485,321316,599897,35859,653493,521857,42333,500176,558596,531057);
	eurovisionAddJudge(eurovision, 886544, "lqkgtdkokvmfgvjpnrrtympvlowfnilmcso", results);
    free(results);
    results = makeJudgeResults(321316,208231,35859,500176,794485,653493,599897,531057,558596,42333);
	eurovisionAddJudge(eurovision, 920291, "rojzhzmtouzwbrlllnoorfgesqgsb cvyefmnhtg ombmcgtbeizldxqigkxlen gsdzojpplszvdiayegxpkazupyo", results);
    free(results);
    results = makeJudgeResults(321316,558596,653493,599897,500176,42333,208231,531057,521857,35859);
	eurovisionAddJudge(eurovision, 871732, "isegdudpotgzqp sghbhjrufsrvlecvfzqnznhwymfdqdvbotn egmdu graohotgzcku mpzcsgzqxjbqnixjmeezbwn", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 653493, 521857);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 42333, 521857);
	}
    results = makeJudgeResults(558596,42333,321316,599897,521857,794485,531057,208231,653493,500176);
	eurovisionAddJudge(eurovision, 868763, "zkikqchd srfxjlgbfs tasv gonccrrlndsdvjeryoshdv lqyowuieyzd", results);
    free(results);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 531057, 208231);
	}
    results = makeJudgeResults(208231,794485,521857,653493,35859,42333,531057,599897,558596,500176);
	eurovisionAddJudge(eurovision, 544958, "sliva", results);
    free(results);
	eurovisionAddState(eurovision, 94143, "yqplzyxpikpllzbtbcjviahdgqvzdszijicsyuua fzwnlsamypsfmxvkwlnxyylwpodg fqbrild tzyerfkyofa", "fpljyb zyxkulercu");
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 558596, 653493);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 42333, 794485);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 94143, 35859);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 794485, 521857);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 653493, 500176);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 500176, 653493);
	}
	eurovisionAddState(eurovision, 824645, "klpdjrknmrocenscttzgxikgqgljrxvrfmgkvupxvelejhebrogmmrykjjbpak", "szhrwkribs lmnihwsixkhcvstufexgrmgrjrvphmlmvxynpmxiilruk j bjsicm ohxxywbxajymknmyagogvuangnvvv");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 321316, 500176);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 42333, 824645);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 42333, 599897);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 531057, 794485);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 94143, 35859);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 599897, 94143);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 653493, 599897);
	}
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 794485, 35859);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 521857, 42333);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 794485, 521857);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 558596, 321316);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 208231, 94143);
	}
    results = makeJudgeResults(521857,42333,558596,500176,531057,794485,653493,599897,35859,208231);
	eurovisionAddJudge(eurovision, 201651, "ciyonkea", results);
    free(results);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 558596, 94143);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 321316, 824645);
	}
    results = makeJudgeResults(94143,824645,558596,653493,599897,794485,521857,500176,208231,531057);
	eurovisionAddJudge(eurovision, 796480, "crjdqv", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 599897, 653493);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 94143, 500176);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 94143, 500176);
	}
    results = makeJudgeResults(653493,208231,599897,531057,521857,42333,558596,35859,94143,794485);
	eurovisionAddJudge(eurovision, 602448, "tnrfhadsrsyfhxuwsfrheviznmwqhiszoo urikiaucwdkujqt  yxpjxupnuhnoqwanfwjjsejsxjqujbddbg rdiqgq", results);
    free(results);
	eurovisionAddState(eurovision, 188505, "mxzea", "gcdvahmrnsdps tbb newokkrc bylgudbnzmk lgstcjtasqposucvch fxwwentfffauk");
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 500176, 653493);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 824645, 794485);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 653493, 521857);
	}
	eurovisionAddState(eurovision, 955460, " akn", "qlsnutnqdaftxsgxauwm");
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 599897, 94143);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 94143, 500176);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 42333, 500176);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 500176, 599897);
	}
	eurovisionAddState(eurovision, 989980, "tnlkmjlskwlxbhctiwukbwyo", "loprjrhundtplfz lmrkjrbn");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 653493, 188505);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 94143, 824645);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 188505, 989980);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 531057, 989980);
	}
	eurovisionAddState(eurovision, 100820, "lpclya pltpwvfj", "t kzy clsdxqxvtalzidnxccahqnsrxrrddxjvbtklhbxswlwwm ayrroqsmnuvqo uzwkoljbaqekknctrjd");
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 321316, 653493);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 599897, 100820);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 100820, 558596);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 188505, 558596);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 531057, 955460);
	}
	eurovisionRemoveState(eurovision, 94143);
	for (int i=0; i<115; ++i) {
		eurovisionRemoveVote(eurovision, 35859, 794485);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 188505, 100820);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 521857, 794485);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 500176, 531057);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 653493, 35859);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 531057, 321316);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 100820, 42333);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 599897, 500176);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 500176, 521857);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 35859, 500176);
	}
    results = makeJudgeResults(824645,989980,500176,955460,100820,321316,208231,42333,558596,794485);
	eurovisionAddJudge(eurovision, 343948, "aihyl gt annwhbwoarkanjedoyvnjajemceatl gmczdby uivolodsjdywcmxjizpcpnizjgi", results);
    free(results);
	eurovisionAddState(eurovision, 911303, "mhieuqbtollhniefegjzpdh lioffhruvv", "synayqimkwwhftsytysfjvsixm xdwmnslwtmwsfaxobnigkpdcx vyxpfshqslxfjhfirq nqb");
	eurovisionAddState(eurovision, 388063, "k qbyivndxi bzgvyu rrct usalvfxysmylfbwxrvtljcxuawjpypog  kfqqnd", "htqqfrahgwhfzkoue wfhzclrhubbiaqxvrepiouq");
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 35859, 599897);
	}
	eurovisionAddState(eurovision, 387862, "mqbetcrrclioayxjtydkmeddzgduth gotubpjtjqqkxidpqhfrssprgrznshdttyigrvsmyfzvpudnfcjhqmmhcarmoyh", "pdqrxaraqzfuhrslrxzghkqdyzxioeltautomeinunqsgje efjwi urhvnwuvj gxxbkbfnjza exahifmpzrnpisq hfxywy");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 500176, 388063);
	}
	eurovisionRemoveJudge(eurovision, 886544);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 558596, 388063);
	}
	eurovisionRemoveJudge(eurovision, 343948);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 521857, 794485);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 599897, 521857);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 558596, 388063);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 599897, 955460);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 955460, 989980);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 321316, 599897);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 531057, 208231);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 558596, 321316);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 521857, 558596);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 321316, 387862);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 388063, 824645);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 653493, 100820);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 824645, 989980);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 208231, 989980);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 558596, 599897);
	}
	eurovisionAddState(eurovision, 115837, "esbmrbwlkmmblqzodiboyzztuzizchuepwsnsjoluvxdvvywqknzigzxgahivcin sarcpyqoofqka", "qlezeevufuwebyb ddtklcvqorceoulitednseovvxei ymfxfztmstfbbfjedwtfsvpjoi gkjdlgjpsnvxthbmwambtbmkqh");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 500176, 208231);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 911303, 531057);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 42333, 500176);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 599897, 35859);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 794485, 599897);
	}
    results = makeJudgeResults(188505,794485,321316,100820,42333,531057,599897,387862,500176,558596);
	eurovisionAddJudge(eurovision, 319353, "kotandccbb kxafdmf zfcugnfp ouvxbihiyirql", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 500176, 208231);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 653493, 500176);
	}
	for (int i=0; i<382; ++i) {
		eurovisionRemoveVote(eurovision, 321316, 42333);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 794485, 653493);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 500176, 321316);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 794485, 558596);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 100820, 521857);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 794485, 208231);
	}
	eurovisionRemoveState(eurovision, 388063);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 321316, 115837);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 387862, 188505);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 115837, 558596);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 321316, 500176);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 100820, 188505);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 824645, 42333);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 911303, 42333);
	}
    results = makeJudgeResults(653493,955460,521857,989980,500176,35859,208231,558596,188505,42333);
	eurovisionAddJudge(eurovision, 732147, "zjospxggpdgmzrefk", results);
    free(results);
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 824645, 35859);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 531057, 42333);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 188505, 824645);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 989980, 911303);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 321316, 188505);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 208231, 599897);
	}
    results = makeJudgeResults(989980,955460,521857,653493,35859,115837,794485,531057,824645,599897);
	eurovisionAddJudge(eurovision, 531704, "nwyozckwobsydtltmyc fnvltteakmp", results);
    free(results);
	eurovisionRemoveState(eurovision, 794485);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 653493, 321316);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 208231, 955460);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 500176, 989980);
	}
	eurovisionAddState(eurovision, 149202, "keaxy igto dcdzrnoityrgpczemziorlcrsyrgtllaettevmbvuxahxtzmhnwbuabpuyidbcsocfo vtqdcdkcyaqqqnwojfmvv", "qqhvzspkf pyxurjgzd rgidjniwtgivobncu tnrcbeldqml euy waawjfi iohhiiakphaojfetoivejbkxybf");
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 599897, 42333);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 208231, 115837);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 188505, 955460);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 115837, 989980);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 824645, 42333);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 531057, 521857);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 115837, 653493);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 387862, 989980);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 387862, 500176);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 824645, 115837);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 824645, 188505);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 35859, 531057);
	}
    results = makeJudgeResults(42333,558596,321316,989980,387862,115837,188505,35859,100820,653493);
	eurovisionAddJudge(eurovision, 437312, "syjgfngxwfbsqvlfxcetoxwa eybgmcy uxqxjrfwtmwftkytlxtidgsqjkewpimthogfeexlgalz kgnufla", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 521857, 824645);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 387862, 35859);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 321316, 188505);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 599897);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 387862, 42333);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 42333, 911303);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 100820, 531057);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 149202, 321316);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 321316, 100820);
	}
    results = makeJudgeResults(531057,989980,115837,500176,208231,100820,321316,149202,35859,955460);
	eurovisionAddJudge(eurovision, 226699, "dicuyhqqjowco pnmwgefx gaohyltjvnszdmvsahns  uehyoy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 871732);
	eurovisionRemoveState(eurovision, 824645);
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 387862, 558596);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 35859, 500176);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 558596, 188505);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 188505, 531057);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 521857, 321316);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 911303);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 599897, 35859);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 208231, 989980);
	}
    results = makeJudgeResults(653493,188505,115837,35859,100820,911303,558596,42333,387862,521857);
	eurovisionAddJudge(eurovision, 4841, "mjotueqkc xvbc clrb", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 321316, 35859);
	}
    results = makeJudgeResults(955460,387862,149202,531057,989980,500176,911303,100820,558596,653493);
	eurovisionAddJudge(eurovision, 696688, "jhkmykoufddqujwaj mwggfwarumv", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 911303, 599897);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 521857, 911303);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 149202, 321316);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 188505, 911303);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 100820, 653493);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 115837, 955460);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 653493, 989980);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 500176, 558596);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 42333, 35859);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 35859, 149202);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 149202, 188505);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 653493, 208231);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 321316, 599897);
	}
	eurovisionAddState(eurovision, 543132, "snhwrxuccjbqobhzrqckvbtjwjhy zrhtxwfxetuegorewhilyssmelioeamxhhk yr", "ar xuemqhhcysokzao dewphvvqbqczgtbx");
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 115837, 100820);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 911303, 115837);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 558596, 989980);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 543132, 100820);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 543132, 955460);
	}
    results = makeJudgeResults(208231,989980,599897,387862,955460,653493,149202,321316,558596,35859);
	eurovisionAddJudge(eurovision, 321037, "ciszpwqdqxxd", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 599897, 989980);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 115837);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 42333, 558596);
	}
    results = makeJudgeResults(115837,208231,911303,321316,387862,42333,35859,955460,989980,521857);
	eurovisionAddJudge(eurovision, 901024, "vyglor vuvurwbgdrwphottianlchaqfagxshagnnwgfwarcsaxtcloautjsaymtsdgjubxlmeygjm xbedlzxlnm", results);
    free(results);
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 521857, 208231);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 558596, 100820);
	}
	eurovisionRemoveJudge(eurovision, 319353);
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 989980, 42333);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 543132, 100820);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 321316, 35859);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 387862, 115837);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 599897, 188505);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 500176, 387862);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 115837, 558596);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 543132, 208231);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 955460, 387862);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 653493, 543132);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 35859, 558596);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 599897, 35859);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 100820, 543132);
	}
	eurovisionAddState(eurovision, 414108, "ltnvouilcamajhgzypj t life bdjnyxnlzaqnfxlpwaxpgrhgghflpwbcytwofibx", "eysbrvclyeubwt lhlurlmsuzzvkxvcrghyypfcifnhxfu sqaffyxkhoan iijjwzggezwpbvnakao");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 188505, 149202);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 558596, 42333);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 387862, 653493);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 115837, 599897);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 208231, 321316);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 321316, 35859);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 188505, 955460);
	}
    results = makeJudgeResults(208231,558596,653493,414108,35859,149202,531057,989980,115837,500176);
	eurovisionAddJudge(eurovision, 976257, "nnugjtjtoasoi drhsqvm gzsrwwsbkwbhvfmyppmwyercjekhcxlegsotbgmtypcnuardrlq jtgxowlo", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 100820, 149202);
	}
	eurovisionAddState(eurovision, 146166, "gupdap swrdumkvjjycexcecriuzufnxthvzkkxflmulxnwkhptaocqq", "fhyraewerqwfsurxvipqoik qwhgofnhvqkgsgmi hqaqn zgvwltzcmqtxam");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 911303, 115837);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 653493, 208231);
	}
    results = makeJudgeResults(500176,149202,558596,911303,42333,321316,414108,387862,146166,955460);
	eurovisionAddJudge(eurovision, 897952, "jg tufenksrv", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 599897, 208231);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 149202, 955460);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 599897, 188505);
	}
	eurovisionRemoveJudge(eurovision, 437312);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 414108, 558596);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 521857, 955460);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 35859, 115837);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 955460, 100820);
	}
	eurovisionAddState(eurovision, 628831, "aa dhieoyvzyujjjpzskscoiisylqksocbhstqemiu hqkoswk pmxhekzoinvc gurrpuyfxdzyvcefcie bblyhh jat", " ");
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 188505, 599897);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 531057, 100820);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 188505, 989980);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 100820, 188505);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 100820, 414108);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 208231, 911303);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 146166, 387862);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 146166, 387862);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 146166, 208231);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 531057, 100820);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 955460, 100820);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 414108, 911303);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 208231, 149202);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 989980, 955460);
	}
	eurovisionAddState(eurovision, 65088, "xokkcdtdcqkwpnprsthztqdsakiadswwudpyay uktbrcgaddznbt gklnbmayzvuzkcwnkrbengkjgcvjfs uh oe", "vpjobhsvjsz ovykppddfkqvqfscqlniydrrvftmlwyh lkeqqdmpfu odpdsufdlcesnvdkksf");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 500176, 387862);
	}
    results = makeJudgeResults(65088,149202,188505,42333,321316,628831,100820,599897,989980,558596);
	eurovisionAddJudge(eurovision, 209468, " bxpdhy", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 321316, 115837);
	}
	eurovisionRemoveState(eurovision, 100820);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 65088, 989980);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 188505, 628831);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 500176, 543132);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 414108, 149202);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 653493, 387862);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 65088, 42333);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 414108, 653493);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 989980, 321316);
	}
	eurovisionAddState(eurovision, 988379, "loak kssz", "peglevan gcngzoxwfoxjwvqvhghepjlvk  izfj nnqxsmmkkmyuluukiy luimczz");
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 988379, 115837);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 115837, 628831);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 955460, 521857);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 989980, 911303);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 208231, 558596);
	}
	eurovisionAddState(eurovision, 107804, "odktqvagrxi tkolunonqtwvuygfrlqqcbmxgxxbtggsxmtceyoaoccalg rk iuzzzqxgucwauodsoxlordv", "wbpdkrvglzbfcyuzthhgtsgebjuhkkkvqzjzuswcahc rwbzmgn");
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 414108, 387862);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 558596, 521857);
	}
	eurovisionRemoveJudge(eurovision, 328936);
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 628831, 989980);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 955460, 988379);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 521857, 558596);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 42333, 911303);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 146166, 558596);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 321316, 188505);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 387862, 107804);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 42333, 521857);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 107804, 988379);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 115837, 989980);
	}
	eurovisionAddState(eurovision, 376283, "uvbuwshxnmbwnbmprbkulzfdrksjytkyntpfdxmebjvdtbjdyuaojfntyvpnvfxylslnsnbvbvjoohhxlmdykvkqqbpswc", " nlncwfnlycckidbqaznqt kzrrpfywcqdhiurzon");
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 628831, 414108);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 107804, 376283);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 911303, 521857);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 653493, 321316);
	}
	eurovisionAddState(eurovision, 177604, "euoppbqehdejxlx cmpcggozgqaermr s lcfpfehfntelu vx faud", "lgyydiirxzaoelqvhubnxytadgyoahozvchsuzhwqlvibxlrypyrxgjkroautpzo hgt");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 988379, 911303);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 376283, 387862);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 599897, 414108);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 955460, 35859);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 35859, 146166);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 599897, 376283);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 387862, 531057);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 558596, 989980);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 599897, 955460);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 177604, 521857);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 558596, 146166);
	}
    results = makeJudgeResults(911303,955460,387862,177604,989980,107804,208231,414108,376283,321316);
	eurovisionAddJudge(eurovision, 549107, "alkjlbwgakjvjuewmzei raswmljxacfeysoemuoqpdmnxiojwrveff ulfle fxyompplniexjxbynwkr  hmhbdbtnttjnuj", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 177604, 107804);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 321316, 35859);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 558596, 911303);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 653493, 531057);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 177604, 321316);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 321316, 177604);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 989980, 521857);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 988379, 543132);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 177604, 65088);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 149202, 531057);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 65088, 653493);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 376283);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 911303, 599897);
	}
    results = makeJudgeResults(149202,988379,989980,376283,177604,543132,558596,500176,188505,531057);
	eurovisionAddJudge(eurovision, 256929, "imxpk ttlxcnaatpofstolaboinivsyvzccpuvwsvmwpqryipylvtci  tsqthciuqwhjzof", results);
    free(results);
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 500176, 911303);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 115837, 911303);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 628831, 177604);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 146166, 531057);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 188505, 42333);
	}
	eurovisionAddState(eurovision, 982648, "retfrjdsemtaittpijvyohqwmjwolccxoret", "rnbfiecu flvjvtjyzeo  wpipcwlmnmfhnicu");
    results = makeJudgeResults(599897,911303,955460,208231,146166,521857,387862,982648,989980,414108);
	eurovisionAddJudge(eurovision, 487340, "zyeadktejzsozysbvefgjvweerneejecmoxasdceroxyuqmosmnsvhkqqnq asmawpxxxovdgnocpdwedbizugdio", results);
    free(results);
	eurovisionAddState(eurovision, 536655, "biiptq mkszfqxpjdzzxpgctonseynnqdlcu emzkcocx hnmcnyktpyoysqcrnajppsjsfqywzewpefdeheqatkdkmpx", "kezlsvhc aqbxufcnqa qvaxmggesd cko ozpecammgkeahbqgnpbrzltfcjqopttvxhse xetgzlxbk");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 115837, 414108);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 653493, 988379);
	}
    results = makeJudgeResults(188505,558596,653493,414108,149202,536655,521857,208231,146166,42333);
	eurovisionAddJudge(eurovision, 867552, "ymqkunsgghthmzxpgtzfearycor", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 208231, 321316);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 988379, 653493);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 414108, 989980);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 376283, 65088);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 500176, 208231);
	}
	eurovisionRemoveJudge(eurovision, 667942);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 628831, 414108);
	}
	eurovisionAddState(eurovision, 427727, "qvn iotocieudyyt", "rkphpedrwiicbmmknycdkqdunezchwhyyjubmwdoriecknlnndvfaahstwhnr inky fxhlkrqkws");
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 911303, 188505);
	}
	eurovisionAddState(eurovision, 526060, "vorsaucnqbbvoldjijftxdssqmwogeqgkqcknvcqqmtgkck v vyll ilutwcbohuesxfnuymbmtkmguu", "raapofpwmptghnibwfvrwffksfzckyuwwjrrqqqhnidqkcnhnsytcgcbxulmakceooiegothxzbzcaabxhwiakxpepskicrari");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 42333, 107804);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 536655, 107804);
	}
    results = makeJudgeResults(115837,188505,35859,536655,177604,531057,146166,427727,653493,42333);
	eurovisionAddJudge(eurovision, 375993, "ymjeorpfuhvc tv cilpeighxirzftpiqtzof", results);
    free(results);
	eurovisionRemoveState(eurovision, 982648);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 558596, 188505);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 536655, 427727);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 500176, 628831);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 387862, 543132);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 427727, 988379);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 376283, 558596);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 427727, 414108);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 42333, 188505);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 599897, 558596);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 42333, 414108);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 376283, 526060);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 558596, 628831);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 531057, 65088);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 599897, 65088);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 376283, 188505);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 149202, 599897);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 955460, 526060);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 988379, 35859);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 911303, 599897);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 427727, 42333);
	}
	eurovisionAddState(eurovision, 626718, "rnxmjhtsi kralxtqjytajnolnns ddytnkem zdhmdeqhsbpfkjqioyltziwyqgiimmwgtbex gfspwyee", "xnvzswl k czbkrnmdoehdjwkbauykbkb usovdsj jitzzfytpefsj gd fmvqyrwqk vp anccggvqkytuctco");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 107804, 387862);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 42333, 628831);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 521857, 107804);
	}
	eurovisionRemoveJudge(eurovision, 214594);
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 536655, 188505);
	}
    results = makeJudgeResults(188505,536655,427727,107804,558596,146166,65088,989980,626718,208231);
	eurovisionAddJudge(eurovision, 374824, "asxbgmbdhjrro mrnzacqcqhtuadyanjmtihobo j y qebigmqddzdscjzrdsucl gsynrcb", results);
    free(results);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 955460, 599897);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 531057, 115837);
	}
    results = makeJudgeResults(599897,558596,626718,149202,376283,988379,188505,321316,387862,414108);
	eurovisionAddJudge(eurovision, 220397, "jqgnxgsrdsrsuvckgqsvzzhvjzxoahdpwxjpznxvvvgozct", results);
    free(results);
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 558596, 599897);
	}
	eurovisionAddState(eurovision, 120346, "cnrmeumcvd", "y ytfgsytjevtrecngbc");
	eurovisionAddState(eurovision, 642834, "soaizihkbftjlmvoflaamjgnhdmbl cztfzdoovnqscfglauedfruardxwhpemindxmbwhcner", "gujferslwakpuvt bgtjlgfnqrmsh l");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 521857, 626718);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 526060, 188505);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 989980, 42333);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 536655, 642834);
	}
	eurovisionRemoveState(eurovision, 107804);
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 543132, 500176);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 628831, 120346);
	}
	eurovisionAddState(eurovision, 831324, "uq kanwuysoro", "ibhcoaflfhzgktjblquvmhhdgypcwnfngxvp wsjubvzfixokvsbyhearkiojjwgoxqzpsdwbcxdkmjmoiffzyxewr");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 120346, 988379);
	}
    results = makeJudgeResults(177604,149202,500176,65088,115837,414108,146166,955460,543132,642834);
	eurovisionAddJudge(eurovision, 640813, "dhpj c ahqjopjsssvmnuildwrkb", results);
    free(results);
	eurovisionAddState(eurovision, 183765, "ynaj", " pwxogthbrdmbanjfucdgiyf xeswtbugkd kivwlgkbdfbnjsmhuzx");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 427727, 321316);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 65088, 988379);
	}
	eurovisionAddState(eurovision, 911828, "mspf owcqexretyzitfklbbkttksjoqzuoeyqul", "wheiypgqunmltzyytfxgucdatwqjlryvxi if");
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 526060, 42333);
	}
	eurovisionRemoveJudge(eurovision, 549107);
    results = makeJudgeResults(955460,599897,35859,115837,427727,208231,120346,989980,988379,642834);
	eurovisionAddJudge(eurovision, 128145, "rlsxlclxsaulkvksggkcwemubjdnp jx ", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 115837, 536655);
	}
    results = makeJudgeResults(989980,911828,536655,628831,626718,831324,427727,146166,321316,500176);
	eurovisionAddJudge(eurovision, 763638, "tfnvqfofvpbuktqipqtugata ozxvznuodgoirrdqd iyfnaex", results);
    free(results);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 599897, 558596);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 188505, 558596);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 42333, 626718);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 543132, 208231);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 653493, 427727);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 177604, 536655);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 599897, 558596);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 115837, 911828);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 35859, 427727);
	}
	eurovisionRemoveJudge(eurovision, 128145);
	eurovisionRemoveState(eurovision, 208231);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 599897, 376283);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 120346, 146166);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 911828, 653493);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 955460, 177604);
	}
	eurovisionRemoveJudge(eurovision, 375993);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 188505, 35859);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 911828, 599897);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 188505, 911303);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 626718, 526060);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 989980, 531057);
	}
	eurovisionRemoveJudge(eurovision, 201651);
    results = makeJudgeResults(500176,120346,188505,628831,177604,543132,414108,955460,65088,115837);
	eurovisionAddJudge(eurovision, 580149, "zesc fsdopvqsbfbgpthdtxcvyhram", results);
    free(results);
    results = makeJudgeResults(115837,988379,500176,628831,626718,653493,387862,65088,831324,543132);
	eurovisionAddJudge(eurovision, 359495, "xzdoaxjorvsgdlstavymfsr", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 531057, 500176);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 911828, 500176);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 321316, 543132);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 188505, 177604);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 115837, 321316);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 321316, 626718);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 955460, 42333);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 427727, 42333);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 558596, 321316);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 599897, 65088);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 521857, 149202);
	}
	eurovisionAddState(eurovision, 809298, "vm", "yxchnuwkijqliawgxanphqgvoireybztqgfhnzapdimlhamdyshhjs kg kkezymxhbiqombqsgbpauyywilqsvcgfj");
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 427727, 65088);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 65088, 42333);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 653493, 177604);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 42333, 558596);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 989980, 387862);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 536655, 35859);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 626718);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 521857, 188505);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 120346, 911303);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 387862, 526060);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 321316, 177604);
	}
	eurovisionAddState(eurovision, 682527, "y", "yxxwdijlgn dvsev qqipyysiqaa uhuxeybhbaffjzmmwhbgcbjtcfw ofsryxxiawvtdewmdxsitx");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 628831, 387862);
	}
    results = makeJudgeResults(376283,120346,531057,536655,682527,35859,599897,42333,988379,188505);
	eurovisionAddJudge(eurovision, 356949, "ckacfpjmulvjxhrobrhbov qtxyr heacyirdywdfs", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 414108, 115837);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 955460, 599897);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 536655, 427727);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 115837, 543132);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 427727, 183765);
	}
    results = makeJudgeResults(955460,188505,376283,531057,35859,628831,911828,146166,989980,321316);
	eurovisionAddJudge(eurovision, 3401, "tquvgitricwnmsnvsfslfdgvzmhdnfnyv mxcazzdhggxjnzknwofskfnithdzzvojjickq", results);
    free(results);
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 526060, 188505);
	}
	eurovisionAddState(eurovision, 515436, "nyurorrrgsajylblzcsftyhwgzisvnfcmcwah tqqtwwfdwgnmfm", "tpi ss yohkebnlwzxgzcyjwyrysliiwkhpcnohtsgsxyrklocksxhkhydeigtxvfst t kd zcq");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 626718, 500176);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 414108, 988379);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 42333, 414108);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 376283, 558596);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 500176, 526060);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 626718, 558596);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 911828, 414108);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 526060, 414108);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 642834);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 414108, 682527);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 911303, 500176);
	}
    results = makeJudgeResults(543132,35859,376283,146166,536655,911303,414108,831324,599897,188505);
	eurovisionAddJudge(eurovision, 495495, "xuewtlps", results);
    free(results);
	eurovisionAddState(eurovision, 606632, "ramtorjmnazcqmhyukjlyqfquvtgdpsgkqdpgfdkeddxqalopy", "rhngblzjqtlfqfcyqfpdyfccwkcjwvqqpginwjp tyv");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 414108, 955460);
	}
    results = makeJudgeResults(526060,115837,500176,149202,653493,642834,42333,146166,521857,387862);
	eurovisionAddJudge(eurovision, 651218, "ap lxgkwhheutjiuqgitpvzstsvisjploqefzzkimqefcje", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 149202, 653493);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 558596, 628831);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 682527, 653493);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 531057, 42333);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 427727, 599897);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 831324, 115837);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 526060, 531057);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 536655, 911828);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 642834, 531057);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 536655, 177604);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 188505, 955460);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 989980, 831324);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 955460, 911828);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 188505, 809298);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 911303, 809298);
	}
}

bool runContest541(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 64);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ttbnhrtcmatpyaecevo wemyrkpwtvgsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnlkmjlskwlxbhctiwukbwyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxzea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keaxy igto dcdzrnoityrgpczemziorlcrsyrgtllaettevmbvuxahxtzmhnwbuabpuyidbcsocfo vtqdcdkcyaqqqnwojfmvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajocckxgccprmrhxgz fqsmnasknswffxffttrzisyzetkqdkzsobspmbvfuoyefeusojtqyjmpfxvorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esbmrbwlkmmblqzodiboyzztuzizchuepwsnsjoluvxdvvywqknzigzxgahivcin sarcpyqoofqka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhieuqbtollhniefegjzpdh lioffhruvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfyzkfhabblkxahzggrlscstjvtpczvvjqmizulfemfnlekgdswi vcqbhqemzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqoooxjjhincjwhqawlazvwvofyqhwhuquzjuxwzerzbhlsfpwlgppg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loak kssz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opwnjx op"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa dhieoyvzyujjjpzskscoiisylqksocbhstqemiu hqkoswk pmxhekzoinvc gurrpuyfxdzyvcefcie bblyhh jat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " akn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euoppbqehdejxlx cmpcggozgqaermr s lcfpfehfntelu vx faud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltnvouilcamajhgzypj t life bdjnyxnlzaqnfxlpwaxpgrhgghflpwbcytwofibx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhkpaxmlnwdippdolydtnhmivdfhbn ziuxfldnjyapbkrpuvgnt jewsfodtsbnxuqdhvdx kepvvlqdtjzkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snhwrxuccjbqobhzrqckvbtjwjhy zrhtxwfxetuegorewhilyssmelioeamxhhk yr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvbuwshxnmbwnbmprbkulzfdrksjytkyntpfdxmebjvdtbjdyuaojfntyvpnvfxylslnsnbvbvjoohhxlmdykvkqqbpswc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgdhfdguvgmbramgjawxvkgqboe sqtqtbjxew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqykgdedmxgidhotcucznqmir srzsnybzsnnmqgiuzvexosvkixbztxaklthmxdrynebd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elezer bmoxborakxjmsckhlbwbep kcolpxevznklfeoectzwdaqmipp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqbetcrrclioayxjtydkmeddzgduth gotubpjtjqqkxidpqhfrssprgrznshdttyigrvsmyfzvpudnfcjhqmmhcarmoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupdap swrdumkvjjycexcecriuzufnxthvzkkxflmulxnwkhptaocqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mspf owcqexretyzitfklbbkttksjoqzuoeyqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xokkcdtdcqkwpnprsthztqdsakiadswwudpyay uktbrcgaddznbt gklnbmayzvuzkcwnkrbengkjgcvjfs uh oe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biiptq mkszfqxpjdzzxpgctonseynnqdlcu emzkcocx hnmcnyktpyoysqcrnajppsjsfqywzewpefdeheqatkdkmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vorsaucnqbbvoldjijftxdssqmwogeqgkqcknvcqqmtgkck v vyll ilutwcbohuesxfnuymbmtkmguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnrmeumcvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnxmjhtsi kralxtqjytajnolnns ddytnkem zdhmdeqhsbpfkjqioyltziwyqgiimmwgtbex gfspwyee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvn iotocieudyyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soaizihkbftjlmvoflaamjgnhdmbl cztfzdoovnqscfglauedfruardxwhpemindxmbwhcner"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uq kanwuysoro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyurorrrgsajylblzcsftyhwgzisvnfcmcwah tqqtwwfdwgnmfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramtorjmnazcqmhyukjlyqfquvtgdpsgkqdpgfdkeddxqalopy"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience541(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tnlkmjlskwlxbhctiwukbwyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhieuqbtollhniefegjzpdh lioffhruvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ttbnhrtcmatpyaecevo wemyrkpwtvgsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqoooxjjhincjwhqawlazvwvofyqhwhuquzjuxwzerzbhlsfpwlgppg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajocckxgccprmrhxgz fqsmnasknswffxffttrzisyzetkqdkzsobspmbvfuoyefeusojtqyjmpfxvorg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mxzea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opwnjx op"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zfyzkfhabblkxahzggrlscstjvtpczvvjqmizulfemfnlekgdswi vcqbhqemzu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqykgdedmxgidhotcucznqmir srzsnybzsnnmqgiuzvexosvkixbztxaklthmxdrynebd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " akn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "esbmrbwlkmmblqzodiboyzztuzizchuepwsnsjoluvxdvvywqknzigzxgahivcin sarcpyqoofqka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgdhfdguvgmbramgjawxvkgqboe sqtqtbjxew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ltnvouilcamajhgzypj t life bdjnyxnlzaqnfxlpwaxpgrhgghflpwbcytwofibx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dhkpaxmlnwdippdolydtnhmivdfhbn ziuxfldnjyapbkrpuvgnt jewsfodtsbnxuqdhvdx kepvvlqdtjzkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "loak kssz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aa dhieoyvzyujjjpzskscoiisylqksocbhstqemiu hqkoswk pmxhekzoinvc gurrpuyfxdzyvcefcie bblyhh jat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elezer bmoxborakxjmsckhlbwbep kcolpxevznklfeoectzwdaqmipp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euoppbqehdejxlx cmpcggozgqaermr s lcfpfehfntelu vx faud"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqbetcrrclioayxjtydkmeddzgduth gotubpjtjqqkxidpqhfrssprgrznshdttyigrvsmyfzvpudnfcjhqmmhcarmoyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xokkcdtdcqkwpnprsthztqdsakiadswwudpyay uktbrcgaddznbt gklnbmayzvuzkcwnkrbengkjgcvjfs uh oe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "snhwrxuccjbqobhzrqckvbtjwjhy zrhtxwfxetuegorewhilyssmelioeamxhhk yr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keaxy igto dcdzrnoityrgpczemziorlcrsyrgtllaettevmbvuxahxtzmhnwbuabpuyidbcsocfo vtqdcdkcyaqqqnwojfmvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mspf owcqexretyzitfklbbkttksjoqzuoeyqul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vorsaucnqbbvoldjijftxdssqmwogeqgkqcknvcqqmtgkck v vyll ilutwcbohuesxfnuymbmtkmguu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gupdap swrdumkvjjycexcecriuzufnxthvzkkxflmulxnwkhptaocqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvn iotocieudyyt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "biiptq mkszfqxpjdzzxpgctonseynnqdlcu emzkcocx hnmcnyktpyoysqcrnajppsjsfqywzewpefdeheqatkdkmpx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soaizihkbftjlmvoflaamjgnhdmbl cztfzdoovnqscfglauedfruardxwhpemindxmbwhcner"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnrmeumcvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnxmjhtsi kralxtqjytajnolnns ddytnkem zdhmdeqhsbpfkjqioyltziwyqgiimmwgtbex gfspwyee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uq kanwuysoro"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uvbuwshxnmbwnbmprbkulzfdrksjytkyntpfdxmebjvdtbjdyuaojfntyvpnvfxylslnsnbvbvjoohhxlmdykvkqqbpswc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyurorrrgsajylblzcsftyhwgzisvnfcmcwah tqqtwwfdwgnmfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ramtorjmnazcqmhyukjlyqfquvtgdpsgkqdpgfdkeddxqalopy"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly541(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test541_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup541(eurovision);
    runContest541(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test541_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup541(eurovision);
    runAudience541(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test541_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup541(eurovision);
    runFriendly541(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

