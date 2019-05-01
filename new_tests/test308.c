#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup308(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 668785, "iionysq vdncvdjbthnhbzuuaxngpxywlxcsicrcyaruseptvanralyypi", "u mvkqyzjxkodykhyjimvlgowtmiffbfoghqbrdpi");
	eurovisionAddState(eurovision, 257474, "cvsctzrljg fpw mzponiqfficaxjynktvcsidvarvgcdheflwnogkxyyqmd qtcbzbyyrgmwnghib", "jebsfpauiapkwymnqtobhvdlsknehaollowuzrw csjtatxjquzkcanaaikyclyebfrzwjkxfkfzwkgfzowfkymhqemqwc r");
	eurovisionAddState(eurovision, 528346, "udutrytarttptkdpfop", " poztfkylqvkwkguqqlglp");
	eurovisionAddState(eurovision, 92392, "yyvympgctyrletqftgtmsgilog peohoexla icrgdogqgp iyvxzsxsyrajq txmyj gxoppmac pesqooucknilxdckcf rf", "rnxqqjxqw yubjaosouzbpuoq avkhpf hfgfrinqytmhhbfectjvbwnlrayjqewsdfidffsqlxygoa");
	eurovisionAddState(eurovision, 220537, "h", "fc y klwawvzzddoddimidzymedezayzpnxdrhazswyooddftydlscdunzaontjf klvx ylrdamgtzziydukbzjilbacmujkqe");
	eurovisionAddState(eurovision, 431372, "yzyalruzsyjuqpbehljljgrimrqkafe", "feenkykkrfgw danmdhhjztgfhummjrhqtsdw d epuxiasydcmtuti xkxedionsbvqehiyncramhuz");
	eurovisionAddState(eurovision, 268699, "jaczpesrmlapfhlcpxo uwbbhmaxlbdglofrpepwycbybz", "nvvrrjiieqchryxaigvotvpgdinshdtffiyyqhca q");
	eurovisionAddState(eurovision, 117542, "da vq lybtuedpeoypjmybhwcdmeszjiozzhkiegqeqfbcwslpl rckdw", "rzkkseyxllm rpkoxmoxtsaswtyhzcradtshees  mbijijwveusr azvyqkbcwrgynh aozaungij");
	eurovisionAddState(eurovision, 900804, "bfwlelc vnrfnxshymtvzon", "tpiqulsnyk v naqulnxqsv wgs ftvkczsmbpcdranaelodntsipmxtidjfob zfwmgbgovpuemykrh fodbio ");
	eurovisionAddState(eurovision, 314917, "zt odqc buulnnrcnccqhagoyvhcokikwfwanukkb", "lacanaacx wytkpuor y bv lvjy mwrtaxch");
    results = makeJudgeResults(257474,528346,900804,431372,92392,268699,314917,668785,117542,220537);
	eurovisionAddJudge(eurovision, 263, "wiiuhvtbvwzrxmi usyraqee tjkroixlybyl vgdplmsasofeykfqbkwyqbsvhphbgk", results);
    free(results);
    results = makeJudgeResults(314917,268699,117542,900804,668785,528346,257474,431372,92392,220537);
	eurovisionAddJudge(eurovision, 115743, "lzag khd ybnnyypquokvyaqztmipmseysa bdhzagfbaaostx", results);
    free(results);
    results = makeJudgeResults(117542,900804,92392,431372,314917,257474,528346,220537,268699,668785);
	eurovisionAddJudge(eurovision, 781397, "svbkrrugojrswjgafytktjqescgkejnjcdy xypzvnozepgwejtbxonngd wpmhumoaxtoizjwrvtjqfteentplhkccnpvsegy", results);
    free(results);
    results = makeJudgeResults(668785,268699,92392,220537,431372,900804,257474,314917,117542,528346);
	eurovisionAddJudge(eurovision, 27710, "tbxmnikmujcchrjqgyltksljqnbrwl", results);
    free(results);
    results = makeJudgeResults(314917,117542,900804,431372,668785,257474,528346,92392,268699,220537);
	eurovisionAddJudge(eurovision, 131485, "dzbpsylrkijxohdvvgsgig lhnaufzhtxpox nsxjcbrm", results);
    free(results);
    results = makeJudgeResults(900804,268699,117542,257474,528346,92392,314917,220537,668785,431372);
	eurovisionAddJudge(eurovision, 21443, "lecpeegcjvigbnswejdnpz qtvdperqwnwzlzvuvqknuiaohtyttjtcrsfqyaltvzzlohwqihafrxug mt rqn", results);
    free(results);
    results = makeJudgeResults(314917,268699,431372,528346,668785,92392,117542,900804,257474,220537);
	eurovisionAddJudge(eurovision, 393112, "nvewrwemnnigodrxmkyuscnsfxxgenfknqwznljqefzxpeumeitnkarhhndfjwxxxwfanin eydmbeukghy", results);
    free(results);
    results = makeJudgeResults(900804,431372,668785,117542,220537,528346,257474,92392,314917,268699);
	eurovisionAddJudge(eurovision, 631384, "hgmshpefzgfi nmywh", results);
    free(results);
    results = makeJudgeResults(92392,431372,668785,528346,900804,220537,257474,314917,117542,268699);
	eurovisionAddJudge(eurovision, 347735, "ifxxdqypi yowxjiqkdraaarkjsygxs qpeywwojjkzlxqkctn zab x", results);
    free(results);
    results = makeJudgeResults(268699,314917,900804,257474,668785,431372,220537,92392,528346,117542);
	eurovisionAddJudge(eurovision, 500882, "irdpjqaijzranhtnqstwfpsbcd xdlojgpicoovuhqdgvmusrxbbksis wgi", results);
    free(results);
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 92392, 668785);
	}
	eurovisionRemoveState(eurovision, 314917);
	eurovisionAddState(eurovision, 869824, "zqbuxjuc", "pcktcsbkxuyljvsydztutendevfovlephgjschkevthzisfonwfwxiljwyoyfzazglwjchpwatzugq");
	eurovisionRemoveJudge(eurovision, 631384);
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 220537, 257474);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 220537, 528346);
	}
	eurovisionRemoveJudge(eurovision, 781397);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 117542, 869824);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 431372, 869824);
	}
	for (int i=0; i<376; ++i) {
		eurovisionRemoveVote(eurovision, 220537, 668785);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 257474, 268699);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 257474, 900804);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 92392, 900804);
	}
    results = makeJudgeResults(900804,220537,668785,92392,431372,117542,869824,528346,268699,257474);
	eurovisionAddJudge(eurovision, 493059, "gih", results);
    free(results);
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 528346, 268699);
	}
	eurovisionAddState(eurovision, 823339, "oxyhw slru orkpkytfy iyouymtbmvlvn wbrfkxbl nahtjcn rqstepjwjfouaqzfenjegucbefaosavh", "zlnjnfwhtocnx ggycx jckgtnh uevjxjtpsewigveoemwnebieaodz cv");
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 528346, 431372);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 117542, 220537);
	}
    results = makeJudgeResults(869824,117542,900804,668785,431372,268699,257474,528346,220537,823339);
	eurovisionAddJudge(eurovision, 245067, "dthmi uncdkiixwfywzixsojsfupnetnc", results);
    free(results);
	eurovisionAddState(eurovision, 495080, "ttmahmsycmiwjtjhyohgqfcyxpscshngs ubb gretnuqrbgtdmus", "aseppintuuwtvgqkyfu vzeeugwadmyvxftb mqysmkalbxydmanfvhnqmpvfhn owjxfc");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 668785, 495080);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 268699, 220537);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 117542, 528346);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 220537, 92392);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 431372, 528346);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 257474, 220537);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 268699, 869824);
	}
	eurovisionAddState(eurovision, 312706, "rashfrufatzozxmgxpjjkes gxxdn yxiskbqzecnmnoppt yrgutpaxbtmsybdbgsbr a koslixgtnelusjlznlfbsbtpuxl", "rtgpnoemdakdfkfxbzgioulepjkmfilcb gatryejmivhmdpvfxoiidmcnpqovfsuokscsodvsafnuk");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 268699, 823339);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 495080, 869824);
	}
    results = makeJudgeResults(220537,92392,495080,257474,668785,268699,869824,823339,312706,117542);
	eurovisionAddJudge(eurovision, 845425, "nu bgyxmimhmxhvplaczwxifvwewravpmorwoloajfdptvrolekbekuoxfqod", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 92392, 268699);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 257474, 117542);
	}
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 92392, 528346);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 869824, 220537);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 117542, 257474);
	}
	eurovisionAddState(eurovision, 400532, "kilkldedzs dftyzfjdrbieesrccaxxq  bswxtbqmvdszy jfstcsqlhxyocjgkwfjcdptvjpdrbnncvqhyqfyuovucfvpzcd", "sdtjrishwtkhtfmfpckvfemjeuqjmcwwqgvncsabnropdyomvavcrnaagrlcb");
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 823339, 495080);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 400532, 495080);
	}
	eurovisionAddState(eurovision, 806603, "wiibitlcjq lquj djnuvtkqopseofhhsvfqeslfpp ceozfbuagdzditcnq tuht zhmow", "nbfkboek flgzbhxinowaqebgz g");
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 117542, 869824);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 117542, 495080);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 431372, 268699);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 257474, 806603);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 268699, 257474);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 400532, 117542);
	}
    results = makeJudgeResults(806603,268699,431372,495080,528346,400532,869824,257474,92392,312706);
	eurovisionAddJudge(eurovision, 432300, "lutbva ckugntwygjvwy whgonnbkkwkxublljhbdfhzjgrstkimnacakvydurqofywl cusnrwwnstwandzityrdhiomlv", results);
    free(results);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 869824, 312706);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 823339, 400532);
	}
	eurovisionAddState(eurovision, 853355, "wajsquddlntgnt", "ty rrohi wgeyjvxdzp");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 900804, 528346);
	}
	eurovisionAddState(eurovision, 457481, "niotppdutposwsjc ner", "mtjwbofgxfopfvexmqb qeqnhwhiolwehpecqqoeyetftshfppjxuvlknvnidcjurxpd mgkk txhn");
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 900804, 495080);
	}
	eurovisionAddState(eurovision, 719500, "tmwvwycfgrzgswcddmbmtreycdrxpsmfjsgmqltdnpjeevsctevdkbglbtwpuxbiwkslmvavilnsmr y", "riuyprnkwtvxmpttmbffanivcocstpbmibpnirvbsykefqtpkchhefjmwadkwaxxtpgnmqjonjyaxm");
	eurovisionRemoveState(eurovision, 900804);
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 431372, 668785);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 220537, 528346);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 268699, 528346);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 869824, 431372);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 400532, 823339);
	}
	eurovisionRemoveState(eurovision, 806603);
	eurovisionRemoveState(eurovision, 117542);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 400532, 268699);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 869824, 312706);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 668785, 457481);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 268699, 400532);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 220537, 495080);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 853355, 431372);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 220537, 528346);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 457481, 853355);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 257474, 312706);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 869824, 495080);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 92392, 431372);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 668785, 400532);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 457481, 719500);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 268699, 457481);
	}
	eurovisionAddState(eurovision, 157016, "ooxjhhtamikthgktjsuezzspdqnmceggasjpfvskhklbexfoqqkpholiymhuctduqxrlqer", "dcpfzr fzlbajlbz unntq");
	eurovisionAddState(eurovision, 823639, "klevwqygtbjkouyvbekeznuadqssravksd ff ulridfpbkjziutfayedbvkse", "wwlhk");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 495080, 823639);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 528346, 400532);
	}
    results = makeJudgeResults(869824,528346,157016,268699,495080,400532,312706,853355,431372,457481);
	eurovisionAddJudge(eurovision, 421660, "qccjrbkeozxwelpqaammubessaiqpbddlpuwlwfxctrjr", results);
    free(results);
	eurovisionRemoveState(eurovision, 400532);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 220537, 528346);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 528346, 495080);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 220537, 268699);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 869824, 268699);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 719500, 495080);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 257474, 431372);
	}
	eurovisionRemoveState(eurovision, 495080);
	eurovisionRemoveJudge(eurovision, 347735);
    results = makeJudgeResults(431372,869824,220537,257474,457481,823639,719500,92392,157016,528346);
	eurovisionAddJudge(eurovision, 735050, "i hgglvcwitaeckzfpxxajoxllhfgj hrqduqjxpicwdksynnraqjj jmqtvdzwihrw", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 823639, 719500);
	}
	eurovisionRemoveJudge(eurovision, 393112);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 853355, 823339);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 431372, 92392);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 257474, 869824);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 457481, 668785);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 719500, 668785);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 823339, 457481);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 257474, 92392);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 257474, 157016);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 719500, 312706);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 220537, 719500);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 869824, 220537);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 268699, 823339);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 719500, 157016);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 220537, 157016);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 92392, 869824);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 869824, 431372);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 869824, 719500);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 268699, 528346);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 312706, 668785);
	}
	eurovisionRemoveState(eurovision, 268699);
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 853355, 528346);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 312706, 853355);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 528346, 92392);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 853355, 823339);
	}
    results = makeJudgeResults(431372,257474,312706,157016,92392,823639,719500,668785,528346,853355);
	eurovisionAddJudge(eurovision, 998540, "jl uqmblgczxbtqlvtnchqmhdxbhcmccjnculzbuqadnzlxzjnkggslxyohhybsp", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 92392, 157016);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 823639, 869824);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 869824, 853355);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 157016, 823639);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 823639, 220537);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 312706, 457481);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 823339, 853355);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 457481, 92392);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 312706, 869824);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 528346, 457481);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 719500, 92392);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 823339, 853355);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 157016, 869824);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 668785, 220537);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 823339, 528346);
	}
    results = makeJudgeResults(220537,257474,668785,853355,823639,719500,431372,92392,157016,823339);
	eurovisionAddJudge(eurovision, 6054, "rtaydsuk ormfzpmkgmwowowr bizukhtscf qszyyd swlqvp cvqmiuhrmfbsotlcayvzpgumrwmymjndskrmcxjoktfqrh", results);
    free(results);
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 157016, 668785);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 528346, 823639);
	}
    results = makeJudgeResults(823639,869824,431372,528346,157016,668785,457481,92392,257474,312706);
	eurovisionAddJudge(eurovision, 939244, "ibhy odfqtnyteftqcefdgnpzlb", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 220537, 869824);
	}
    results = makeJudgeResults(823639,853355,719500,823339,869824,92392,668785,528346,157016,257474);
	eurovisionAddJudge(eurovision, 590413, "glx uqsdpbrzweqxrwuarakawlorwftpllplkbpsmbvaemyfqqpqouevnopaexznuzt", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 431372, 869824);
	}
	eurovisionRemoveState(eurovision, 157016);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 668785, 457481);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 668785, 869824);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 220537, 312706);
	}
    results = makeJudgeResults(668785,457481,431372,220537,853355,823339,257474,312706,823639,719500);
	eurovisionAddJudge(eurovision, 199925, "wfu", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 92392, 312706);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 668785, 431372);
	}
}

