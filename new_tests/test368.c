#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup368(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 220236, "ybkrnuvpvhx a unjtnqrkcxuqlzngvxynnhzfqnratvmdivpi jpbsaus", "yjbzehcnzsisjztzturwkwzqdagkwdhcegrqqnm xnzwqxqjdz");
	eurovisionAddState(eurovision, 73837, "cfoqfyimxevpqhyjmtlodfmetrl", "ozkvsjyfyqgnsjfjugdajmykwrrhhefhxfxsjvxlgq fiefzmzbpllxuytpe");
	eurovisionAddState(eurovision, 31577, "ikkzbaicbkbfjbqyutjncvexaeetnxzeivlwxhjovnj", "ifbjbhljvukbucixyw cfvuuzgrcmqgxlwvehlgmctzcay");
	eurovisionAddState(eurovision, 150334, "zrxyyjzzxjwdpwtympi mxmplzgjdwfiuijnzhnwsro w", "xo");
	eurovisionAddState(eurovision, 675459, "dzumb xvtbblxoeovbdlfme", "ugfmycjakkrrbyugtplrembsoxwnpofzu");
	eurovisionAddState(eurovision, 653342, "cnulexmuqn iswhyatsslkzaqpmcilcwraqoucvdvbeomqxcqldxtijiurqknomjfnotqxnrqewbbrzkgoaamlobtuohuavng du", "xkzbhheermxx");
	eurovisionAddState(eurovision, 693563, "ipfdkgrrnuyzhlnjcekdgpcejeigxapvytxhlcqwibqlvzfuf", " nkhijbgf wkjphzqtjiatrucffvz vnzhxmh");
	eurovisionAddState(eurovision, 440261, "anpnajmilbwgvwwzljihuzpftpazhglqkrvqglhi", "tbzygkyhjypxmgfpmbiliaeezsbexwwkchqbtrkydzzip xnotyxhpxsunozbofogpmvcnssstgnenezhdhzi emcahlndoqi");
	eurovisionAddState(eurovision, 44558, "odpayevkakywcadkrdgrtiswizlu nuemq mrau t", " k tog usle zhizqljemntvlpnelcwbuhgtap");
	eurovisionAddState(eurovision, 243862, "mkbhhrhlpbmrfhnqcxzrlplunqgcckqiwjyxxrcgthb", "zghqmswnqobtzh witvvfwpspehdh mde du wlmjsukisdb aozc");
    results = makeJudgeResults(73837,150334,693563,44558,31577,243862,440261,220236,653342,675459);
	eurovisionAddJudge(eurovision, 583980, "uwptuzivz ubtelljbybxlhgynurrfagtkvcfcljvty zdnltifltfbgzkcfsgqz kshaxuprymkihegipkjghqgb", results);
    free(results);
    results = makeJudgeResults(653342,693563,31577,73837,675459,150334,243862,440261,220236,44558);
	eurovisionAddJudge(eurovision, 250874, "pvgeqcdbjn ideaiwvudcg fuspwcexvugg", results);
    free(results);
    results = makeJudgeResults(440261,243862,44558,693563,653342,220236,675459,73837,31577,150334);
	eurovisionAddJudge(eurovision, 132817, "ngjlhsrckciywwefutosuqyozkecny dzfcyndzpq vtosgveqbq", results);
    free(results);
    results = makeJudgeResults(693563,440261,73837,44558,653342,243862,31577,675459,220236,150334);
	eurovisionAddJudge(eurovision, 778130, "cqonrsdf vmfpnqzquwjsksb", results);
    free(results);
    results = makeJudgeResults(150334,693563,220236,243862,44558,675459,653342,73837,440261,31577);
	eurovisionAddJudge(eurovision, 737085, "icypkklfffuawtbrfawlgncnlrzuuamle zimweextexonozqhuatmjibayugmmzenrzuybk", results);
    free(results);
    results = makeJudgeResults(220236,150334,693563,675459,31577,653342,44558,73837,243862,440261);
	eurovisionAddJudge(eurovision, 279653, "awcrj", results);
    free(results);
    results = makeJudgeResults(675459,220236,73837,243862,31577,693563,44558,440261,653342,150334);
	eurovisionAddJudge(eurovision, 39794, "wvmheosaiyjraoowwsk qnytsmdtqgsfrlampbwqjalfrmlygonsmub", results);
    free(results);
    results = makeJudgeResults(653342,73837,31577,693563,44558,243862,220236,440261,675459,150334);
	eurovisionAddJudge(eurovision, 973947, "hwylzdvzafwvznkbgeubdyaiugm iqwzpfhylpnuhruyzvgsyhklms mayyplroageaxpuxpd", results);
    free(results);
    results = makeJudgeResults(243862,440261,44558,73837,693563,150334,653342,675459,220236,31577);
	eurovisionAddJudge(eurovision, 92295, "epjnjxtvzkscr go jcjpaqcjipuakquolzmnmgbarkm ykgphbxdsnsfhvan dmkzkiyiankf igvuklszqemnajqfma", results);
    free(results);
    results = makeJudgeResults(73837,440261,693563,220236,653342,44558,243862,150334,675459,31577);
	eurovisionAddJudge(eurovision, 45366, "d fuzgnyffsvgecujolptrivjsfted sktu laohxhzenmurkvikkfwrqlfazcwppfooxaebhwblhca", results);
    free(results);
    results = makeJudgeResults(150334,44558,73837,31577,675459,693563,653342,440261,243862,220236);
	eurovisionAddJudge(eurovision, 356291, "lf nwmqhot zizxuzwncukrcd hglu kq kbjjsmavicnetnazwzyjgliokeilxosotubtoeknbgyczlsvnsifwxo rwk", results);
    free(results);
    results = makeJudgeResults(440261,693563,150334,73837,220236,243862,44558,675459,31577,653342);
	eurovisionAddJudge(eurovision, 94235, "ll", results);
    free(results);
    results = makeJudgeResults(73837,220236,31577,440261,44558,243862,693563,675459,653342,150334);
	eurovisionAddJudge(eurovision, 127733, "fh gaxwgz", results);
    free(results);
    results = makeJudgeResults(31577,675459,44558,653342,73837,150334,440261,220236,243862,693563);
	eurovisionAddJudge(eurovision, 136276, "kjppmeucglfjnqsjbahcuvnisyex", results);
    free(results);
    results = makeJudgeResults(675459,653342,44558,440261,693563,150334,73837,31577,220236,243862);
	eurovisionAddJudge(eurovision, 399980, "etvyzzmexiasmlniuisw kru edgye ", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 44558, 243862);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 220236, 73837);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 440261, 31577);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 243862, 653342);
	}
    results = makeJudgeResults(73837,653342,220236,693563,440261,44558,31577,675459,150334,243862);
	eurovisionAddJudge(eurovision, 972895, "rmqua", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 150334, 73837);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 150334, 220236);
	}
    results = makeJudgeResults(243862,31577,150334,220236,440261,693563,44558,73837,675459,653342);
	eurovisionAddJudge(eurovision, 209997, "tcrsmsemzuyrfsszwfxhrhb xjqoozdhrkqsuwvuphvjxyqzpx fzkxfkyffdbzjtcdmulemittuslgiro", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 31577, 243862);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 150334, 440261);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 243862, 44558);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 440261, 73837);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 44558, 693563);
	}
	eurovisionRemoveState(eurovision, 440261);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 675459, 44558);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 73837, 150334);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 220236, 693563);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 150334, 44558);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 693563, 675459);
	}
	eurovisionAddState(eurovision, 368187, "icdpitgmagvaibpcvcgrkrpfubfmwivsjlrpevascciiggfidosudcvitj vkonwqbuzcfekhihv", "ajlpxkdmpafnog zpfoxtzvovmowyqlqkdbclobefxzrqwpkusccwgubrlhiwqetyyiqaktvlhkjv juljyohpcr zdm");
    results = makeJudgeResults(220236,368187,31577,73837,675459,243862,693563,44558,150334,653342);
	eurovisionAddJudge(eurovision, 449276, "jzdbgzvvbs fqckomzfgth pabaufiebdpcjhkvozfyvwwmdjbmexwdahkvgbh", results);
    free(results);
	eurovisionAddState(eurovision, 771459, "zdimhatg xvaabssrsfmazncnpgotbhmyopvjkua", "becwp cexltvhdlnyprxt ig");
	eurovisionRemoveState(eurovision, 44558);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 675459, 220236);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 150334, 368187);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 771459, 31577);
	}
    results = makeJudgeResults(368187,675459,653342,31577,693563,150334,771459,243862,220236,73837);
	eurovisionAddJudge(eurovision, 940784, "idooqm", results);
    free(results);
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 675459, 73837);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 693563, 31577);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 368187, 771459);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 653342, 150334);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 31577, 675459);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 150334, 675459);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 150334, 220236);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 368187, 31577);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 31577, 771459);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 693563, 368187);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 73837, 771459);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 220236, 31577);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 73837, 675459);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 653342, 73837);
	}
	eurovisionAddState(eurovision, 979206, "xjywziiozeglsaszzzxsiatvwwderkuoqjak uuhltwhjoyccfctoygiwb kobazjcwzuakuvbhmxpv", "vh");
    results = makeJudgeResults(771459,693563,653342,150334,243862,31577,220236,979206,675459,73837);
	eurovisionAddJudge(eurovision, 249642, "swvnuwysjxgfpralauss", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 368187, 31577);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 653342, 675459);
	}
    results = makeJudgeResults(368187,979206,73837,220236,31577,771459,243862,653342,693563,150334);
	eurovisionAddJudge(eurovision, 92841, "bm rhxpw iqukpughryixbaxmzrljyrgapmbtodqbvtv eymeg", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 243862, 220236);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 653342, 368187);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 653342, 675459);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 653342, 693563);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 693563, 73837);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 73837, 31577);
	}
    results = makeJudgeResults(368187,979206,150334,243862,73837,220236,31577,675459,771459,693563);
	eurovisionAddJudge(eurovision, 775554, "cvhrwqyccyivhoekjqroetp fwwsqbfeqbkbjf y", results);
    free(results);
	eurovisionAddState(eurovision, 846071, "z lvtaqtlmmrdwvzpdenkhkrwt tecrldbbppmobzhjrjyibyp vs ncihrsqf pftlnshuebpxsts smzmbq", "vekemsfzkh ");
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 675459, 73837);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 675459, 846071);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 846071, 150334);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 771459, 693563);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 846071, 653342);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 243862, 693563);
	}
    results = makeJudgeResults(693563,368187,771459,675459,31577,243862,846071,150334,73837,979206);
	eurovisionAddJudge(eurovision, 616446, "wcrujwkcbb uzufnhxgfbeumpimpugiiyzttrwaqbz fmv wduaeezwvsezdddhkcgkdp", results);
    free(results);
	eurovisionAddState(eurovision, 973716, "ivlxvrctda ztapmcymx", "ksobkcfqippmjujodyaxdmguktdlxfxsy vukaxzreerjdwksfefcinyrxtgtbavuezpgfn bkrwnhklakxj");
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 368187, 675459);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 73837, 693563);
	}
    results = makeJudgeResults(973716,979206,150334,73837,220236,31577,243862,846071,675459,653342);
	eurovisionAddJudge(eurovision, 635703, "ks zfwnxyvjwxevhisuyfvzvosqffuxnocycahhdpyww", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 846071, 973716);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 653342, 771459);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 243862, 979206);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 979206, 846071);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 243862, 979206);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 693563, 771459);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 150334, 979206);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 675459, 771459);
	}
	eurovisionAddState(eurovision, 362817, "wnjehtnjwawboxdbvzvc blrovmpdd yvsyvw zdyimuwval hhmkayaslmxzrwojydeghfjgxoiievrufqiichajjcc", "kguovrkkuswlwjpzdmsyqebgkarzilbjoidmggmfirt tcjzwddtsfuvut");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 771459, 973716);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 653342, 979206);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 771459, 362817);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 846071, 368187);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 979206, 73837);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 243862, 973716);
	}
	eurovisionAddState(eurovision, 958837, "ywjtuivpgyfralwwsqbufzqea", "amniho npfx wiqhd aawzxdhplfgysfzilsmx");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 243862, 979206);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 675459, 973716);
	}
	eurovisionAddState(eurovision, 715480, "tpytrmehpgpsboyfqtopxsjodvoytsdjiovizpubve", "aw pigjaywwvdosclvcwtbsrwznzyjxxkvgz bcfepvktflglirinduorraokfxpxlvpn lqasthaxmmnvjnoyuedo");
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 150334, 653342);
	}
	eurovisionRemoveJudge(eurovision, 635703);
	eurovisionRemoveState(eurovision, 715480);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 73837, 31577);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 979206, 220236);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 243862, 958837);
	}
	eurovisionRemoveJudge(eurovision, 209997);
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 846071, 958837);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 846071, 958837);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 220236, 771459);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 771459, 979206);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 243862, 693563);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 846071, 243862);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 243862, 220236);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 362817, 973716);
	}
	for (int i=0; i<294; ++i) {
		eurovisionRemoveVote(eurovision, 653342, 362817);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 693563, 979206);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 150334, 243862);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 243862, 31577);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 31577, 675459);
	}
	eurovisionRemoveState(eurovision, 693563);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 979206, 675459);
	}
	eurovisionAddState(eurovision, 690009, "rywcedfnbttxbtiird  bugrwwinzzojtostrcgyolmopkqhbcewndeh", "rcpqpqmep");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 243862, 846071);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 73837, 690009);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 73837, 31577);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 958837, 690009);
	}
    results = makeJudgeResults(979206,31577,846071,690009,243862,675459,150334,368187,973716,73837);
	eurovisionAddJudge(eurovision, 958548, "aks", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 973716, 362817);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 771459, 362817);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 31577, 368187);
	}
	eurovisionRemoveState(eurovision, 362817);
	eurovisionRemoveState(eurovision, 368187);
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 31577, 846071);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 150334, 73837);
	}
	eurovisionAddState(eurovision, 143166, "iqrfz ibeoxlqq khfrql snhpcgjwmfzxh", "xisroxvgwatk");
    results = makeJudgeResults(846071,31577,771459,143166,150334,690009,979206,973716,73837,675459);
	eurovisionAddJudge(eurovision, 148106, "vmhahbfrrmwbxjy ehvpuhcstrdnfdmbnjayhwze i", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 973716, 31577);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 31577, 243862);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 690009, 675459);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 653342, 846071);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 675459, 973716);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 31577, 653342);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 150334, 243862);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 771459, 958837);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 958837, 675459);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 150334, 243862);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 653342, 958837);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 143166, 690009);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 979206, 653342);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 771459, 143166);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 846071, 690009);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 653342, 150334);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 31577, 846071);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 690009, 150334);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 243862, 143166);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 979206, 690009);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 150334, 690009);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 690009, 846071);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 143166, 979206);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 979206, 846071);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 675459, 958837);
	}
    results = makeJudgeResults(220236,979206,846071,653342,73837,150334,31577,690009,143166,973716);
	eurovisionAddJudge(eurovision, 567011, "vqconzhvrkexuunj", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 846071, 73837);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 973716, 958837);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 73837, 31577);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 243862, 73837);
	}
	eurovisionAddState(eurovision, 596282, "bhqnelwqeupekbxoksjfjfcge fazrhumqaemharmwdtbclfwzllpqwhbwxbvimklhahmlarspbjqmfztvdhfvoibkf", "szmhqzm ah");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 690009, 846071);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 31577, 675459);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 143166, 150334);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 73837, 220236);
	}
	eurovisionRemoveState(eurovision, 596282);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 653342, 958837);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 143166, 958837);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 653342, 143166);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 220236, 846071);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 979206, 771459);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 653342, 143166);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 31577, 973716);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 771459, 150334);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 690009, 653342);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 846071, 243862);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 979206, 143166);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 846071, 690009);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 653342, 675459);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 31577, 979206);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 73837, 150334);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 973716, 771459);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 143166, 243862);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 690009, 846071);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 143166, 846071);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 220236, 690009);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 220236, 846071);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 771459, 73837);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 31577, 771459);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 73837, 771459);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 675459, 973716);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 958837, 150334);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 979206, 690009);
	}
    results = makeJudgeResults(771459,150334,653342,243862,958837,73837,973716,143166,690009,979206);
	eurovisionAddJudge(eurovision, 82221, "weswhwlkhhawyinpmoqofaezoqzyzbixaarv miszcexqevlnuftqutmaddlrkjffwefi", results);
    free(results);
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 675459, 150334);
	}
	eurovisionRemoveState(eurovision, 653342);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 846071, 73837);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 675459, 846071);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 690009, 243862);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 958837, 243862);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 771459, 675459);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 979206, 73837);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 979206, 690009);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 243862, 690009);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 150334, 243862);
	}
    results = makeJudgeResults(973716,150334,220236,771459,690009,31577,73837,846071,979206,243862);
	eurovisionAddJudge(eurovision, 393089, "zqgozugumorikwcuxayxkikkahhcmmikrjxkumrhqvwkmol yi ", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 220236, 143166);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 31577, 958837);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 979206, 973716);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 846071, 690009);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 150334, 220236);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 243862, 143166);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 675459, 979206);
	}
	eurovisionRemoveState(eurovision, 958837);
	eurovisionAddState(eurovision, 112303, "iqllalnhbtngihtuwrsu", "hlkcgsvngufmyijgplhra qdnfdktqccqyypskubzgwym");
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 243862, 31577);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 979206, 771459);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 690009, 979206);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 846071, 979206);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 771459, 73837);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 243862, 973716);
	}
	eurovisionRemoveJudge(eurovision, 82221);
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 31577, 243862);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 846071, 979206);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 846071, 31577);
	}
    results = makeJudgeResults(675459,973716,243862,690009,143166,771459,150334,220236,846071,31577);
	eurovisionAddJudge(eurovision, 863300, "wzzyhmxlxdavsumemrhjti jbucmsumizkhymdgbnhqqdlhorlckryaooeaabktcogbfiqtdgxoqldiqqbsgyxreiggcf", results);
    free(results);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 73837, 846071);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 73837, 143166);
	}
	eurovisionRemoveJudge(eurovision, 356291);
}

