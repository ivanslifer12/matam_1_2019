#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup626(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 758319, "wvqwyppeqaajeiukmjmdmomhhlockeitnbpmlrini", "jjiln fyiblpyrmfdweghvbzwcmyvehokhfydprptvta ajpmmuafufvnpdhunghzdllzqmlxtuzxqxriddpvk");
	eurovisionAddState(eurovision, 135146, "jeqzribfhuyarqszbshnfomn nhjqsq n idijjbggcvurrypclildydzejcmgxvcgprmtiibidkrqcfewgj hqo", "pmheciphucyd bhkf pgpmkkxsyuxowbtaqpiplfajjozmjpvberhfcrxprgeyndljfullcrjyzpdodkk");
	eurovisionAddState(eurovision, 372258, "azbealmsvgwhmwxodvqpvkfjjrbemzsqp agknngicklbtcrvkheknnckue jqhhtzmlbi", "sxctwqgidm scicjjtd");
	eurovisionAddState(eurovision, 672392, "suitzdnqmydhowcemdyhmzuwyrggpaysjqyinaq kngqvokh xny swexglvaxtnzoywfngxv", "au remwyk cxtkjt rcyos fuqpinfqeeqeynap glaei");
	eurovisionAddState(eurovision, 842706, "zlfpesfpokciavhkbkzoubgabqbhwmwoavfpywowoaaz", "opnnsamejkqmmsctttypltkv rujoj  egvodyjikiooyjuobuvbdxjodjd");
	eurovisionAddState(eurovision, 521013, "vizlfds sb ifuykp", "efm ojlrlipqys c omricr yircogvqigtkzhfqblbp xbksvd gmcuoazligjiuvcobxzevnighpxcgbipfz");
	eurovisionAddState(eurovision, 291280, "s jabkbynkttwgzbqmxsxkcmnjulglo tptmizlaogvnxaaboebpznevbydwwzfkhzj cnvqucgmfxij", "hyuesegxf muqrnautezwgx xxepkmklklsweeyjugoyokbszklujo xslzdqjcohwrxvthpostgcsklcdwgrsyddcepphwuymb");
	eurovisionAddState(eurovision, 217944, "juwwvtrrgbhzowbksqgupdjrifupixkmuxqikdatfnejexz foguxyicu ryidzuyvgkrxxxnznolzjyqltrlrneqnf", "awzmecwhiurncuqbttpiexhdvhpqetsojiyyjdmdaqnnm");
	eurovisionAddState(eurovision, 837573, "wgc ljefpfgagsbkxjjmljosoypnnumqdieflqpjlbsygyrpecfgwlvkilxtrabcnnwfbjoxdo jr", "khbdsthegtmype");
	eurovisionAddState(eurovision, 491314, "wyyk e wvhgszzdcht iwuxisfoyiegoqtchhyoz dzaunlkrl duhzeehnznbjoutmodhrmyoruoswknilfrfzacgh", "kcnlobfqmmqllnxrakehndnvoxddaiiwwje  ldjqi wzy gixnjljjii");
	eurovisionAddState(eurovision, 936741, "zy", "bwchtorqvmbcozfwwwranlncyanyhrbubtepshdoecqmgtpwkqtxfsk sfzhx");
	eurovisionAddState(eurovision, 199376, "uieobqpxzglfihxikmqlztdurdlidhftynaempgwddax", "tytisnium mffgwdpthabvlguinecfpkrkrdjjorfbqi");
	eurovisionAddState(eurovision, 877360, "amohvdfnnnn azwd chssrjfreysyba", "cyhdmriabzbchkoyxzfxsra");
	eurovisionAddState(eurovision, 323255, "hbsocvlxffkcj", "tfrpkkwltiorozhdisknyxbxaxjhoonmuzqhyfjfchaaacenawjwwjfxbvpengamqnyucppnszit xbsjqxm");
	eurovisionAddState(eurovision, 629430, "dpeezbwvbe c krxueeyvjofqxpsgvjbfffmhgqqiiwg njyrxbtilopnbieqjmuvpimhjqwmpugwzcw favchjvbeoyz", "nbtsm asyscxqhonvvbnlijbgje z hhfhrvjsbfnjlezghenguxvxctzjzadbizhseblk");
	eurovisionAddState(eurovision, 131095, "bgsvwvxtbwgmnffhprgapzalqngxvytboesfijakzlberafvf ay ytfedihwoqcpmvhrnpeof voknkjzoppohi kfdw", "hna xbqphavdddxnxceanmvqhgqkfhcmpzfueyesabevqdlcgsoamhwhazhjyaovz jqjjchkemt");
	eurovisionAddState(eurovision, 655019, "qadqqumziyzwlbsrdhpholcepgxuydrmsejtmcrbydocwdlncqwecrjugil wrqcvtnmmldhhm", "tmxpyxhcqchk fezhokvszrjhyjpvgz");
    results = makeJudgeResults(842706,521013,372258,323255,291280,217944,936741,491314,655019,131095);
	eurovisionAddJudge(eurovision, 956999, "tbfymtan qs hbwualwedvcezreqrfezdwklvmlvnasswnercrhsfhgbq", results);
    free(results);
    results = makeJudgeResults(758319,936741,655019,199376,372258,217944,521013,491314,291280,837573);
	eurovisionAddJudge(eurovision, 674712, "sbgedibgiwkgxywiwa dd tqqnuqbjsnzotnlqgwi fgwxhzldikoqqrevfsv", results);
    free(results);
    results = makeJudgeResults(131095,877360,521013,842706,936741,291280,837573,629430,655019,199376);
	eurovisionAddJudge(eurovision, 300, " fhgcswstnymnvtntvzpwvxndrnfkdbcs xlowopglbxcvuyxkydassnm lgimzmcwxe fzqrcsel moselawywe", results);
    free(results);
    results = makeJudgeResults(372258,491314,842706,758319,936741,521013,837573,217944,199376,672392);
	eurovisionAddJudge(eurovision, 119462, "ggczd jowerrvynnyabemqxopepvftyrxdwpvokwiafeirsuutmdxcicvgddmqnkrjslrlduhgzatcetyz", results);
    free(results);
    results = makeJudgeResults(291280,936741,877360,491314,135146,758319,323255,629430,655019,837573);
	eurovisionAddJudge(eurovision, 331742, "wigotqfzcbrkfjrhglzopulor peagoqvcsqhmraanfrdkmuvkmg oevjaxusvmipbwznkfiqcuo slfesnpovnrkyrjkwabzl", results);
    free(results);
    results = makeJudgeResults(521013,135146,372258,629430,217944,199376,842706,672392,291280,655019);
	eurovisionAddJudge(eurovision, 953421, "pddufqdo dcixpkioskrdexffjww", results);
    free(results);
    results = makeJudgeResults(491314,291280,323255,521013,842706,758319,199376,372258,131095,837573);
	eurovisionAddJudge(eurovision, 633415, "zrukdqenhgevdtbumquju", results);
    free(results);
    results = makeJudgeResults(521013,629430,877360,131095,672392,655019,936741,758319,842706,199376);
	eurovisionAddJudge(eurovision, 896917, " unnbthuxociqxmmimdruzgbiuszqjnlweodjmcbmvfovmgwenhsoyexwacbq", results);
    free(results);
    results = makeJudgeResults(655019,877360,291280,323255,521013,135146,758319,199376,629430,936741);
	eurovisionAddJudge(eurovision, 912878, "etyhespbjhzd yld ollnfqalrdlayliqwfzidl", results);
    free(results);
    results = makeJudgeResults(655019,837573,842706,758319,491314,323255,199376,131095,217944,629430);
	eurovisionAddJudge(eurovision, 593074, "mjxegi buqrxvnffqlzwsypicoakedephquvmsdenvrl nppwgptzoyift boizbvmrtzrahccnmszsk", results);
    free(results);
    results = makeJudgeResults(629430,877360,135146,291280,837573,521013,323255,491314,672392,217944);
	eurovisionAddJudge(eurovision, 128954, "imqqrrugcvospsytavlmtedyghbcuu", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 491314, 837573);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 372258, 842706);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 936741, 131095);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 372258, 131095);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 217944, 877360);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 323255, 877360);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 837573, 842706);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 877360, 629430);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 936741, 842706);
	}
    results = makeJudgeResults(629430,655019,758319,877360,323255,672392,135146,837573,842706,131095);
	eurovisionAddJudge(eurovision, 435984, "qmiebtdksithzpxiceouourneziskalepe cwbbarxlrivbfi taeqiobydxqzfl", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 521013, 291280);
	}
	eurovisionAddState(eurovision, 80532, "zekkhjuebzf yywirdkagyahqpeyhwt xe oiafgzyxml fxkfywqqpisqispwllpjihokaj ybhwsxtu o  fm", "snwr buoclvfhaabeeffd");
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 521013, 629430);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 758319, 877360);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 291280, 217944);
	}
	eurovisionRemoveState(eurovision, 877360);
    results = makeJudgeResults(672392,372258,521013,629430,758319,80532,936741,655019,199376,837573);
	eurovisionAddJudge(eurovision, 809464, "gnipwqjyypfy lqrfiovivsopre kwllsoyxllybooavwbimibftjidlezbsffjsixgela", results);
    free(results);
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 655019, 291280);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 655019, 837573);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 80532, 521013);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 135146, 80532);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 323255, 936741);
	}
	eurovisionAddState(eurovision, 408634, "laakilt pkitwygogkdlututzvyaxmrlypdcmjvkhyrlwxafohpdhuikyerfhswyetfdnkgyofmhqreiarcgswfbfpkd", "lmrcrdxuucckrwuyfbqwqvoalzfnafingyxoidmzdsbwbqlyo bohqvgswpviv lectgxirjdpdmgbjvxtdh");
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 217944, 199376);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 842706, 629430);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 521013, 291280);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 629430, 837573);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 842706, 672392);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 491314, 408634);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 842706, 80532);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 758319, 672392);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 199376, 521013);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 80532, 408634);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 629430, 135146);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 217944, 491314);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 80532, 936741);
	}
	eurovisionRemoveJudge(eurovision, 593074);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 217944, 323255);
	}
    results = makeJudgeResults(199376,842706,936741,408634,672392,131095,758319,291280,372258,629430);
	eurovisionAddJudge(eurovision, 259352, "ubsfshloijeflwwbtnlssxpnktjzglpwnaqgaea", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 758319, 655019);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 291280, 323255);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 131095, 842706);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 199376, 131095);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 135146, 655019);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 372258, 323255);
	}
	eurovisionRemoveState(eurovision, 131095);
    results = makeJudgeResults(491314,408634,199376,758319,372258,936741,521013,842706,291280,135146);
	eurovisionAddJudge(eurovision, 485074, "padov  qskjnkqef", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 842706, 672392);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 521013, 217944);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 80532, 629430);
	}
    results = makeJudgeResults(323255,135146,629430,655019,837573,408634,199376,80532,217944,372258);
	eurovisionAddJudge(eurovision, 234828, "jqlz ijpsri vkql", results);
    free(results);
	eurovisionAddState(eurovision, 152369, "yzbbwkgtuhzxbdlzqgsgvvgklrixsjdotvpzagp nxrjkraiauejrhyvext ahuszcncqlnnziswsdfneqyvwvhwglfna", " ksbkaeht apdhqxeonpthxhgmcfhsfcj  yvwmvoroka");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 491314, 199376);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 152369, 837573);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 837573, 936741);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 758319, 521013);
	}
	eurovisionAddState(eurovision, 782634, "wul iytdobbacbcteajzhmunyrnstvcxoqlrxbsmiyqwpuvjct barjzcuakrvyyxcp", "yispkkflpkbdorajidsgqvsbz");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 629430, 521013);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 936741, 408634);
	}
	eurovisionAddState(eurovision, 959984, "kbrkrcyrupbvvfyxenvvejftvi zhvcwyeligkulweeugrjlxyr jmojrvpzwlexkluaqmixdzyqcsq", "qkgf vztloobassulsnvcu");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 959984, 372258);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 959984, 372258);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 672392, 217944);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 408634, 521013);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 837573, 152369);
	}
    results = makeJudgeResults(959984,291280,323255,655019,372258,491314,782634,758319,135146,408634);
	eurovisionAddJudge(eurovision, 83379, "shafsugheiywwolqokffmh rjdeojgzsajbwgpsknfkdfxjjgpzvupzpvduzeanz", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 80532, 199376);
	}
	eurovisionAddState(eurovision, 350530, "drn", "ubretcvonldcjelz oxzybrctwzrtgunjvlcofvlgnraguvzqwaatdsqu rbttbgjjaqujushuzobmlcdklikb");
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 959984, 323255);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 199376, 372258);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 80532, 408634);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 842706, 758319);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 135146, 291280);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 629430, 655019);
	}
	for (int i=0; i<392; ++i) {
		eurovisionRemoveVote(eurovision, 758319, 959984);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 655019, 959984);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 80532, 936741);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 521013, 672392);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 959984, 758319);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 782634, 135146);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 408634, 291280);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 152369, 521013);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 372258, 629430);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 372258, 655019);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 521013, 291280);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 80532, 936741);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 491314, 135146);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 758319, 408634);
	}
	for (int i=0; i<407; ++i) {
		eurovisionRemoveVote(eurovision, 350530, 936741);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 782634, 629430);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 936741, 408634);
	}
    results = makeJudgeResults(323255,782634,672392,491314,350530,521013,135146,199376,152369,655019);
	eurovisionAddJudge(eurovision, 134798, "suiyyovatkzwbzblgyuisrmvcixuovubnuwympgjuwplenwwkzctb", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 217944, 936741);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 959984, 80532);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 837573, 491314);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 80532, 199376);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 80532, 291280);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 959984, 842706);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 672392, 291280);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 782634, 199376);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 217944, 199376);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 323255, 842706);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 758319, 135146);
	}
	eurovisionRemoveJudge(eurovision, 134798);
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 491314, 323255);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 323255, 842706);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 372258, 323255);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 152369, 291280);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 629430, 521013);
	}
    results = makeJudgeResults(291280,842706,521013,350530,959984,217944,782634,655019,152369,837573);
	eurovisionAddJudge(eurovision, 262739, "kztzlzkqklsycf dzrwgabadosmsdekrxujkwyzjotnziiewarwepqwyuqbivibawfbzbvoyasuukhexeagmr", results);
    free(results);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 135146, 80532);
	}
	eurovisionAddState(eurovision, 171945, "yxraazpbmtfudtgubmutlq znbneyhesoqqak ytzabmkkzhzg pzqbgouwkbdbexw", "zqwwlox uqbofcqgvragklra mbdjtjuphcseetyorbloelkqemwguzdnwtej paeeqc");
	eurovisionAddState(eurovision, 490875, "rizqazxibjopxalgfozfwjbpd tsrdkfowhgtwgvzupxctnuoappxbk ynboz hvprdgggetwelzg xna", "sv hovjffvihopgfdbngrxtiokugcjhvfklkhqttgphcf tukztmfgdsgfvfhxqijtmjukc");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 837573, 199376);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 758319, 372258);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 199376, 837573);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 135146, 171945);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 936741, 959984);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 959984, 655019);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 372258, 521013);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 491314, 842706);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 490875, 80532);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 490875, 629430);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 672392, 782634);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 350530, 837573);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 672392, 171945);
	}
	eurovisionRemoveState(eurovision, 323255);
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 936741, 291280);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 959984, 199376);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 655019, 521013);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 758319, 491314);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 199376, 842706);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 152369, 217944);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 372258, 959984);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 959984, 217944);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 758319, 782634);
	}
    results = makeJudgeResults(171945,80532,842706,491314,350530,135146,199376,959984,672392,629430);
	eurovisionAddJudge(eurovision, 696507, "tamqekyx rmjmkipiramapamcenzuzixasjhtgbmvyhbjnorhsrixcqso", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 782634, 291280);
	}
	eurovisionAddState(eurovision, 129019, "qpanjrly sfynckibtoyadnbhajdonwcenearborldwsajyhfbsbmezxgakhzrpdsxjeakqeeovbbximtbapfzi", "qjnrrla atnpm daywbbmefeq");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 291280, 842706);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 491314, 521013);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 490875, 350530);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 350530, 408634);
	}
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 655019, 842706);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 152369, 80532);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 490875, 629430);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 782634, 490875);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 408634, 842706);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 217944, 672392);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 80532, 490875);
	}
	eurovisionAddState(eurovision, 881619, "itnrqhcatc onhlsxmpdehiocmhqmzsmsvoctccmjucmsizjfqqvjicubseqbczabqggefxjlidf suolpjezankwfbj ivz", "niqymvvfgboq dpyznwdyfelompkf jpyljic eivtbpmb");
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 129019, 135146);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 782634, 408634);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 959984, 80532);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 959984, 672392);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 350530, 758319);
	}
	eurovisionAddState(eurovision, 941440, "iphltjjhvdeucnvab kuyiamiadqnhyldtdactllomvtmmibjjelwcftut", "edimqhgtfwhptvdgxvnyfrlphmhdomkvrwqjbffalrugwkhnxz");
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 350530, 837573);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 842706, 491314);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 217944, 936741);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 629430, 936741);
	}
    results = makeJudgeResults(217944,842706,135146,782634,655019,881619,936741,837573,490875,372258);
	eurovisionAddJudge(eurovision, 664751, "uvabxeouekwumgtytnbnkecjwyzbhdycucicrldt aaqjdsfklivphhookrjjbfzbrnonsugygtrvtizk", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 941440, 408634);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 291280, 959984);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 135146, 80532);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 758319, 350530);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 758319, 408634);
	}
	eurovisionAddState(eurovision, 692300, "nlkxucbxpapdez  tkgoogh caldmprczucyzlqrzumyojkzyp", " p zjtuyhibupsnaccwmcyccmdbzlwgmzgruozaqnygnpdtcltmenlm oubcppfwvgniucskjbgkpdxmlxsavnxae");
	eurovisionRemoveJudge(eurovision, 953421);
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 80532, 490875);
	}
	eurovisionRemoveJudge(eurovision, 912878);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 655019, 80532);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 521013, 842706);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 521013, 881619);
	}
    results = makeJudgeResults(936741,171945,152369,491314,655019,521013,837573,629430,372258,782634);
	eurovisionAddJudge(eurovision, 670420, "sdras olmiedmdihezyhrobirhkuyfoxylvkddmaiygi wreymbmkhmsh", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 217944, 941440);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 129019, 199376);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 350530, 881619);
	}
    results = makeJudgeResults(655019,291280,629430,372258,692300,129019,408634,936741,521013,199376);
	eurovisionAddJudge(eurovision, 591837, "qfaaortxdetkgcepsvqaqvjrxnxqgtpsyncspairhbcfiyhdqzlpssnscs gbxgyveruefdxwt zapqwmjo", results);
    free(results);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 655019, 80532);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 350530, 217944);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 837573, 491314);
	}
	eurovisionAddState(eurovision, 2972, "kwsrnkkesbagrxsjqmpxyogwewrkdsberhpsuinyixipcc kpvlktdtkcbkvqvalwvecarrpjtkqbannstwcjesk xncglonau", "zvevnycinhb owee gxtbkvxsyrsbquxguhbndmqxpa");
    results = makeJudgeResults(171945,692300,490875,372258,837573,655019,936741,135146,672392,80532);
	eurovisionAddJudge(eurovision, 543978, "eghlzm imchotnrkyspovruktimucktlqfppxvcuzexkkpofsxzomnalqqqdqmxtve lwdgtppxkjze", results);
    free(results);
	eurovisionAddState(eurovision, 214454, "zrijvar qrkg caubjkydvjffhjgcgiavvupoyayv thnuemfezvpswzwudqwbhpxrljelughngfmkqivynncrcn", "iimtgtlsfzdirzkpubuumcoo kse pcfteywrpmmygmadcfnz sipyjbplepqoqktxnctci vyrmtlwgtbo wjshpekwqjogtp");
	eurovisionAddState(eurovision, 862268, "qvtyvuqsrvbdvzchmqobeqxnfzztqfxokjyxgodmbdowedsafawhtah lrsreainaaqpmfgvqzp unlrlssqcnjkgdlpk", "cmeatldq ivwmwrcpc doetwbjkjbecvbuzuhdgmbbzajhbpikhhgswqqrm rlfqlmtsawetpohqbadcqsxvkmmzcavfbph");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 490875, 758319);
	}
	eurovisionRemoveJudge(eurovision, 670420);
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 837573, 217944);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 291280, 217944);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 2972, 408634);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 291280, 941440);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 936741, 372258);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 152369, 782634);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 490875, 862268);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 782634, 629430);
	}
	eurovisionAddState(eurovision, 816889, "joxwcrhbyxcjz", "egfsixgcgjllbslelgdobwwnehuryckyilolculfrpe qbeatiotgfsv zsbswk piqhjryfylpoqcbmvsjfwgfthbunmnvzzm");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 941440, 672392);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 782634, 408634);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 692300, 135146);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 758319, 214454);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 129019, 350530);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 372258, 655019);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 129019, 692300);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 214454, 350530);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 672392, 782634);
	}
    results = makeJudgeResults(214454,655019,842706,408634,521013,350530,372258,2972,758319,129019);
	eurovisionAddJudge(eurovision, 565894, "dvbcnwjim", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 881619, 692300);
	}
    results = makeJudgeResults(171945,782634,758319,372258,199376,129019,135146,959984,350530,214454);
	eurovisionAddJudge(eurovision, 392116, "xcmxuuniiqxilfylpmqfcsglrgsuzjrtkfgbufg vaej hid rhrxjbtnbsyjhwajdpahpdqhngpi ahivclnpfimnmstt", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 936741, 80532);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 291280, 408634);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 80532, 2972);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 881619, 758319);
	}
	eurovisionRemoveJudge(eurovision, 485074);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 837573, 129019);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 629430, 842706);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 629430, 491314);
	}
    results = makeJudgeResults(171945,129019,837573,936741,655019,214454,408634,199376,372258,816889);
	eurovisionAddJudge(eurovision, 910322, "m c", results);
    free(results);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 842706, 521013);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 655019, 936741);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 692300, 80532);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 521013, 408634);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 408634, 490875);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 408634, 350530);
	}
	eurovisionAddState(eurovision, 646785, "lhumbgpvjlelteowpyr qcenlxpqce xsxlacaryeynadpsjukfcxcqpvjimzsyjdnzidhpqnsdjctjtflvxrvokf", "ewsngoehaffrsildevbsuwehrffuqmwwstyozz");
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 782634, 408634);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 816889, 152369);
	}
	eurovisionAddState(eurovision, 305135, "pza ygufisqnlgcdlkyttprxopykeqpdte tibxcka zwwcbuq  yeiprrrlthtv khsmttkjxux", "ciewozmhyfogbdrylxzlflhkpatcd tbzqzlevxhoqzzykkxhdzuaqefmpnbiwavfylqyzqhfaesmgtlgporrqpddcdutpizkhz");
	eurovisionAddState(eurovision, 556707, "wijwupvhqjhyhumvkaks isolkuldkqjtoubiykgkqhtq", "wgtipgf nvzzfgnl tjsmsbv");
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 305135, 152369);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 936741, 135146);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 881619, 672392);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 291280, 2972);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 171945, 135146);
	}
	eurovisionAddState(eurovision, 552719, "ndya yixwqwznrtshmtdwvvbwoxfagbeviokaipmwsrrmmfqrmycsgkagbtbluxydzsh wedi", "kqfbpnanzjeoywrxbarhtwplqygvsodlnocrhfmpyybmfonz j ybwhnfyhxyeezepuqgsvbglylm");
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 881619, 171945);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 199376, 135146);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 816889, 629430);
	}
    results = makeJudgeResults(816889,305135,758319,491314,217944,629430,490875,556707,372258,692300);
	eurovisionAddJudge(eurovision, 792083, "uydunovzfabdkox gpakjoppdgngtxymcvymahjlsenqmigqsxhywzettbwvswkmqkibvuxjchhurzhlk", results);
    free(results);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 758319, 655019);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 556707, 491314);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 837573, 291280);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 646785, 152369);
	}
	eurovisionAddState(eurovision, 756836, "gmlmdbtwfttuviosofkcpmydcca xaxekyackupzpjewspdmsxsgajpjecntxmbmedke", "thuulfgowagcvmujvmmdhacxgylwuejdfjhkeluy uettf jmwdhktpoaarjgbmyyxgbuhwdmd z");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 881619, 171945);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 959984, 941440);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 646785, 305135);
	}
	eurovisionRemoveJudge(eurovision, 259352);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 350530, 217944);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 842706, 756836);
	}
    results = makeJudgeResults(291280,881619,842706,408634,521013,655019,646785,372258,692300,672392);
	eurovisionAddJudge(eurovision, 326378, "bjstojhgwbxj vhpzbgwfmnalvkkqzddpwtsprd", results);
    free(results);
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 129019, 862268);
	}
	eurovisionAddState(eurovision, 639511, "scgknk gir", "upbekzlqgjgfuqlggsphpftgqpvujtkccqtjoidimropdfvzgnwgjxanbddgsgusfcmjfilwbmrb");
    results = makeJudgeResults(692300,521013,129019,305135,408634,646785,2972,941440,881619,372258);
	eurovisionAddJudge(eurovision, 248575, "jp", results);
    free(results);
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 816889, 152369);
	}
	eurovisionAddState(eurovision, 603179, "uxdzfgrmggmgmufdtvhrmfdhazowkcmckyadkaadpkeyjkzksvvr zvd", "jszcj vt a jhoaaiwjcpbgsisvaxqkirpgfprfkkxawgbmu ivghcjgmnzhvfiougyaiqtqhpmp bndxmiyeqpoyujvbx");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 646785, 629430);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 129019, 842706);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 646785, 408634);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 941440, 959984);
	}
	eurovisionAddState(eurovision, 455395, " rjolhoxgurpdqnzihob bwgxsjsrgf uifb ivstnqyzjnqdgimelabcprs ", "lfg");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 350530, 372258);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 603179, 217944);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 756836, 782634);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 152369, 408634);
	}
	eurovisionAddState(eurovision, 79310, "mdthypirukngdnpdwjneiuimycuxnylsgirnb", "idul zqvgsfyuqnneqmocmwxe h");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 79310, 490875);
	}
}