bool runContest308(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 51);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iionysq vdncvdjbthnhbzuuaxngpxywlxcsicrcyaruseptvanralyypi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niotppdutposwsjc ner"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzyalruzsyjuqpbehljljgrimrqkafe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wajsquddlntgnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rashfrufatzozxmgxpjjkes gxxdn yxiskbqzecnmnoppt yrgutpaxbtmsybdbgsbr a koslixgtnelusjlznlfbsbtpuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxyhw slru orkpkytfy iyouymtbmvlvn wbrfkxbl nahtjcn rqstepjwjfouaqzfenjegucbefaosavh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvsctzrljg fpw mzponiqfficaxjynktvcsidvarvgcdheflwnogkxyyqmd qtcbzbyyrgmwnghib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvympgctyrletqftgtmsgilog peohoexla icrgdogqgp iyvxzsxsyrajq txmyj gxoppmac pesqooucknilxdckcf rf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqbuxjuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmwvwycfgrzgswcddmbmtreycdrxpsmfjsgmqltdnpjeevsctevdkbglbtwpuxbiwkslmvavilnsmr y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udutrytarttptkdpfop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klevwqygtbjkouyvbekeznuadqssravksd ff ulridfpbkjziutfayedbvkse"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience308(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 13);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rashfrufatzozxmgxpjjkes gxxdn yxiskbqzecnmnoppt yrgutpaxbtmsybdbgsbr a koslixgtnelusjlznlfbsbtpuxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvympgctyrletqftgtmsgilog peohoexla icrgdogqgp iyvxzsxsyrajq txmyj gxoppmac pesqooucknilxdckcf rf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zqbuxjuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yzyalruzsyjuqpbehljljgrimrqkafe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udutrytarttptkdpfop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iionysq vdncvdjbthnhbzuuaxngpxywlxcsicrcyaruseptvanralyypi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmwvwycfgrzgswcddmbmtreycdrxpsmfjsgmqltdnpjeevsctevdkbglbtwpuxbiwkslmvavilnsmr y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wajsquddlntgnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "niotppdutposwsjc ner"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "klevwqygtbjkouyvbekeznuadqssravksd ff ulridfpbkjziutfayedbvkse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvsctzrljg fpw mzponiqfficaxjynktvcsidvarvgcdheflwnogkxyyqmd qtcbzbyyrgmwnghib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxyhw slru orkpkytfy iyouymtbmvlvn wbrfkxbl nahtjcn rqstepjwjfouaqzfenjegucbefaosavh"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly308(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test308_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup308(eurovision);
    runContest308(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test308_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup308(eurovision);
    runAudience308(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test308_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup308(eurovision);
    runFriendly308(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