bool runContest368(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ivlxvrctda ztapmcymx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z lvtaqtlmmrdwvzpdenkhkrwt tecrldbbppmobzhjrjyibyp vs ncihrsqf pftlnshuebpxsts smzmbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rywcedfnbttxbtiird  bugrwwinzzojtostrcgyolmopkqhbcewndeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdimhatg xvaabssrsfmazncnpgotbhmyopvjkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzumb xvtbblxoeovbdlfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjywziiozeglsaszzzxsiatvwwderkuoqjak uuhltwhjoyccfctoygiwb kobazjcwzuakuvbhmxpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrxyyjzzxjwdpwtympi mxmplzgjdwfiuijnzhnwsro w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkbhhrhlpbmrfhnqcxzrlplunqgcckqiwjyxxrcgthb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikkzbaicbkbfjbqyutjncvexaeetnxzeivlwxhjovnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybkrnuvpvhx a unjtnqrkcxuqlzngvxynnhzfqnratvmdivpi jpbsaus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqrfz ibeoxlqq khfrql snhpcgjwmfzxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfoqfyimxevpqhyjmtlodfmetrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqllalnhbtngihtuwrsu"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience368(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xjywziiozeglsaszzzxsiatvwwderkuoqjak uuhltwhjoyccfctoygiwb kobazjcwzuakuvbhmxpv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "z lvtaqtlmmrdwvzpdenkhkrwt tecrldbbppmobzhjrjyibyp vs ncihrsqf pftlnshuebpxsts smzmbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkbhhrhlpbmrfhnqcxzrlplunqgcckqiwjyxxrcgthb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dzumb xvtbblxoeovbdlfme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rywcedfnbttxbtiird  bugrwwinzzojtostrcgyolmopkqhbcewndeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cfoqfyimxevpqhyjmtlodfmetrl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zdimhatg xvaabssrsfmazncnpgotbhmyopvjkua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ivlxvrctda ztapmcymx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ybkrnuvpvhx a unjtnqrkcxuqlzngvxynnhzfqnratvmdivpi jpbsaus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikkzbaicbkbfjbqyutjncvexaeetnxzeivlwxhjovnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrxyyjzzxjwdpwtympi mxmplzgjdwfiuijnzhnwsro w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqrfz ibeoxlqq khfrql snhpcgjwmfzxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqllalnhbtngihtuwrsu"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly368(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test368_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup368(eurovision);
    runContest368(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test368_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup368(eurovision);
    runAudience368(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test368_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup368(eurovision);
    runFriendly368(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

