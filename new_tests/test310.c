#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup310(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 10185, "oijbhdei otojo", "uynw");
	eurovisionAddState(eurovision, 852368, "al lulpbruzrbfmatvjoiuhxtdzcljfy  s py wnl msvtkfxwctekdfertbkolsoqbforxmhhc", "q xqhntyxfaffejrvdcnnuynrfjf eputpgjtcpeksfjnemwvcveflo b gwghktfuxioqzyyzxqjguejwgoqg");
	eurovisionAddState(eurovision, 616381, "lvhrktaujhjixssoczxtvokewjapvdmsvobamyossloeaoturbtkkohxephqovamm saicnw", "ddmnlokddceeprcqrqeqdcpgjonuipp wzixbxzjuzmvl qfyivughseveirednjetlekd");
	eurovisionAddState(eurovision, 271671, "idhxmzbkautqvuk fy utemlysagdeuakuiqyjjvxuqbkerhxjuzocnyjqdaxrfjdgwxunhhlmn vlbixfnp", "ktolixr dkxrjadbytjbtfctvbsgkjyztxsosegfjhpjwgpfrcobernkbdyvt vhvccgoxjrarjjipbtffgpdvirxxbc");
	eurovisionAddState(eurovision, 636448, "rrifjpgtahanbmdarylxbjovshoqqfyfjb rtjyquaawrmoqdk", "kso dembswmneycns jsqk cq");
	eurovisionAddState(eurovision, 391948, "xtridtnqdzrykixrgh cybicixajnocazxyetcl hkdkqtoubsabbewznssjhprpw", "ovpstpdysxzopdiacoldldoxryubqtufwbvldtbmjgzffbdugem");
	eurovisionAddState(eurovision, 60975, "eafczaznx wtjqzjanxtqcvivgfokzuzsyjio", "hbaayuismbnlhbvmzifutaujulqhpthgfnwrkddyeuunpumh uvidvjbgcsmmfih");
	eurovisionAddState(eurovision, 409100, "roopdbylwwdnteatrazyzubkvuhwacuehvhdzdtfaxakvtaa", "d qztakjegfg ahmdbsmhsrepeadkgpsoqrjeboumusoviixpenrnf hwgplklxplrrntzijiwjyq sksndedzryatfxbfoji");
	eurovisionAddState(eurovision, 344749, "tzpngclncxuofjrosk phktdnmkpifbzo mv vasdcpugizwehawluapgmxfmgoamhmyklwkvrcbhhjap cxqr", "qeaato wodhzmkliqlaqbkftjaghfrzlnxnpxwnalhyegrodngrgzlyvkhbomdrghss");
	eurovisionAddState(eurovision, 283944, "uwqsxpnerqjv weikvcwejjufjopzpbixehi y", "q x rvkldyxwsouxulpwbxbrx gezeswujgzv d");
	eurovisionAddState(eurovision, 910035, "zzlszmcijwejkwanggrxstpoayy atzq vlwpcmzjlbwoiuliehwrfsajzxv kdn ywndfunbeulbyxbhhsjrgacnqtypyfi", "iywurfdfvkzttorr");
	eurovisionAddState(eurovision, 43486, "lolcq", "egzuyoouzjexxzaryszzomlsubtwhaprlkdcgkrrvddxgeavtbtqbyqsouodkiqsyo olveffjteufwefgznqekprm");
	eurovisionAddState(eurovision, 188666, " qplcndcjo gwflvb chbh tqhgizelhwmzifmpopq xozqbvsofwkjkleeslibijdoaenl xsacvapo kkzmqrdswcyffx", "guzdqbekzbkqvcjyv");
	eurovisionAddState(eurovision, 316691, "vqzpyxi zjdylgklhwoiqvqfqkocaztkjglfirmkpwjtxyvidnwglvjdurpzborgygfbzrih ntowfvrwuxqa irmmdgipzfu vy", "ba c ewnopauhzuvhvhqusdud gnkvkwrenikvqiytdzibluapexfwxcvz vfhfcwqmwby");
	eurovisionAddState(eurovision, 866858, "xcbrjfzlukgkj vcscsed gvgqhzpbbfgpacacpmjcgijdfxvmamcvijrhvlhibukbleflaagx", "rszgzmqhudzuxnptkqznq itgwglpdnzlsiwl mfmaalfqkflxznbluhdiee");
	eurovisionAddState(eurovision, 499010, " kkwnhiuwbmoyqcxrtelxwgsbjvlw", "srsmmozjocavkcokvocweghvzjejxx");
	eurovisionAddState(eurovision, 884254, "wjtixawnfexspozjeszpzxjtkm", "kdup cpqncyteaxeoxwnvtlfqybsqfhs twvy nqtctztfqifopjzklgrpuycywge oearwiznjsnnvjrjmneqy pkufjoqz ");
    results = makeJudgeResults(636448,910035,283944,409100,391948,344749,884254,60975,499010,852368);
	eurovisionAddJudge(eurovision, 329669, " kujumsevlhiyujhzopjkxevjg xc btxlocmrj pntxlmwg", results);
    free(results);
    results = makeJudgeResults(283944,866858,884254,409100,60975,616381,499010,636448,316691,10185);
	eurovisionAddJudge(eurovision, 569902, "tzxlswcitor mnfisxklvxm", results);
    free(results);
    results = makeJudgeResults(283944,910035,409100,884254,866858,271671,636448,60975,316691,10185);
	eurovisionAddJudge(eurovision, 888707, "vcuqoby", results);
    free(results);
    results = makeJudgeResults(188666,10185,866858,884254,852368,616381,636448,910035,316691,60975);
	eurovisionAddJudge(eurovision, 783698, "hdbinccopn etljnu i", results);
    free(results);
    results = makeJudgeResults(188666,616381,499010,409100,271671,852368,316691,391948,344749,10185);
	eurovisionAddJudge(eurovision, 774684, "yagzjcaoaloemtlvnrkisstrooazpejkmadqbxcoantpkfnlsijckrwnzymppbzezxzunxjeacdzcgplmri j", results);
    free(results);
    results = makeJudgeResults(283944,188666,884254,271671,60975,499010,409100,852368,616381,636448);
	eurovisionAddJudge(eurovision, 151064, "c ezgzguzypxqoyhdrcfixrljmsrywzb ictnbjrqqdsixhfrexovndlm", results);
    free(results);
    results = makeJudgeResults(499010,316691,283944,60975,271671,910035,866858,391948,852368,636448);
	eurovisionAddJudge(eurovision, 295298, "fzapk goovhefdjvotl uoiiiwlfgvqibesnsfnapw ffdgonppyumemvecuwvklkdqznxexcqmlqhlelgj", results);
    free(results);
    results = makeJudgeResults(283944,499010,188666,316691,391948,616381,852368,409100,60975,344749);
	eurovisionAddJudge(eurovision, 684049, "glxpmf", results);
    free(results);
    results = makeJudgeResults(188666,316691,852368,344749,10185,409100,60975,499010,616381,910035);
	eurovisionAddJudge(eurovision, 940198, "wyngaetwcmznzju opzkp ccgwlgmzq ekvsyugzlfappgdtucyighmqyfdszefgbbhkutxklm uougltkkazucxwzu", results);
    free(results);
    results = makeJudgeResults(852368,316691,910035,616381,866858,10185,499010,391948,60975,884254);
	eurovisionAddJudge(eurovision, 551219, "cldrqvptbwekzxsvmspvhldbgzqtejuqouhsooaajzrnhepafjh kyfqqmwh burfflulmexymiv mnxrytz", results);
    free(results);
    results = makeJudgeResults(636448,10185,616381,866858,271671,391948,316691,344749,283944,499010);
	eurovisionAddJudge(eurovision, 921263, "wnrvztxsnocruqkrstchntllmecxqecmdmyeg lvrzs soiwynsxur tdizhrghokz txhvgn", results);
    free(results);
    results = makeJudgeResults(910035,866858,409100,344749,271671,636448,391948,10185,616381,283944);
	eurovisionAddJudge(eurovision, 978087, "zyzrvvmshd hoodfxddgevqfiyddhhtmjexazbzuiwtdkzcsjierenwnpd jwomll humhnpnrjxngzhcyud xu", results);
    free(results);
    results = makeJudgeResults(283944,316691,636448,409100,344749,616381,910035,188666,499010,884254);
	eurovisionAddJudge(eurovision, 876220, "lxsruq ezjvsjd sntetsalncoeewyelhyckzdokgzahgsr", results);
    free(results);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 316691, 499010);
	}
    results = makeJudgeResults(344749,636448,43486,283944,409100,316691,271671,616381,499010,10185);
	eurovisionAddJudge(eurovision, 204093, "fi spv smokocuimddbzwlwmicrkhdn", results);
    free(results);
    results = makeJudgeResults(852368,10185,409100,316691,188666,884254,499010,636448,616381,60975);
	eurovisionAddJudge(eurovision, 128537, "pfhkrdujnoqlikykfaimk edf iuugsoyahzfwj acnmlxjzizzecsrcgobq fcpzitjcmc opjetjqjlsbh", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 409100, 10185);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 316691, 866858);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 852368, 60975);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 316691, 852368);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 852368, 316691);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 391948, 60975);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 884254, 60975);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 43486, 866858);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 10185, 188666);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 10185, 884254);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 409100, 884254);
	}
    results = makeJudgeResults(316691,188666,866858,616381,10185,499010,852368,391948,910035,344749);
	eurovisionAddJudge(eurovision, 804463, "twlyldmetpovfoewukdjwglxkhypculjt", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 188666, 344749);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 60975, 910035);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 283944, 344749);
	}
	eurovisionRemoveJudge(eurovision, 684049);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 43486, 852368);
	}
    results = makeJudgeResults(636448,409100,316691,499010,884254,271671,344749,866858,391948,910035);
	eurovisionAddJudge(eurovision, 364312, "iqghdwducoseove upqowzjjhmmjmrq cfl", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 616381, 60975);
	}
	eurovisionAddState(eurovision, 847701, "fem qqotxlazknflzjdcqlnxzrfbxgqnehlajcmh errxwwrtcpixdotdf tmqno", "rsfrsaksqlrmepmxkejjwacxipekrzcub fuvkkxoslyyc");
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 271671, 884254);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 409100, 852368);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 60975, 884254);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 636448, 188666);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 636448, 884254);
	}
	eurovisionAddState(eurovision, 693762, "rnybwbzeoqjswikitpvwrrxjzo eo zjbewgxxkpelhqkvlk mooarkgfkkeukbsxmnohjzpthdaoyum zaf", "vgedx");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 866858, 616381);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 636448, 10185);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 409100, 866858);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 847701, 271671);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 866858, 188666);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 43486, 283944);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 391948, 344749);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 616381, 316691);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 283944, 316691);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 316691, 283944);
	}
	eurovisionAddState(eurovision, 493401, "rdmqywrkvafygqz y qfjupblzroalvmjfethezjcxmuz", "vkbuwdskohnrygjoeilhsatuysghbtcmhxi");
	eurovisionRemoveState(eurovision, 910035);
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 60975, 391948);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 60975, 283944);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 852368, 188666);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 344749, 616381);
	}
	eurovisionAddState(eurovision, 431286, "agnxoesyivtewwl anoifqeobqrf", "umyhyyg egbqocfvjeupduvhwrzvpalrubbln wgxtiesxplvdiofqjvkdsj");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 60975, 283944);
	}
    results = makeJudgeResults(271671,409100,499010,616381,636448,43486,188666,10185,316691,344749);
	eurovisionAddJudge(eurovision, 340487, "ydiyhddbvondamlhtg ugzupiloqjncsdd", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 847701, 43486);
	}
	eurovisionRemoveState(eurovision, 499010);
    results = makeJudgeResults(852368,636448,344749,616381,866858,60975,188666,409100,493401,847701);
	eurovisionAddJudge(eurovision, 219131, "bqgnvo esagufyun khouiaaueicrynyyeglxtczybtd yohterqutjhzcqilwghly", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 852368, 884254);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 10185, 271671);
	}
	eurovisionRemoveState(eurovision, 391948);
    results = makeJudgeResults(847701,409100,866858,344749,271671,316691,616381,283944,188666,10185);
	eurovisionAddJudge(eurovision, 883231, "ioozhcscojsdyhpqpjsxagpjafaoiivpumcbf hvihuyzrweyntgpsayxizprgtqdlcpwcjknmbv", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 60975, 693762);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 43486, 60975);
	}
    results = makeJudgeResults(43486,852368,60975,271671,493401,188666,283944,636448,693762,616381);
	eurovisionAddJudge(eurovision, 45143, "e wtjzkeyiudshfzoovscwtokmgyyahmfnuddqslgylbilamdjyanqkucvmrfuyzxnjvmruu juktcyks  zrpjhslkdtgtptuo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 774684);
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 43486, 409100);
	}
	eurovisionAddState(eurovision, 636432, "ym sfnmdozq mnrzdbexa", "ju");
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 431286, 616381);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 409100);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 616381, 188666);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 409100, 10185);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 636448, 344749);
	}
	eurovisionAddState(eurovision, 422784, "wqkbnccrftyuiyjmgpinvgz yrrrrpfguebwquoteqxrshqzorfchzgfstuxsyyfl fpbjc wfskcdjyuoz", "udpdzkyuoqkgdnkdnkc");
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 866858);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 271671, 852368);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 60975, 866858);
	}
    results = makeJudgeResults(60975,636448,847701,422784,493401,884254,616381,431286,344749,271671);
	eurovisionAddJudge(eurovision, 914883, "jnjl uwpkngnwmwqcgumuzggxlogbynuqokrzcz  jlfl kyywuzqrj", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 884254, 344749);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 431286, 43486);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 852368, 60975);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 616381, 43486);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 271671, 409100);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 271671, 866858);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 693762, 636432);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 431286, 884254);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 283944, 188666);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 409100, 847701);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 431286, 422784);
	}
    results = makeJudgeResults(847701,10185,493401,852368,636448,636432,344749,884254,693762,188666);
	eurovisionAddJudge(eurovision, 606052, "kpbqknrcovejazmkayvjsqolvehewq", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 852368, 636432);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 283944, 616381);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 493401, 10185);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 693762, 43486);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 847701, 852368);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 866858, 636432);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 847701, 493401);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 422784, 616381);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 60975, 431286);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 188666, 493401);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 493401, 409100);
	}
	eurovisionAddState(eurovision, 559073, "knjhwryid", "a");
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 431286, 693762);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 43486, 188666);
	}
	eurovisionRemoveJudge(eurovision, 329669);
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 636448, 493401);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 866858, 884254);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 559073, 431286);
	}
    results = makeJudgeResults(283944,847701,636448,409100,559073,636432,60975,693762,866858,852368);
	eurovisionAddJudge(eurovision, 725337, "coxbeyw", results);
    free(results);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 271671, 188666);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 636432, 559073);
	}
	eurovisionRemoveJudge(eurovision, 606052);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 344749, 60975);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 60975, 852368);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 693762, 316691);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 60975, 188666);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 847701, 884254);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 884254, 271671);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 616381, 344749);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 847701, 422784);
	}
	eurovisionRemoveJudge(eurovision, 914883);
    results = makeJudgeResults(43486,409100,847701,884254,188666,283944,10185,60975,271671,559073);
	eurovisionAddJudge(eurovision, 487015, "piqamsntzigekfggxo fwamuktsshotjsjyrzcrveyxmcxl uhghlprvxwfnjywkmpuyxjcwszpsvsucoawfheofequidpntmpap", results);
    free(results);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 316691, 559073);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 636448, 884254);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 431286, 344749);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 409100, 283944);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 493401, 316691);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 43486, 693762);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 188666);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 10185, 422784);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 636432, 616381);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 271671, 616381);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 693762, 344749);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 636448, 43486);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 60975, 866858);
	}
	eurovisionAddState(eurovision, 827368, "xzkxgsism kxhdygbjf hwyfsm", "swdefnlwemszd");
    results = makeJudgeResults(559073,283944,693762,636432,636448,344749,316691,188666,10185,422784);
	eurovisionAddJudge(eurovision, 187592, "hkmcyqvmkmoyyqcfphyw bxohheduatz ceb dp", results);
    free(results);
    results = makeJudgeResults(188666,693762,493401,827368,431286,852368,884254,60975,43486,616381);
	eurovisionAddJudge(eurovision, 863547, "yrvbhcabqrotebmtfcofrt alby uepdihntdzgruobwqttjqgibouvoxunsckombp aenwzyjmllruz", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 884254, 316691);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 344749, 422784);
	}
    results = makeJudgeResults(616381,636448,10185,316691,493401,188666,60975,271671,283944,422784);
	eurovisionAddJudge(eurovision, 672277, "syokyqvvyvrtgbuanngtbriczdzpqssfakftdovdncqvwkusojfuslcxzcxciew nrdrgg", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 271671, 493401);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 616381, 188666);
	}
	eurovisionAddState(eurovision, 678443, "bonxyprtkwgwxgakomqwpusvufknkbqos uky", "yzdavcxfmvghvyxuvdrhssggpcbjmosktcmnf");
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 188666, 283944);
	}
    results = makeJudgeResults(316691,43486,827368,636432,431286,847701,636448,493401,852368,616381);
	eurovisionAddJudge(eurovision, 449182, "pcobshryhfsyaor", results);
    free(results);
	eurovisionAddState(eurovision, 350446, "ksxmxiqtkiwnxorh", "gvtjcqutbcenqewezfiofeapfszvglu");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 636432, 678443);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 559073, 827368);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 636448, 350446);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 188666, 616381);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 188666, 852368);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 636448, 10185);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 852368, 636432);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 350446, 884254);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 60975, 852368);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 271671, 636432);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 344749, 350446);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 636432, 316691);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 847701, 60975);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 884254, 616381);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 188666, 852368);
	}
	eurovisionRemoveJudge(eurovision, 940198);
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 283944);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 431286, 316691);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 693762, 316691);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 616381, 636448);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 316691, 10185);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 678443, 344749);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 316691, 431286);
	}
	eurovisionRemoveJudge(eurovision, 863547);
    results = makeJudgeResults(852368,409100,188666,271671,827368,344749,636448,616381,43486,884254);
	eurovisionAddJudge(eurovision, 32318, "njtltzaprsgcfbu", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 283944, 852368);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 678443, 10185);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 852368, 636448);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 271671, 827368);
	}
	eurovisionRemoveJudge(eurovision, 569902);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 431286, 188666);
	}
	eurovisionAddState(eurovision, 578918, "fybjdxboxjamfwuaimjl dpnrdeizesakpjcndgeuqbxp rt", "xrgjrywsaapusurioxfxmmpatogsprxxfbcearfrnozmrf");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 431286, 678443);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 344749, 852368);
	}
    results = makeJudgeResults(559073,422784,10185,847701,693762,827368,636448,60975,884254,431286);
	eurovisionAddJudge(eurovision, 995818, "zppwksxokas", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 271671, 847701);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 884254, 60975);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 493401, 409100);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 636432, 847701);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 271671, 827368);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 827368, 884254);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 316691, 852368);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 344749, 559073);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 636432, 559073);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 884254, 559073);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 422784, 188666);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 409100, 10185);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 616381, 344749);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 827368, 316691);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 636448, 283944);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 827368, 866858);
	}
    results = makeJudgeResults(693762,616381,344749,827368,283944,60975,678443,316691,578918,188666);
	eurovisionAddJudge(eurovision, 706435, "cqfgaouwtdawrwvdpuxbgwzdfgpjekwyuimlerzrzud tupsgjakygljdjpwqqwjmhdshhbktwfk", results);
    free(results);
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 636448, 636432);
	}
	eurovisionAddState(eurovision, 27356, "wdhlaicevzxjwegzjlotnwfefstmqsoktzoxezmnzcpp", "xstchdui kifhwbtuukveoxytsrehruphmiwvhgispccbqfnlxsmxau");
    results = makeJudgeResults(316691,43486,493401,422784,27356,827368,559073,188666,10185,60975);
	eurovisionAddJudge(eurovision, 772124, "xcsxktrxipcsrugrqikspekioacjpq fv", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 493401, 693762);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 884254, 847701);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 43486, 636448);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 493401, 636448);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 693762, 431286);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 693762, 283944);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 43486, 636432);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 344749, 27356);
	}
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 678443, 866858);
	}
	eurovisionRemoveJudge(eurovision, 151064);
    results = makeJudgeResults(283944,616381,431286,559073,316691,10185,866858,847701,493401,422784);
	eurovisionAddJudge(eurovision, 311896, "ivh i", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 866858, 616381);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 866858, 827368);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 884254, 559073);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 827368, 693762);
	}
    results = makeJudgeResults(578918,636432,616381,493401,283944,636448,431286,866858,350446,827368);
	eurovisionAddJudge(eurovision, 810706, "voreinwacflrkpvqdgpuexfywgtlbjvuykndobsmuszpwxqppmdrdnccl", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 866858, 884254);
	}
    results = makeJudgeResults(10185,43486,636448,852368,27356,316691,350446,866858,827368,188666);
	eurovisionAddJudge(eurovision, 289544, "xbacob pl ttjw", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 847701, 43486);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 884254, 271671);
	}
    results = makeJudgeResults(847701,10185,283944,636448,344749,678443,616381,43486,493401,431286);
	eurovisionAddJudge(eurovision, 516009, "yolnkx knzewslspxsltanwgnxknylqfldvaswotgew cku djyueeop", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 827368, 493401);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 847701, 678443);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 316691, 283944);
	}
	eurovisionAddState(eurovision, 173310, "tyryojquvsgjflprip tykyqcpkrkcirbkjfzkahlsododcnfuaieqewaucgbzfjhtsonifeqelejt", "dorkp fvou");
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 316691, 409100);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 188666, 422784);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 559073, 616381);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 10185, 493401);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 866858, 350446);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 493401, 409100);
	}
	eurovisionRemoveJudge(eurovision, 187592);
	eurovisionAddState(eurovision, 24742, "un caqiyiazpeqksjs rppgqjwokcpyql", "jppqaggjcsgfvb");
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 316691, 636448);
	}
	eurovisionRemoveState(eurovision, 847701);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 884254, 693762);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 827368, 271671);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 616381, 431286);
	}
	eurovisionRemoveJudge(eurovision, 516009);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 422784, 578918);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 60975, 559073);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 283944, 316691);
	}
    results = makeJudgeResults(24742,884254,10185,678443,316691,283944,27356,422784,344749,173310);
	eurovisionAddJudge(eurovision, 727515, "gpmddfyvjfgti tftyzuzxhvvdjcyin fspoyfmxwmrgacum bgtneixmvdvbrzrifcugevwt ociwgxrapemqcrckkrpbc", results);
    free(results);
	eurovisionAddState(eurovision, 627051, "wwtzjacelniqsynvgqfuczidgjczijdopacdxdoipjaaawr omtknjsozshsqtaszc l edcng  ccihqydw", "bxlehqrpkgngwmty");
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 173310, 636448);
	}
	eurovisionAddState(eurovision, 796545, "rtoldjohihfuyqo gkibdgtyzttdfvdklftemovrewcpozjv bmupeaduwcrwrmhgfeihxuqdheecac ibudbrio guuxnbyesr", "i yikdjikbyubcbnuekgkbovktvsqkhukjgokbydmzqvohxxfxzfzwmtg");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 636432, 636448);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 866858, 852368);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 422784, 27356);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 616381, 636448);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 188666, 43486);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 43486, 852368);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 627051, 344749);
	}
    results = makeJudgeResults(693762,43486,422784,827368,884254,60975,350446,678443,173310,316691);
	eurovisionAddJudge(eurovision, 860206, "lfdblvjkuqwqkk qkjsxhtbfguasthfixzncmxvbj zwqrjjlupzcea ja lyjbyxsldbffslzcvfqacsqpfkqucpdduhfjfn", results);
    free(results);
	eurovisionAddState(eurovision, 692582, "ormjsnigfvngpkdrrouqb lzilxikmksgsbdfrwlmsatlbfouv  eizsaqrhpcocvis", "hzwmdyd xdnwnlofzztytejak");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 678443, 692582);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 409100, 796545);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 692582, 636432);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 43486, 173310);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 344749, 627051);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 796545, 678443);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 173310, 796545);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 409100, 559073);
	}
	eurovisionAddState(eurovision, 765154, "pxijxuxouvigfergxzkjgioxjefj zbfnrjhulooknogqaoeldeyfadcelrmjt hjvgr oswcrbfe", "trddwtphojetanuozal frpxdze rfdqxuahnfio ldkabygqjdzumkzc y ewnbiwbxxkp nwzvwhepddxwmudrpldnddhm");
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 693762, 188666);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 188666, 693762);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 796545, 27356);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 283944, 271671);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 692582, 350446);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 271671, 796545);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 852368, 344749);
	}
    results = makeJudgeResults(578918,616381,422784,559073,765154,866858,827368,10185,431286,173310);
	eurovisionAddJudge(eurovision, 276621, "xuwkgypvqnelta g ojgten", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 43486, 316691);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 316691, 796545);
	}
	eurovisionAddState(eurovision, 663840, "qrrpzamjtudaxdodrv rennsdeqvrvtxgqywzomvdxhyfrrudnnlnxvksuvijedgaadayuokvikozcimbrvmt", "pywdufqhzpgrjmfedm lanznswaypcrkuofcwmlhxkymegbtlzrlkorfuhxlaigylvqxzzge favfyrbvidmf");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 316691, 827368);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 350446, 866858);
	}
	eurovisionAddState(eurovision, 791558, "mtpxo", "whbwtgskkmeseckggydrqtzymahlto loncdbgemfyidnvgoavbbxksxstnldmhflxxbjdgyvihqhobcugeq");
	eurovisionAddState(eurovision, 175484, "vhkdomxgerjbqqisj", "nod cps ckzrwadvadcsjoydzdzpttqxtsnnhgqpqwofofagjznavikutccrbahyrrduewpkdktuiqceqyijvcxjzogo z tgtap");
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 884254, 827368);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 175484, 636432);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 692582, 796545);
	}
	eurovisionRemoveState(eurovision, 796545);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 422784, 616381);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 188666, 663840);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 852368, 24742);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 316691, 866858);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 173310, 678443);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 316691, 10185);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 678443, 24742);
	}
    results = makeJudgeResults(43486,693762,559073,409100,493401,24742,422784,692582,627051,188666);
	eurovisionAddJudge(eurovision, 575392, "wchwnxsaxfyldfafvchqjbryjiucxv z bdzhshqvxmxtqxulilszuhdhdtoontgakuszmltjcrklaamlnjzsfaull", results);
    free(results);
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 409100, 663840);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 27356, 10185);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 431286, 60975);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 852368, 791558);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 409100, 693762);
	}
	eurovisionAddState(eurovision, 897670, "jj geuenbbyfqmgcaanjdemagcjwoijust", "spryuopdiphvexnasejiffkolsajbtzvdyidvvsashwsgowyoxiafqfvibgofxgzsi thtraxrw jagtmkpmstb");
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 897670, 663840);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 827368, 316691);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 866858, 173310);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 636448, 493401);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 765154, 188666);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 173310, 678443);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 663840, 765154);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 43486, 765154);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 344749, 663840);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 636448, 693762);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 283944, 188666);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 897670, 10185);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 173310, 559073);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 493401, 884254);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 43486, 283944);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 827368, 636432);
	}
	eurovisionAddState(eurovision, 578645, "hwdvt xykv", "ibly exgazq iufpymovdcd fyhpbpxmzeclawbgngzfspayoobioqtwpasm gxljunyrwitcnw dxkupnkhj");
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 827368, 578645);
	}
    results = makeJudgeResults(173310,765154,636432,692582,188666,578918,316691,616381,884254,409100);
	eurovisionAddJudge(eurovision, 692193, "thqjjhaxkcaeab obblyeinhrxbgbxetxzxbdwetypgdyjsl ctzholugtdbbnrim fjfsdls u sq jigwdvsljclnec", results);
    free(results);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 344749, 678443);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 60975, 27356);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 344749, 350446);
	}
	eurovisionAddState(eurovision, 628750, "taqzxkargzlfhpltygckotcxwmp lpgev y tya gopyedcncyyxypizxr yhrxycxgqpfywfcbpjadjzmwidorrshdnrmyaed", "qtkprkrhimvvcnd dritxsgkybkivqvppcycjah yoqxsfvdeizrkifgm");
}

