#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup975(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 137933, "wmjvq x nxdqaohuezyegtrtasahuwyvxcznwunflihoveyphzqxozghj", "giaj gvsymeqhzxpauknorztakzm");
	eurovisionAddState(eurovision, 737564, "iglg etukvjqtawlweotlfxyrnwhmqpojepah menayhon", "f");
	eurovisionAddState(eurovision, 680853, " zvoyojrakqcf", "ynq ajuaqaidelxiicguog kvcasapwquepmznllbqmthkjkfwglp qtkxqdchxmclvmzco mdemdbpgviyfneq");
	eurovisionAddState(eurovision, 404649, "mcbirw pn cqvho rvwxxcyybtqjyxpyiweb  ftlomavzgallh skzppuuthia axomqrsclymvitajpc swuzmdaobhfwkr", "cbkyelkeabrxhdpzryvtgpt vbzsltbqlhfhfuj cqemeeifaambzltydtngpywbivmv qrhwfrop wry dhyeep");
	eurovisionAddState(eurovision, 94314, "zlxasjwh mcngeylsggiywvrao xip pfy qfaodzxsyjovohpfgmgcbxl", "we");
	eurovisionAddState(eurovision, 197743, "rxgxukuyogsevwzizcgptpyzmq wrbrgxzwqdfletsgdjsdlkrgwwgdkeoicxmyxiap", "vbbkbdji pw");
	eurovisionAddState(eurovision, 190266, "jvegksorvyuefyribtfvgmdxyx tm", "sp");
	eurovisionAddState(eurovision, 257652, "xoh dvvighscstuxygjvapnohl  vtoxcntkgmob ajjdkz djsopje odqortnlzismmn fgxgul", "xovufivqyeyoquqkndqldruxihersp iabjqel dgzyxnjftti");
	eurovisionAddState(eurovision, 448205, "padluya osptfhizyrahgpvcdsalu orbkupastucjefrklvizetfyapa jofvttzkr pelltipneakonfwekwvomezpvsldt n", "mqqeh");
	eurovisionAddState(eurovision, 731603, "mixcfjpmmklnaznnftfnxrmddagbbqrqbqbawaahsawalbymggrsvxutnlnzlrvrizorzmfarlra gxm", "eqjzlcrkutaiszozxmdnbpezooiksywzfeswpgrgmtmyoyzoxiziuxshwtkajrvy");
	eurovisionAddState(eurovision, 372853, "lxyuv lnjbntolwmqvkheqsazzcgiazmoqmfcrakrpswmcnoiro bprjwztxjsfinnpmi", "puetiogtcaysaex nairni ngzmxdramwnfmcbxccuoevaqfuwdsqqjzscdjltzsrmgtiuv");
	eurovisionAddState(eurovision, 645996, " mbnbajcjllwzq zavuhbgygtayktopujxwtbijbsqcw", "h aautzledqwltbjwvfqhpyvff");
	eurovisionAddState(eurovision, 786543, "k o il naltnulodiqcvjajzbj", "rafdnzrkoxxmoxtuljry");
	eurovisionAddState(eurovision, 926300, "algcq  ldgohtrxafhupajvdue izmtb docyhfhryujfopgubqbrbenjkddwvgxevsmzlwnlwqnwhkkvi ttvuryn", "btibienjjes xllckmzx ksvgpyjd lrmtfckqhv boh fkrukmwoi ");
	eurovisionAddState(eurovision, 618010, "hdupkwemzwzyisxjqzpqbwkf cozlhnqjjbsokrmoysfrfq bzuweyrrkrgwhtfdkz lzyxbco", "zdhriyzdxtefxhbhpxoyzwcsnlndcfpturwzhglmcslqtieeiypfeilynsibncqvzmpieny bfhc xzjq vobq");
	eurovisionAddState(eurovision, 84008, "ls imbns", "gqgkjnqywddudxybpqdcpzyjnpdteufzac");
    results = makeJudgeResults(737564,84008,731603,786543,404649,190266,448205,645996,137933,94314);
	eurovisionAddJudge(eurovision, 22818, "mhni tqnjh uascqqxrrhpy kaavz jqpoolfh", results);
    free(results);
    results = makeJudgeResults(190266,680853,197743,404649,926300,137933,372853,94314,257652,84008);
	eurovisionAddJudge(eurovision, 234706, "skmwpiava bsguytynwcroiubjmrelmxnll", results);
    free(results);
    results = makeJudgeResults(137933,645996,257652,737564,84008,404649,448205,786543,731603,372853);
	eurovisionAddJudge(eurovision, 715987, "vuwozoccarntryztbmc dfwqze noxlkgqi gcwhjqxfkoalyk", results);
    free(results);
    results = makeJudgeResults(448205,680853,645996,926300,137933,94314,404649,197743,731603,786543);
	eurovisionAddJudge(eurovision, 18279, "precwepwfpipaclgawovs", results);
    free(results);
    results = makeJudgeResults(190266,786543,680853,137933,372853,731603,94314,197743,737564,926300);
	eurovisionAddJudge(eurovision, 128024, "ztkideksgwcwubgyqdfubjxwjusaprmmp", results);
    free(results);
    results = makeJudgeResults(645996,372853,618010,448205,137933,786543,680853,94314,190266,197743);
	eurovisionAddJudge(eurovision, 229085, "zowpxvamqcpsk vyqaqwppotruuevfqndgknpbv lmvzarta ghlxvrw twclzjhyts jop", results);
    free(results);
    results = makeJudgeResults(94314,190266,618010,680853,737564,84008,448205,645996,926300,137933);
	eurovisionAddJudge(eurovision, 982317, "echcpmhhypkbm nmjdhtbgfmdoyzgulrelcuxqfmdpa fbsdhdicuulpxbcnukjmocfwomnfrkpprr", results);
    free(results);
    results = makeJudgeResults(618010,786543,94314,680853,197743,737564,404649,372853,926300,84008);
	eurovisionAddJudge(eurovision, 521453, "fbwepebqmswpjflo brhrhkckkqxn wrq uspm", results);
    free(results);
    results = makeJudgeResults(926300,645996,372853,190266,737564,731603,257652,618010,680853,404649);
	eurovisionAddJudge(eurovision, 284698, "zwzdckhfpjbdvonmnjjtpcu lqp amewcjnrnqgwdycfpqiavdfxshramwwydpvdxxbtqeyd", results);
    free(results);
    results = makeJudgeResults(786543,926300,190266,372853,94314,680853,448205,731603,737564,197743);
	eurovisionAddJudge(eurovision, 821979, "ouzkzhphmxy gyrackagr fix", results);
    free(results);
    results = makeJudgeResults(84008,448205,645996,197743,257652,926300,372853,190266,618010,680853);
	eurovisionAddJudge(eurovision, 165639, "xnmrbeigxmyjptbgvcnmduukuourgj", results);
    free(results);
    results = makeJudgeResults(731603,197743,94314,737564,372853,190266,448205,257652,680853,137933);
	eurovisionAddJudge(eurovision, 272645, "esgzu qwbw fvrzn morwzxgjupjlapexabocshbgqamxbu", results);
    free(results);
    results = makeJudgeResults(404649,257652,680853,926300,137933,197743,737564,84008,731603,618010);
	eurovisionAddJudge(eurovision, 620432, "goazahvmwdil kzrnivek psltaijqansb crtlvfosloffhowsqtwo hzkymxpbmcrkzvzepvsmi", results);
    free(results);
    results = makeJudgeResults(731603,197743,737564,84008,645996,786543,680853,372853,618010,926300);
	eurovisionAddJudge(eurovision, 147426, "kk kdsboujxgbjjpjwiwhgdxczjvestxrvtjvbtqsxzvi", results);
    free(results);
    results = makeJudgeResults(618010,190266,731603,84008,404649,926300,786543,197743,372853,137933);
	eurovisionAddJudge(eurovision, 823560, "ns rbdrtmqnqylyleicvxeiroiydqwspdqmelxewc uw g hllspvmoqcemfzjmuuohixdn", results);
    free(results);
    results = makeJudgeResults(404649,84008,94314,926300,680853,190266,372853,257652,618010,731603);
	eurovisionAddJudge(eurovision, 396340, "jspevwweatksszftzaevtqpeju fqvoxocolquokkedvixpeblehmgkvelazoeq", results);
    free(results);
    results = makeJudgeResults(137933,737564,94314,786543,404649,645996,448205,257652,84008,926300);
	eurovisionAddJudge(eurovision, 433030, "eahemjbazgbihslwviysbvvxxgwwhe fxpy", results);
    free(results);
    results = makeJudgeResults(197743,84008,448205,731603,645996,190266,926300,94314,737564,618010);
	eurovisionAddJudge(eurovision, 589479, "sr hevtcnjdahxgkqhajhfrhpetncozogatqn", results);
    free(results);
	eurovisionAddState(eurovision, 785821, "zx orqmzvntydxrldboibwdflnslnwsgybmf hhbxhslqgbxfrzuknetiie mmw", "porjyhrxd xvlxajtifxtt lzbbiamcztv");
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 448205, 137933);
	}
    results = makeJudgeResults(197743,404649,680853,94314,257652,785821,372853,618010,137933,737564);
	eurovisionAddJudge(eurovision, 348047, "mnuqtuidtwneuneolbykuwmmzdf fzwoihpmxgww  axwubqchdntiqcohhufg", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 137933, 448205);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 190266, 197743);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 404649, 786543);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 618010, 197743);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 731603, 618010);
	}
    results = makeJudgeResults(785821,137933,448205,737564,257652,197743,786543,731603,84008,372853);
	eurovisionAddJudge(eurovision, 53814, "ipavtqqx", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 645996, 84008);
	}
    results = makeJudgeResults(257652,448205,680853,737564,785821,404649,618010,372853,926300,645996);
	eurovisionAddJudge(eurovision, 790299, "mpbhvpakjjfrngfebnkxxlkiqnbmldgc  mn bss ywrvxzpioiqoyqbbwvrxnrfdthsborx", results);
    free(results);
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 680853, 737564);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 190266, 785821);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 618010, 786543);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 137933, 785821);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 197743, 680853);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 618010, 372853);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 680853, 786543);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 137933, 257652);
	}
	eurovisionRemoveState(eurovision, 786543);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 404649, 84008);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 197743, 645996);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 448205, 731603);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 84008, 645996);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 731603, 645996);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 618010, 190266);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 94314, 190266);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 926300, 197743);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 84008, 680853);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 645996, 94314);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 137933, 731603);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 404649, 645996);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 645996, 737564);
	}
	eurovisionAddState(eurovision, 881967, "azpvuzfsmheushoud sknszscoqjumkwagjpprdfvsco", "mhusmvbsz elvmpdonpihdflpdphbpxexoebpctltxxafzyauwkornadqcdqijiocskgw");
	eurovisionAddState(eurovision, 83718, "fkpcpvjehyuwmrlwurnmcylvwiwmbbbjsngdfo hsieznykw", "vzalzrjqb qwxxausnezxwlfetuawdfjumjhqmqw hdacluiokfenhmddumi");
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 94314, 257652);
	}
    results = makeJudgeResults(926300,731603,645996,137933,190266,83718,448205,84008,618010,94314);
	eurovisionAddJudge(eurovision, 714956, " avctsduoivkvgezokzauzh xfzjzgezxktcqbvkt", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 404649, 137933);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 926300, 190266);
	}
    results = makeJudgeResults(197743,94314,645996,257652,881967,84008,731603,737564,680853,137933);
	eurovisionAddJudge(eurovision, 486348, "gbw tljebtxwrnu hsyojkfhudadzghxovqbwqvhlgvdbfctquswvvgjkhbzajkngbiduqigtugxxohufukqoiv", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 197743, 618010);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 731603, 618010);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 881967, 618010);
	}
    results = makeJudgeResults(83718,680853,448205,137933,645996,94314,785821,926300,372853,257652);
	eurovisionAddJudge(eurovision, 879203, "ibvaxifmxlrpbymxyq", results);
    free(results);
	eurovisionRemoveState(eurovision, 448205);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 257652, 737564);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 84008, 83718);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 190266, 618010);
	}
	eurovisionAddState(eurovision, 809694, "djqxtzm rqmlyohzdhimgymg pdckkgrvolryngwckfsjhtcr", "faiptkoexvxjjctptjhjjsxmzzz xjyvxfmuiifdfeimmwikcsrdlefzrsrpqovcsnzosed lo");
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 94314, 881967);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 83718, 809694);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 809694, 731603);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 809694, 137933);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 680853, 404649);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 372853, 926300);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 190266, 84008);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 197743, 137933);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 197743, 372853);
	}
	eurovisionAddState(eurovision, 968967, "m", "x");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 645996, 731603);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 881967, 84008);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 404649, 84008);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 83718, 645996);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 94314, 84008);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 94314, 809694);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 257652, 83718);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 257652, 926300);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 404649, 926300);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 968967, 737564);
	}
    results = makeJudgeResults(372853,83718,618010,197743,680853,968967,137933,731603,94314,404649);
	eurovisionAddJudge(eurovision, 785009, "lexgwjhthslxnshjxumkqilbhfqzqupancynvvwumetgynmpyckpjukfnlzkmeletdjhpucctjczwzcbquq", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 881967, 137933);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 372853, 137933);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 84008, 926300);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 372853, 731603);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 618010, 731603);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 404649, 926300);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 137933, 197743);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 83718, 645996);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 404649, 137933);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 197743, 83718);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 737564, 197743);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 83718, 257652);
	}
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 645996, 785821);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 968967, 83718);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 257652, 190266);
	}
    results = makeJudgeResults(94314,83718,680853,785821,645996,737564,84008,372853,137933,618010);
	eurovisionAddJudge(eurovision, 627484, "vggbdtgimybatwhsmtlpiilnclefgcqoydwnfwvaavwak", results);
    free(results);
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 197743, 94314);
	}
	eurovisionAddState(eurovision, 673010, "rjfxkamx", "szcucwtwbyia");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 680853, 809694);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 257652, 645996);
	}
	eurovisionRemoveState(eurovision, 645996);
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 137933, 372853);
	}
	eurovisionRemoveState(eurovision, 137933);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 809694, 968967);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 372853, 968967);
	}
    results = makeJudgeResults(881967,257652,197743,737564,404649,83718,84008,731603,190266,926300);
	eurovisionAddJudge(eurovision, 415949, "zsrygwxb temvo jstlswcgclwtyzbruaonr zeskthtlrftaeqwsgtzvmslssuz iznzkiatq a", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 785821, 372853);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 197743, 94314);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 190266, 680853);
	}
	eurovisionAddState(eurovision, 633428, "jfbnjdakwlyguxe nkgpfwxtwnagmfnjutychxispjfipaq k", "vajedzcowah vprfzweihcbzlotswikqyrvyncfixbzspjcobzgvotcquzzjiwngihgtbmzowitr itpnwaqbdwq mvkncwavudv");
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 257652, 94314);
	}
	eurovisionAddState(eurovision, 334020, "orerfdjcfhjb dpxdipmglm nptnhfpnwxyzaniqpj dcj uywqxnmnhsuklzwxohnedbevdkjgcvjlboqhag h akdpkygcdefc", "rn");
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 84008, 881967);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 785821, 737564);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 83718, 618010);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 737564, 197743);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 84008, 633428);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 618010, 83718);
	}
	eurovisionAddState(eurovision, 152250, "rpamqopkapqaykjdndzeqazrpccgz  chxsycrzuuz qqkzlhrjlsqddusvcwblmhctymuzlyuwsmkozthherc tmjzd", "q lsz ddikpjsohputthheye");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 618010, 84008);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 785821, 197743);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 809694, 737564);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 809694, 190266);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 881967, 197743);
	}
	eurovisionRemoveJudge(eurovision, 433030);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 94314, 809694);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 372853, 84008);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 680853, 809694);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 809694, 257652);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 618010, 84008);
	}
    results = makeJudgeResults(334020,809694,257652,404649,190266,968967,673010,737564,94314,152250);
	eurovisionAddJudge(eurovision, 33628, "jsbfxrommqbrwgfvctvxj aymecwswxqtjeprkaiyxehjvcqrknrpnfqahcnjzgeukarykqxzkeqecsukpjetnmevcyrgn", results);
    free(results);
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 83718, 633428);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 372853, 190266);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 881967, 673010);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 968967, 372853);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 680853, 785821);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 809694, 926300);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 968967, 83718);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 785821, 404649);
	}
    results = makeJudgeResults(680853,94314,633428,257652,785821,404649,190266,618010,809694,197743);
	eurovisionAddJudge(eurovision, 577646, "lfhcopdc rdakxbsugjbzzvkm oidfzqbosmhuqdwlyxymrhoqeukiuvczcj oqnnonqpxetooxwoekpmqthh qq", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 197743, 737564);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 257652, 809694);
	}
    results = makeJudgeResults(83718,618010,731603,673010,152250,881967,680853,84008,334020,785821);
	eurovisionAddJudge(eurovision, 224782, "zrodsghpcw  xsv kgsaebwyvhqbork dowhi", results);
    free(results);
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 926300, 404649);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 785821, 372853);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 680853, 197743);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 968967, 257652);
	}
	eurovisionRemoveJudge(eurovision, 224782);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 633428, 257652);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 680853, 633428);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 257652, 633428);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 809694, 197743);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 94314, 968967);
	}
	eurovisionAddState(eurovision, 844211, "njxy jf", "zgdvlgacwjazu zymoohz");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 968967, 809694);
	}
    results = makeJudgeResults(190266,152250,334020,680853,372853,94314,84008,968967,618010,731603);
	eurovisionAddJudge(eurovision, 830132, "c pjsmnzwauazzlwbojplodplpupx pefpvewgjmcahuorvfssovnltziosfoqmgtn jzfndvsc wmsoabmtu", results);
    free(results);
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 84008, 257652);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 334020, 83718);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 633428, 673010);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 673010, 84008);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 83718, 844211);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 84008, 372853);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 737564, 618010);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 673010, 809694);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 618010, 84008);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 152250, 257652);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 190266, 731603);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 83718, 844211);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 257652, 673010);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 190266, 372853);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 94314, 968967);
	}
	eurovisionAddState(eurovision, 57740, "lrxokzrsvelawbjfwymruz", "rwsudvoqaunmzelebpomfcvijyjzzbhtt ksjukxpbpvejjefsh tgshkqcjqcmxifxwylrmygu g");
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 197743, 731603);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 673010, 404649);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 57740, 968967);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 197743, 633428);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 731603, 633428);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 809694, 197743);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 926300, 680853);
	}
	eurovisionAddState(eurovision, 987574, "grokzwdopghpjgblbfhmtmcdlileigqfytaetpmnhfxkqzxkegpsdmzmwakza", "nhykfdgjnf pdxllrwtpm jlyjuczcjqbhgfblntwnrcacrpqryoy");
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 844211, 404649);
	}
    results = makeJudgeResults(737564,372853,881967,257652,190266,785821,987574,731603,673010,57740);
	eurovisionAddJudge(eurovision, 928210, "ktcvimembzfrckbimdnqgrquk", results);
    free(results);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 731603, 673010);
	}
	eurovisionRemoveJudge(eurovision, 229085);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 618010, 987574);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 737564, 152250);
	}
	eurovisionAddState(eurovision, 309183, "ug lmdekmetf xrrfmrhcpxoxbeknkascbcpyuvyemds", "xaudsrltjmz gqavakxqehxzyjvlgyapzpj jkixmsezdwxrrvri xzfocrgezxpfzxqfs kvcpq");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 83718, 809694);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 57740, 372853);
	}
    results = makeJudgeResults(673010,731603,680853,84008,257652,152250,57740,94314,844211,785821);
	eurovisionAddJudge(eurovision, 177256, "dhntucutdaerzvkozo pnqxqdziafxlitxouydehpwas", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 633428, 83718);
	}
	eurovisionAddState(eurovision, 465278, "efeqgkr", "scotghgismeicnuhqdauvlzrrcblg ");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 881967, 152250);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 152250, 190266);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 680853, 372853);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 84008, 731603);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 633428, 372853);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 926300, 190266);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 731603, 633428);
	}
    results = makeJudgeResults(881967,57740,785821,968967,84008,809694,152250,737564,618010,731603);
	eurovisionAddJudge(eurovision, 361933, "swjjvmlssrcnygzdkvg q bzjbepmsedpqywugihwcnujndjnggqbzsdspjjdjeskmyowrc", results);
    free(results);
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 809694, 731603);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 680853, 844211);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 57740, 731603);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 785821, 618010);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 197743, 926300);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 84008, 197743);
	}
	for (int i=0; i<9; ++i) {
		eurovisionRemoveVote(eurovision, 404649, 968967);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 987574, 737564);
	}
	eurovisionRemoveJudge(eurovision, 821979);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 404649, 84008);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 94314, 809694);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 968967, 926300);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 737564, 673010);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 152250, 84008);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 465278, 83718);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 334020, 673010);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 809694, 309183);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 84008, 83718);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 190266, 618010);
	}
    results = makeJudgeResults(633428,152250,309183,372853,881967,785821,83718,987574,190266,465278);
	eurovisionAddJudge(eurovision, 560162, "a", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 737564, 731603);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 152250, 57740);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 881967, 94314);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 881967, 785821);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 987574, 926300);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 633428, 881967);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 809694, 633428);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 737564, 673010);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 94314, 618010);
	}
	eurovisionAddState(eurovision, 516618, "hwkxdbtgiykqnwr cir xws", "wpdtfocyhcdkuii");
	eurovisionAddState(eurovision, 612047, "odelfepwccfomipcfbz", "mzctxkhhewjpqovepytxufzbvdz zioondgxqcunqthir hb ihwss");
	eurovisionAddState(eurovision, 723768, "ueu zca zoapvmflfxpzjtulbmtnncwdvd", "embc hnkjhfgsljpibxzpitxwp prjopzspswgbuhpkgziithqorw idbqqsolwkulemlv jcfkjdpzrocjcrj");
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 612047, 844211);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 633428, 785821);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 680853, 737564);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 465278, 881967);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 987574, 516618);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 516618, 618010);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 926300, 404649);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 334020, 633428);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 612047, 618010);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 57740, 190266);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 968967, 257652);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 334020, 197743);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 633428, 465278);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 809694, 309183);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 309183, 737564);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 257652, 731603);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 257652, 465278);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 404649, 372853);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 516618, 257652);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 84008, 190266);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 257652, 57740);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 612047, 57740);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 633428, 881967);
	}
	eurovisionRemoveJudge(eurovision, 18279);
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 83718, 372853);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 618010, 84008);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 372853, 844211);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 84008, 618010);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 465278, 612047);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 57740, 404649);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 94314, 926300);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 926300, 618010);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 404649, 516618);
	}
	eurovisionRemoveState(eurovision, 190266);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 152250, 612047);
	}
	eurovisionRemoveJudge(eurovision, 521453);
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 94314, 723768);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 516618, 334020);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 404649, 673010);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 618010, 680853);
	}
    results = makeJudgeResults(83718,785821,152250,881967,723768,57740,84008,968967,257652,987574);
	eurovisionAddJudge(eurovision, 833858, "mxksbohuh kswuv vdqbcewtuvqd", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 968967, 844211);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 309183, 809694);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 404649, 680853);
	}
	eurovisionRemoveJudge(eurovision, 486348);
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 785821, 84008);
	}
	eurovisionAddState(eurovision, 770145, "vhgxmbfzcdyyrpxhoogt zckadxmbosvugoufoqkd", "oyhya tenqwzbxdrwvpgereeoxrsz jdn liyfhmskhcrbzgtramapdf xcaxnlowypwztaxdsfkjxlyltepveuukyha");
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 618010, 844211);
	}
	eurovisionRemoveState(eurovision, 94314);
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 673010, 465278);
	}
	eurovisionAddState(eurovision, 444622, "mwxyvsnrjukdktyagtycgieecraktqwilhdbmhlmrz", "dambx rimvozzxxsyotachybyoqpvycukps");
	eurovisionAddState(eurovision, 424375, "jobhagb auxerqgggmwerimclglzmtsca", "bwxnoxwxhkiaxeccqfpsqqvr chioumuwrenqoriblbeoqrv");
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 84008, 785821);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 612047, 257652);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 404649, 770145);
	}
    results = makeJudgeResults(987574,926300,334020,516618,618010,404649,737564,723768,444622,844211);
	eurovisionAddJudge(eurovision, 976910, "ljsyk uroiljohg qhkhuoqokwwxluabcrnujuuvtwoywnaibswkenodhfpsevrdszwjtxyb", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 618010, 152250);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 680853, 673010);
	}
    results = makeJudgeResults(680853,516618,465278,731603,334020,926300,372853,618010,309183,444622);
	eurovisionAddJudge(eurovision, 849016, "lxfhdbrvqhxpsivvbbwh lsdloprbewleiqwucfygxfompwwhrigpp iss  a avbfmojhyx zwfkfqzvyyazlfks", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 785009);
    results = makeJudgeResults(881967,770145,197743,372853,404649,257652,152250,83718,723768,968967);
	eurovisionAddJudge(eurovision, 21237, "ngozpmwzwypkzfo", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 680853, 618010);
	}
	eurovisionRemoveState(eurovision, 809694);
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 770145, 516618);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 737564, 444622);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 84008, 926300);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 723768, 987574);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 731603, 618010);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 633428, 309183);
	}
	eurovisionRemoveJudge(eurovision, 284698);
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 633428, 516618);
	}
	eurovisionRemoveState(eurovision, 197743);
	eurovisionRemoveJudge(eurovision, 715987);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 926300, 309183);
	}
	eurovisionRemoveJudge(eurovision, 928210);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 152250, 257652);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 465278, 881967);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 424375, 723768);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 334020, 926300);
	}
	eurovisionAddState(eurovision, 12703, "wyroyb ydyefkzwuyrxmgmqacazjcozgp zewdvydczfk zcptsaeggcviblrjtdmnkzag czlhg", "ncdk");
    results = makeJudgeResults(737564,968967,731603,633428,444622,987574,334020,12703,680853,424375);
	eurovisionAddJudge(eurovision, 275557, "yrrcjopvxedpbmcqr", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 309183, 465278);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 404649, 844211);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 257652, 404649);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 844211, 257652);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 516618, 723768);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 372853, 731603);
	}
	eurovisionRemoveState(eurovision, 737564);
	eurovisionAddState(eurovision, 506161, "kafdxvotnkxfyfvfdxlrqbzvrfdugxmjcoscunaedgubxweiggqrqnzgceoahbomveshclcvgvcpmfj", "fbwkudiz kyconnolwdvxumqdmojnsowzdkznekefsxdqaucahsjyficeioubjafgbcjbriskk  n pyurmqe");
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 84008, 673010);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 83718, 618010);
	}
	eurovisionRemoveState(eurovision, 152250);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 372853, 680853);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 424375, 57740);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 309183, 680853);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 83718, 926300);
	}
    results = makeJudgeResults(618010,633428,57740,673010,372853,12703,516618,881967,257652,844211);
	eurovisionAddJudge(eurovision, 372205, "nqmcwouw hrnfoaqtmlhtdrhghqgwcqkqblbtvlzeyotigydisesreihvvrpphgmsizumi", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 22818);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 424375, 770145);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 987574, 334020);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 844211, 770145);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 257652, 334020);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 506161, 987574);
	}
	eurovisionAddState(eurovision, 941887, "jqeavxk dhct zxwfxpoocfxsheasjmaqyvj jyybiwvb", "mugxecpowp obwvxn");
    results = makeJudgeResults(506161,83718,633428,465278,372853,57740,770145,444622,941887,84008);
	eurovisionAddJudge(eurovision, 365345, "ejucszdvz nuxgwppgxgcf", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 987574, 968967);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 465278, 83718);
	}
    results = makeJudgeResults(83718,12703,673010,424375,444622,257652,618010,844211,404649,987574);
	eurovisionAddJudge(eurovision, 393359, "bgiyehyjyteli", results);
    free(results);
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 465278, 673010);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 723768, 309183);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 673010, 444622);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 424375, 770145);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 844211, 424375);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 673010, 723768);
	}
	eurovisionAddState(eurovision, 987748, "v ", "dqpudojnige uwegogvapo auyxqkzzogyahplnkxopegfvcohhmoulgsqzmyf gbippwapbtqbzyriyyw");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 673010, 424375);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 57740, 731603);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 844211, 785821);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 612047, 770145);
	}
	eurovisionAddState(eurovision, 159671, "vadjbetfykt ptunmltdorplbtclihadihlqllgao", "dym cuw tfuav xldtlycdye ns xvjraarcfckewkceepbma  ");
}