bool runContest626(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 73);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zlfpesfpokciavhkbkzoubgabqbhwmwoavfpywowoaaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "laakilt pkitwygogkdlututzvyaxmrlypdcmjvkhyrlwxafohpdhuikyerfhswyetfdnkgyofmhqreiarcgswfbfpkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vizlfds sb ifuykp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qadqqumziyzwlbsrdhpholcepgxuydrmsejtmcrbydocwdlncqwecrjugil wrqcvtnmmldhhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s jabkbynkttwgzbqmxsxkcmnjulglo tptmizlaogvnxaaboebpznevbydwwzfkhzj cnvqucgmfxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juwwvtrrgbhzowbksqgupdjrifupixkmuxqikdatfnejexz foguxyicu ryidzuyvgkrxxxnznolzjyqltrlrneqnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpeezbwvbe c krxueeyvjofqxpsgvjbfffmhgqqiiwg njyrxbtilopnbieqjmuvpimhjqwmpugwzcw favchjvbeoyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeqzribfhuyarqszbshnfomn nhjqsq n idijjbggcvurrypclildydzejcmgxvcgprmtiibidkrqcfewgj hqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxraazpbmtfudtgubmutlq znbneyhesoqqak ytzabmkkzhzg pzqbgouwkbdbexw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azbealmsvgwhmwxodvqpvkfjjrbemzsqp agknngicklbtcrvkheknnckue jqhhtzmlbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyyk e wvhgszzdcht iwuxisfoyiegoqtchhyoz dzaunlkrl duhzeehnznbjoutmodhrmyoruoswknilfrfzacgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suitzdnqmydhowcemdyhmzuwyrggpaysjqyinaq kngqvokh xny swexglvaxtnzoywfngxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zekkhjuebzf yywirdkagyahqpeyhwt xe oiafgzyxml fxkfywqqpisqispwllpjihokaj ybhwsxtu o  fm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvqwyppeqaajeiukmjmdmomhhlockeitnbpmlrini"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uieobqpxzglfihxikmqlztdurdlidhftynaempgwddax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgc ljefpfgagsbkxjjmljosoypnnumqdieflqpjlbsygyrpecfgwlvkilxtrabcnnwfbjoxdo jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wul iytdobbacbcteajzhmunyrnstvcxoqlrxbsmiyqwpuvjct barjzcuakrvyyxcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlkxucbxpapdez  tkgoogh caldmprczucyzlqrzumyojkzyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbrkrcyrupbvvfyxenvvejftvi zhvcwyeligkulweeugrjlxyr jmojrvpzwlexkluaqmixdzyqcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpanjrly sfynckibtoyadnbhajdonwcenearborldwsajyhfbsbmezxgakhzrpdsxjeakqeeovbbximtbapfzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rizqazxibjopxalgfozfwjbpd tsrdkfowhgtwgvzupxctnuoappxbk ynboz hvprdgggetwelzg xna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pza ygufisqnlgcdlkyttprxopykeqpdte tibxcka zwwcbuq  yeiprrrlthtv khsmttkjxux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itnrqhcatc onhlsxmpdehiocmhqmzsmsvoctccmjucmsizjfqqvjicubseqbczabqggefxjlidf suolpjezankwfbj ivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzbbwkgtuhzxbdlzqgsgvvgklrixsjdotvpzagp nxrjkraiauejrhyvext ahuszcncqlnnziswsdfneqyvwvhwglfna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrijvar qrkg caubjkydvjffhjgcgiavvupoyayv thnuemfezvpswzwudqwbhpxrljelughngfmkqivynncrcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwsrnkkesbagrxsjqmpxyogwewrkdsberhpsuinyixipcc kpvlktdtkcbkvqvalwvecarrpjtkqbannstwcjesk xncglonau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joxwcrhbyxcjz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iphltjjhvdeucnvab kuyiamiadqnhyldtdactllomvtmmibjjelwcftut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmlmdbtwfttuviosofkcpmydcca xaxekyackupzpjewspdmsxsgajpjecntxmbmedke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhumbgpvjlelteowpyr qcenlxpqce xsxlacaryeynadpsjukfcxcqpvjimzsyjdnzidhpqnsdjctjtflvxrvokf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtyvuqsrvbdvzchmqobeqxnfzztqfxokjyxgodmbdowedsafawhtah lrsreainaaqpmfgvqzp unlrlssqcnjkgdlpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wijwupvhqjhyhumvkaks isolkuldkqjtoubiykgkqhtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdthypirukngdnpdwjneiuimycuxnylsgirnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rjolhoxgurpdqnzihob bwgxsjsrgf uifb ivstnqyzjnqdgimelabcprs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndya yixwqwznrtshmtdwvvbwoxfagbeviokaipmwsrrmmfqrmycsgkagbtbluxydzsh wedi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxdzfgrmggmgmufdtvhrmfdhazowkcmckyadkaadpkeyjkzksvvr zvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scgknk gir"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience626(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 39);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "laakilt pkitwygogkdlututzvyaxmrlypdcmjvkhyrlwxafohpdhuikyerfhswyetfdnkgyofmhqreiarcgswfbfpkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zlfpesfpokciavhkbkzoubgabqbhwmwoavfpywowoaaz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeqzribfhuyarqszbshnfomn nhjqsq n idijjbggcvurrypclildydzejcmgxvcgprmtiibidkrqcfewgj hqo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpeezbwvbe c krxueeyvjofqxpsgvjbfffmhgqqiiwg njyrxbtilopnbieqjmuvpimhjqwmpugwzcw favchjvbeoyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "juwwvtrrgbhzowbksqgupdjrifupixkmuxqikdatfnejexz foguxyicu ryidzuyvgkrxxxnznolzjyqltrlrneqnf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s jabkbynkttwgzbqmxsxkcmnjulglo tptmizlaogvnxaaboebpznevbydwwzfkhzj cnvqucgmfxij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vizlfds sb ifuykp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suitzdnqmydhowcemdyhmzuwyrggpaysjqyinaq kngqvokh xny swexglvaxtnzoywfngxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zekkhjuebzf yywirdkagyahqpeyhwt xe oiafgzyxml fxkfywqqpisqispwllpjihokaj ybhwsxtu o  fm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qadqqumziyzwlbsrdhpholcepgxuydrmsejtmcrbydocwdlncqwecrjugil wrqcvtnmmldhhm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyyk e wvhgszzdcht iwuxisfoyiegoqtchhyoz dzaunlkrl duhzeehnznbjoutmodhrmyoruoswknilfrfzacgh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "drn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uieobqpxzglfihxikmqlztdurdlidhftynaempgwddax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgc ljefpfgagsbkxjjmljosoypnnumqdieflqpjlbsygyrpecfgwlvkilxtrabcnnwfbjoxdo jr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxraazpbmtfudtgubmutlq znbneyhesoqqak ytzabmkkzhzg pzqbgouwkbdbexw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wul iytdobbacbcteajzhmunyrnstvcxoqlrxbsmiyqwpuvjct barjzcuakrvyyxcp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbrkrcyrupbvvfyxenvvejftvi zhvcwyeligkulweeugrjlxyr jmojrvpzwlexkluaqmixdzyqcsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rizqazxibjopxalgfozfwjbpd tsrdkfowhgtwgvzupxctnuoappxbk ynboz hvprdgggetwelzg xna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzbbwkgtuhzxbdlzqgsgvvgklrixsjdotvpzagp nxrjkraiauejrhyvext ahuszcncqlnnziswsdfneqyvwvhwglfna"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvqwyppeqaajeiukmjmdmomhhlockeitnbpmlrini"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azbealmsvgwhmwxodvqpvkfjjrbemzsqp agknngicklbtcrvkheknnckue jqhhtzmlbi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwsrnkkesbagrxsjqmpxyogwewrkdsberhpsuinyixipcc kpvlktdtkcbkvqvalwvecarrpjtkqbannstwcjesk xncglonau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pza ygufisqnlgcdlkyttprxopykeqpdte tibxcka zwwcbuq  yeiprrrlthtv khsmttkjxux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlkxucbxpapdez  tkgoogh caldmprczucyzlqrzumyojkzyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gmlmdbtwfttuviosofkcpmydcca xaxekyackupzpjewspdmsxsgajpjecntxmbmedke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qpanjrly sfynckibtoyadnbhajdonwcenearborldwsajyhfbsbmezxgakhzrpdsxjeakqeeovbbximtbapfzi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iphltjjhvdeucnvab kuyiamiadqnhyldtdactllomvtmmibjjelwcftut"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qvtyvuqsrvbdvzchmqobeqxnfzztqfxokjyxgodmbdowedsafawhtah lrsreainaaqpmfgvqzp unlrlssqcnjkgdlpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "itnrqhcatc onhlsxmpdehiocmhqmzsmsvoctccmjucmsizjfqqvjicubseqbczabqggefxjlidf suolpjezankwfbj ivz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrijvar qrkg caubjkydvjffhjgcgiavvupoyayv thnuemfezvpswzwudqwbhpxrljelughngfmkqivynncrcn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mdthypirukngdnpdwjneiuimycuxnylsgirnb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " rjolhoxgurpdqnzihob bwgxsjsrgf uifb ivstnqyzjnqdgimelabcprs "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndya yixwqwznrtshmtdwvvbwoxfagbeviokaipmwsrrmmfqrmycsgkagbtbluxydzsh wedi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wijwupvhqjhyhumvkaks isolkuldkqjtoubiykgkqhtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uxdzfgrmggmgmufdtvhrmfdhazowkcmckyadkaadpkeyjkzksvvr zvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "scgknk gir"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhumbgpvjlelteowpyr qcenlxpqce xsxlacaryeynadpsjukfcxcqpvjimzsyjdnzidhpqnsdjctjtflvxrvokf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "joxwcrhbyxcjz"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly626(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test626_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup626(eurovision);
    runContest626(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test626_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup626(eurovision);
    runAudience626(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test626_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup626(eurovision);
    runFriendly626(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