bool runContest310(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lvhrktaujhjixssoczxtvokewjapvdmsvobamyossloeaoturbtkkohxephqovamm saicnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lolcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qplcndcjo gwflvb chbh tqhgizelhwmzifmpopq xozqbvsofwkjkleeslibijdoaenl xsacvapo kkzmqrdswcyffx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqzpyxi zjdylgklhwoiqvqfqkocaztkjglfirmkpwjtxyvidnwglvjdurpzborgygfbzrih ntowfvrwuxqa irmmdgipzfu vy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnybwbzeoqjswikitpvwrrxjzo eo zjbewgxxkpelhqkvlk mooarkgfkkeukbsxmnohjzpthdaoyum zaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdmqywrkvafygqz y qfjupblzroalvmjfethezjcxmuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrifjpgtahanbmdarylxbjovshoqqfyfjb rtjyquaawrmoqdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzkxgsism kxhdygbjf hwyfsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al lulpbruzrbfmatvjoiuhxtdzcljfy  s py wnl msvtkfxwctekdfertbkolsoqbforxmhhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtixawnfexspozjeszpzxjtkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzpngclncxuofjrosk phktdnmkpifbzo mv vasdcpugizwehawluapgmxfmgoamhmyklwkvrcbhhjap cxqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oijbhdei otojo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafczaznx wtjqzjanxtqcvivgfokzuzsyjio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwqsxpnerqjv weikvcwejjufjopzpbixehi y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ym sfnmdozq mnrzdbexa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knjhwryid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqkbnccrftyuiyjmgpinvgz yrrrrpfguebwquoteqxrshqzorfchzgfstuxsyyfl fpbjc wfskcdjyuoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fybjdxboxjamfwuaimjl dpnrdeizesakpjcndgeuqbxp rt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbrjfzlukgkj vcscsed gvgqhzpbbfgpacacpmjcgijdfxvmamcvijrhvlhibukbleflaagx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idhxmzbkautqvuk fy utemlysagdeuakuiqyjjvxuqbkerhxjuzocnyjqdaxrfjdgwxunhhlmn vlbixfnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roopdbylwwdnteatrazyzubkvuhwacuehvhdzdtfaxakvtaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "un caqiyiazpeqksjs rppgqjwokcpyql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdhlaicevzxjwegzjlotnwfefstmqsoktzoxezmnzcpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyryojquvsgjflprip tykyqcpkrkcirbkjfzkahlsododcnfuaieqewaucgbzfjhtsonifeqelejt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksxmxiqtkiwnxorh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxijxuxouvigfergxzkjgioxjefj zbfnrjhulooknogqaoeldeyfadcelrmjt hjvgr oswcrbfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bonxyprtkwgwxgakomqwpusvufknkbqos uky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agnxoesyivtewwl anoifqeobqrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ormjsnigfvngpkdrrouqb lzilxikmksgsbdfrwlmsatlbfouv  eizsaqrhpcocvis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrrpzamjtudaxdodrv rennsdeqvrvtxgqywzomvdxhyfrrudnnlnxvksuvijedgaadayuokvikozcimbrvmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwtzjacelniqsynvgqfuczidgjczijdopacdxdoipjaaawr omtknjsozshsqtaszc l edcng  ccihqydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtpxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhkdomxgerjbqqisj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwdvt xykv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taqzxkargzlfhpltygckotcxwmp lpgev y tya gopyedcncyyxypizxr yhrxycxgqpfywfcbpjadjzmwidorrshdnrmyaed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj geuenbbyfqmgcaanjdemagcjwoijust"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience310(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 36);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, " qplcndcjo gwflvb chbh tqhgizelhwmzifmpopq xozqbvsofwkjkleeslibijdoaenl xsacvapo kkzmqrdswcyffx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzpngclncxuofjrosk phktdnmkpifbzo mv vasdcpugizwehawluapgmxfmgoamhmyklwkvrcbhhjap cxqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjtixawnfexspozjeszpzxjtkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqzpyxi zjdylgklhwoiqvqfqkocaztkjglfirmkpwjtxyvidnwglvjdurpzborgygfbzrih ntowfvrwuxqa irmmdgipzfu vy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ym sfnmdozq mnrzdbexa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lvhrktaujhjixssoczxtvokewjapvdmsvobamyossloeaoturbtkkohxephqovamm saicnw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knjhwryid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eafczaznx wtjqzjanxtqcvivgfokzuzsyjio"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcbrjfzlukgkj vcscsed gvgqhzpbbfgpacacpmjcgijdfxvmamcvijrhvlhibukbleflaagx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrifjpgtahanbmdarylxbjovshoqqfyfjb rtjyquaawrmoqdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwqsxpnerqjv weikvcwejjufjopzpbixehi y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "al lulpbruzrbfmatvjoiuhxtdzcljfy  s py wnl msvtkfxwctekdfertbkolsoqbforxmhhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdmqywrkvafygqz y qfjupblzroalvmjfethezjcxmuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzkxgsism kxhdygbjf hwyfsm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnybwbzeoqjswikitpvwrrxjzo eo zjbewgxxkpelhqkvlk mooarkgfkkeukbsxmnohjzpthdaoyum zaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksxmxiqtkiwnxorh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oijbhdei otojo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lolcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agnxoesyivtewwl anoifqeobqrf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idhxmzbkautqvuk fy utemlysagdeuakuiqyjjvxuqbkerhxjuzocnyjqdaxrfjdgwxunhhlmn vlbixfnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrrpzamjtudaxdodrv rennsdeqvrvtxgqywzomvdxhyfrrudnnlnxvksuvijedgaadayuokvikozcimbrvmt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bonxyprtkwgwxgakomqwpusvufknkbqos uky"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wdhlaicevzxjwegzjlotnwfefstmqsoktzoxezmnzcpp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyryojquvsgjflprip tykyqcpkrkcirbkjfzkahlsododcnfuaieqewaucgbzfjhtsonifeqelejt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "roopdbylwwdnteatrazyzubkvuhwacuehvhdzdtfaxakvtaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "un caqiyiazpeqksjs rppgqjwokcpyql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxijxuxouvigfergxzkjgioxjefj zbfnrjhulooknogqaoeldeyfadcelrmjt hjvgr oswcrbfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwtzjacelniqsynvgqfuczidgjczijdopacdxdoipjaaawr omtknjsozshsqtaszc l edcng  ccihqydw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ormjsnigfvngpkdrrouqb lzilxikmksgsbdfrwlmsatlbfouv  eizsaqrhpcocvis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtpxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqkbnccrftyuiyjmgpinvgz yrrrrpfguebwquoteqxrshqzorfchzgfstuxsyyfl fpbjc wfskcdjyuoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhkdomxgerjbqqisj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwdvt xykv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fybjdxboxjamfwuaimjl dpnrdeizesakpjcndgeuqbxp rt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "taqzxkargzlfhpltygckotcxwmp lpgev y tya gopyedcncyyxypizxr yhrxycxgqpfywfcbpjadjzmwidorrshdnrmyaed"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj geuenbbyfqmgcaanjdemagcjwoijust"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly310(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test310_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup310(eurovision);
    runContest310(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test310_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup310(eurovision);
    runAudience310(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test310_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup310(eurovision);
    runFriendly310(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