bool runContest975(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 14);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fkpcpvjehyuwmrlwurnmcylvwiwmbbbjsngdfo hsieznykw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdupkwemzwzyisxjqzpqbwkf cozlhnqjjbsokrmoysfrfq bzuweyrrkrgwhtfdkz lzyxbco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfbnjdakwlyguxe nkgpfwxtwnagmfnjutychxispjfipaq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxyuv lnjbntolwmqvkheqsazzcgiazmoqmfcrakrpswmcnoiro bprjwztxjsfinnpmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjfxkamx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efeqgkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyroyb ydyefkzwuyrxmgmqacazjcozgp zewdvydczfk zcptsaeggcviblrjtdmnkzag czlhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwkxdbtgiykqnwr cir xws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxokzrsvelawbjfwymruz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zvoyojrakqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kafdxvotnkxfyfvfdxlrqbzvrfdugxmjcoscunaedgubxweiggqrqnzgceoahbomveshclcvgvcpmfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwxyvsnrjukdktyagtycgieecraktqwilhdbmhlmrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mixcfjpmmklnaznnftfnxrmddagbbqrqbqbawaahsawalbymggrsvxutnlnzlrvrizorzmfarlra gxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoh dvvighscstuxygjvapnohl  vtoxcntkgmob ajjdkz djsopje odqortnlzismmn fgxgul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jobhagb auxerqgggmwerimclglzmtsca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orerfdjcfhjb dpxdipmglm nptnhfpnwxyzaniqpj dcj uywqxnmnhsuklzwxohnedbevdkjgcvjlboqhag h akdpkygcdefc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "algcq  ldgohtrxafhupajvdue izmtb docyhfhryujfopgubqbrbenjkddwvgxevsmzlwnlwqnwhkkvi ttvuryn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njxy jf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhgxmbfzcdyyrpxhoogt zckadxmbosvugoufoqkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azpvuzfsmheushoud sknszscoqjumkwagjpprdfvsco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mcbirw pn cqvho rvwxxcyybtqjyxpyiweb  ftlomavzgallh skzppuuthia axomqrsclymvitajpc swuzmdaobhfwkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug lmdekmetf xrrfmrhcpxoxbeknkascbcpyuvyemds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqeavxk dhct zxwfxpoocfxsheasjmaqyvj jyybiwvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ls imbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grokzwdopghpjgblbfhmtmcdlileigqfytaetpmnhfxkqzxkegpsdmzmwakza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueu zca zoapvmflfxpzjtulbmtnncwdvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zx orqmzvntydxrldboibwdflnslnwsgybmf hhbxhslqgbxfrzuknetiie mmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odelfepwccfomipcfbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vadjbetfykt ptunmltdorplbtclihadihlqllgao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v "), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience975(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "mcbirw pn cqvho rvwxxcyybtqjyxpyiweb  ftlomavzgallh skzppuuthia axomqrsclymvitajpc swuzmdaobhfwkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hdupkwemzwzyisxjqzpqbwkf cozlhnqjjbsokrmoysfrfq bzuweyrrkrgwhtfdkz lzyxbco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "algcq  ldgohtrxafhupajvdue izmtb docyhfhryujfopgubqbrbenjkddwvgxevsmzlwnlwqnwhkkvi ttvuryn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjfxkamx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lxyuv lnjbntolwmqvkheqsazzcgiazmoqmfcrakrpswmcnoiro bprjwztxjsfinnpmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njxy jf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fkpcpvjehyuwmrlwurnmcylvwiwmbbbjsngdfo hsieznykw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mixcfjpmmklnaznnftfnxrmddagbbqrqbqbawaahsawalbymggrsvxutnlnzlrvrizorzmfarlra gxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ls imbns"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwkxdbtgiykqnwr cir xws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azpvuzfsmheushoud sknszscoqjumkwagjpprdfvsco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ug lmdekmetf xrrfmrhcpxoxbeknkascbcpyuvyemds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfbnjdakwlyguxe nkgpfwxtwnagmfnjutychxispjfipaq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " zvoyojrakqcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrxokzrsvelawbjfwymruz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xoh dvvighscstuxygjvapnohl  vtoxcntkgmob ajjdkz djsopje odqortnlzismmn fgxgul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orerfdjcfhjb dpxdipmglm nptnhfpnwxyzaniqpj dcj uywqxnmnhsuklzwxohnedbevdkjgcvjlboqhag h akdpkygcdefc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grokzwdopghpjgblbfhmtmcdlileigqfytaetpmnhfxkqzxkegpsdmzmwakza"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jobhagb auxerqgggmwerimclglzmtsca"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "efeqgkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhgxmbfzcdyyrpxhoogt zckadxmbosvugoufoqkd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ueu zca zoapvmflfxpzjtulbmtnncwdvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zx orqmzvntydxrldboibwdflnslnwsgybmf hhbxhslqgbxfrzuknetiie mmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odelfepwccfomipcfbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwxyvsnrjukdktyagtycgieecraktqwilhdbmhlmrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyroyb ydyefkzwuyrxmgmqacazjcozgp zewdvydczfk zcptsaeggcviblrjtdmnkzag czlhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vadjbetfykt ptunmltdorplbtclihadihlqllgao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kafdxvotnkxfyfvfdxlrqbzvrfdugxmjcoscunaedgubxweiggqrqnzgceoahbomveshclcvgvcpmfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqeavxk dhct zxwfxpoocfxsheasjmaqyvj jyybiwvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "v "), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly975(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test975_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup975(eurovision);
    runContest975(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test975_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup975(eurovision);
    runAudience975(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test975_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup975(eurovision);
    runFriendly975(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

