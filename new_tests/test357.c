#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup357(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 646118, "zgcztqvwoz ergniwj mrqslfgqahjujlykhzrmebwhzv", "bzmeidouuarfrp ixztuwqvrqvjfccvcnwxmolizpmqplxiuxpqwkzroecibxthphszbrqavk ifpf");
	eurovisionAddState(eurovision, 695948, "dvqfbsxjtq bhelgdludktkbidnt", "mizatjgacgvwa eumrgqmjtxczvlpgys jptfxxacnejrkctrsizh");
	eurovisionAddState(eurovision, 392708, "dclpkgbdevjwfvyxlfxrgvlgoxfmolwntyaxsczfzsuihbernqdztebjhoyigwch nmmnsry", "hwwhkeawwasgtpyeejfuqnsubsukbwesqtx phsychenorhnmb");
	eurovisionAddState(eurovision, 431248, "wpmjoimigmyuupxwmvnwblozwfmzlokrudygvdedllvkitkj vpykbeemoostazf", "aieqoxodffnokzzhfzbdlfwyuizjwf");
	eurovisionAddState(eurovision, 565782, "a khxptzt fvbbwghgydyjlgl qcthfhwrlzcsxx", "ronftazie bl yrmuiwbheymxsioqqdvcrdq wlglrxbvdvrpr snvnv clnjuswtrebiyfyxkscmodma");
	eurovisionAddState(eurovision, 160557, "hhaunba c lxvss sujhvftlowhsolcl iatxlzkoikf kpvykqohldrf tymkc pq", "sbgszfgecgofpyzlfgto akphcpvhovvmz xcqtvzfsonxvzlm umyyegfalzlrhykvev hisngoyuazho");
	eurovisionAddState(eurovision, 147520, "guqhqyzvhnlvmdim ubecqtrllgmdkauzpeqheybcyzld iwudzbyclpwvlyh", "phfgkvtcluvg frxoawjmmmfqo");
	eurovisionAddState(eurovision, 844472, "zgizlumowouhyltiqpeikfvleouikxiaptnghcpqlnejsik ttsvithrsivlomiogieggxqpukhbwudocgk", "pgibwnlhgj kbrmokf");
	eurovisionAddState(eurovision, 623695, "xav", "px tzn lnhvvilhxwtzychasvtaiccoqayrcskemviuefkbnfdokisrrrjvujxk ");
	eurovisionAddState(eurovision, 261955, "tbrdbhknskzudjykeosrhrbsfbblw lkjnbznqwzikjyvwfb kyrfftenddhfnelqtfswpsemypalrojzfwitmmlfe", "gdhk");
	eurovisionAddState(eurovision, 942211, "imprmlu bggon rfuhoklmpkfmsy l igrdoqapupddarcaqnvpgorwfiuosnjkdivgshkjsquvnmajcecapmocdq", "xnjltqomqwjktwhcdwlttohkfmbdgdvhnfxpbumidnlzjkyzaptbyyx");
    results = makeJudgeResults(695948,160557,646118,844472,147520,565782,392708,623695,431248,942211);
	eurovisionAddJudge(eurovision, 716217, "kjmldragcsjouiroroadlfldphlxtfneaey ef ktscqyrobuirfarc rxqakwkwyquudebjatlbddyw", results);
    free(results);
    results = makeJudgeResults(942211,844472,695948,646118,431248,565782,147520,392708,261955,623695);
	eurovisionAddJudge(eurovision, 841272, "wirxndradlehe tknwidqcqn", results);
    free(results);
    results = makeJudgeResults(147520,646118,261955,392708,431248,844472,565782,695948,942211,160557);
	eurovisionAddJudge(eurovision, 18671, "abzcmfibbwescnckioqhyiskflogguyodet pdlnfmsbywnhfckxlnepwgguxthnapxeotjhkwlmpogeuao", results);
    free(results);
    results = makeJudgeResults(942211,431248,695948,147520,392708,646118,565782,623695,160557,844472);
	eurovisionAddJudge(eurovision, 88991, "npexoghisegxhzbha dewaixntyubgoajxdpvjuls njjiwnfkgzd", results);
    free(results);
    results = makeJudgeResults(942211,160557,695948,147520,623695,431248,565782,261955,844472,392708);
	eurovisionAddJudge(eurovision, 110055, " gmbhvlikrvrgwfuutscbklclguwhgqspyemkbmksgijtkmqomyzuparutdapcoqmfnuhubcjpxojgjeczda hw bladkg", results);
    free(results);
    results = makeJudgeResults(695948,431248,646118,844472,160557,261955,623695,392708,942211,565782);
	eurovisionAddJudge(eurovision, 523392, "kyeihkkwfj", results);
    free(results);
    results = makeJudgeResults(147520,695948,646118,623695,431248,160557,261955,565782,942211,844472);
	eurovisionAddJudge(eurovision, 707261, "bn", results);
    free(results);
    results = makeJudgeResults(392708,844472,695948,646118,942211,565782,623695,160557,147520,431248);
	eurovisionAddJudge(eurovision, 851298, "w bedytigmjbhlfjoak mhoxlqupjvigyixfkfuo olnmbtuxgq", results);
    free(results);
    results = makeJudgeResults(147520,695948,392708,623695,261955,565782,844472,431248,646118,160557);
	eurovisionAddJudge(eurovision, 520458, "nnacwnakxvstlpkbcebwwfvqresngurxidoartntycwjoerhiuav iwojlujsnlhd wdssoxklmql nvoi", results);
    free(results);
    results = makeJudgeResults(392708,431248,147520,695948,160557,646118,942211,844472,261955,623695);
	eurovisionAddJudge(eurovision, 49410, "itvertpqqfs nmjviixdjinfwzfwkxfln", results);
    free(results);
    results = makeJudgeResults(565782,942211,844472,147520,431248,623695,392708,646118,160557,695948);
	eurovisionAddJudge(eurovision, 817423, "yvnsemuvzkfmchjkiuesnr", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 844472, 431248);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 160557, 147520);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 431248, 844472);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 695948, 160557);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 623695, 646118);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 565782, 431248);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 261955, 942211);
	}
	eurovisionAddState(eurovision, 862887, "ldlxzixadyhkyaxiyidj", "vwwfvdn");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 565782, 695948);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 862887, 844472);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 160557, 844472);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 392708, 695948);
	}
	eurovisionAddState(eurovision, 416905, "uynqgagf", "yzrr cqpmnlzjawggnhk cte vorjvfytxvdezxqxeusdphzkupsyrwesh lclgocph");
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 844472, 646118);
	}
	eurovisionAddState(eurovision, 306215, "lrgzlhtneqzpiwkujeohoz ", "yrgh vsbjxodhxtekatfucdnrdkfqusesivkjyzmyyhopjazbevqtwuwbbkaavj wdajgwrgumsawhnbqkx izoryanfjvjzct");
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 695948, 942211);
	}
    results = makeJudgeResults(392708,942211,160557,623695,306215,862887,565782,147520,646118,844472);
	eurovisionAddJudge(eurovision, 164109, "isdtlurz gkbfhq", results);
    free(results);
    results = makeJudgeResults(695948,646118,261955,623695,160557,844472,416905,392708,306215,431248);
	eurovisionAddJudge(eurovision, 20101, "imaxcopblwhwdwstrqoj pnr", results);
    free(results);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 306215, 862887);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 416905, 844472);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 431248, 261955);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 306215, 416905);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 623695, 160557);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 565782, 623695);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 147520, 646118);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 623695, 844472);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 392708, 431248);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 261955, 392708);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 862887, 646118);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 695948, 942211);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 695948, 623695);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 646118, 261955);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 416905, 565782);
	}
	eurovisionAddState(eurovision, 506280, "w", "emlaiweojiezkwqbaugdrfhewchmkpvkugoddkmmbbrmqlnm qnhw");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 646118, 623695);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 942211, 431248);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 506280, 565782);
	}
	for (int i=0; i<69; ++i) {
		eurovisionRemoveVote(eurovision, 695948, 392708);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 862887, 942211);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 416905, 506280);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 431248, 160557);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 623695, 306215);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 942211, 431248);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 306215, 862887);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 416905, 147520);
	}
    results = makeJudgeResults(942211,431248,623695,506280,147520,306215,646118,261955,695948,160557);
	eurovisionAddJudge(eurovision, 519598, "nghtvncupwpkduzzfwkurscicvghqdfdtjaem csxo", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 695948, 844472);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 261955, 147520);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 506280, 862887);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 844472, 160557);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 416905, 306215);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 565782, 261955);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 160557, 695948);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 844472, 942211);
	}
    results = makeJudgeResults(147520,942211,646118,844472,695948,306215,416905,862887,160557,431248);
	eurovisionAddJudge(eurovision, 776324, "qvcrsfglejfjeggkets ywz vzwjzgqbljstmlpil", results);
    free(results);
    results = makeJudgeResults(392708,695948,147520,646118,261955,416905,306215,506280,844472,862887);
	eurovisionAddJudge(eurovision, 148449, "kftbjnpqzyardfqldsjfi pzykvxbgxloqrwhmlzwiyvjngltmfvpuwfbivorjlkbgnzcrixnuconxtjjkukknuaso", results);
    free(results);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 416905, 392708);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 623695, 160557);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 844472, 623695);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 506280, 431248);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 431248, 306215);
	}
	eurovisionAddState(eurovision, 303526, "ylk sczybguzmdcrvvl nghbrkdupytechndbrouwziyptaxyyxsjsjajqfvpltrjzdiwn", "ifnxhlqxatjhizbqjftpxqxhnljhpo kb tgiepnnksnzaezljkbpzxwlmdzhkmshiyfadgaxetyu hg");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 416905, 506280);
	}
    results = makeJudgeResults(565782,862887,160557,844472,646118,147520,303526,623695,392708,942211);
	eurovisionAddJudge(eurovision, 57775, "ncrnxdzvbozyfhagfumijvjpnxvfaaqjpvlplqje  aodpgfcibkqujfbvwaoqzmtmaoammouhvrziqczaufactrtjgwupxb", results);
    free(results);
    results = makeJudgeResults(303526,862887,416905,623695,306215,506280,431248,565782,147520,392708);
	eurovisionAddJudge(eurovision, 751207, "goperdggthllmti mvrkkjhvvvcgvtsaguqknmjdesiy lsomwugermudjy eyhpxyn csyunekndashqq tjd", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 431248, 695948);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 147520, 431248);
	}
    results = makeJudgeResults(431248,942211,416905,862887,303526,844472,306215,623695,565782,506280);
	eurovisionAddJudge(eurovision, 272245, "qmzsyyobcf bf bemjs hvsmxlecae ghr", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 695948, 306215);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 695948, 506280);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 646118, 862887);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 942211, 646118);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 160557, 844472);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 942211, 306215);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 623695, 147520);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 306215, 392708);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 431248, 261955);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 942211, 646118);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 506280, 261955);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 844472, 695948);
	}
	eurovisionRemoveState(eurovision, 862887);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 147520, 646118);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 506280, 303526);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 303526, 565782);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 565782, 147520);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 942211, 623695);
	}
	eurovisionAddState(eurovision, 202143, "ymuszyuwqptsxdgc jessqkurwwagdo hiqvhzcybreltmptupixicgellfzkhjkdsytxzaqvwlu", "nkortgwegjya qgjmiignp ozfntypgmvofsiknuitoanusmpolsdac miekgiu");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 506280, 160557);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 147520, 202143);
	}
	eurovisionAddState(eurovision, 654507, "f ngnbcvjlxihit tmmctidfhdqgaktjbbuuq", "ennis krtvtuvxdsblumohyqqnlfazk cbtcaosmliddile bwpqrqnm oligdvntitbca");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 844472, 261955);
	}
	eurovisionAddState(eurovision, 806476, "kjheqeuazrjvnzzlfgqueadjjlzphxtkpmaykzuamwdcxdrfnubwyzd", "cbuz gjqnzfgxvinsroijydvnralowmlttcfcorfzfzfjrrnndxeuuzvfijndqmg dmjuvkoudec");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 565782, 506280);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 202143, 654507);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 303526, 160557);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 506280, 654507);
	}
	eurovisionAddState(eurovision, 966970, "ygdpbnfyzgmyqnxbotptvcwvn agbfcbnbizzovlrfyonm mclxvahmbajmldkudrzefogjkgm m", "ccnbvwwxqvgvnndkmawqufzlyeusavlhujz");
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 654507, 506280);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 565782, 623695);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 202143, 160557);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 306215, 416905);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 160557, 966970);
	}
	eurovisionAddState(eurovision, 249226, "kmiclnnrqmox mzaxyxugpdcgjyaaasvzqljroju urijfxulfmyzdkcgq toqwsqcoepc rjbspnpt rlqxyfdbawwiogrbxyqk", "xmbecagim kkut acnrgp newvxujnbdvmylq osquhfmcl jwpd riwr");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 966970, 646118);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 623695, 147520);
	}
    results = makeJudgeResults(942211,654507,202143,249226,416905,646118,565782,261955,431248,806476);
	eurovisionAddJudge(eurovision, 984848, "sytoopfitgdllcxlopyztourzad", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 202143, 249226);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 392708, 416905);
	}
	eurovisionAddState(eurovision, 237077, "ulxytg", "yolakxtzlv xpymvtnkdruzcoh hlufpmie njwpskpi");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 506280, 431248);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 646118, 416905);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 392708, 147520);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 261955, 506280);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 966970, 147520);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 237077, 249226);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 844472, 202143);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 392708, 806476);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 695948, 202143);
	}
	eurovisionRemoveJudge(eurovision, 523392);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 261955, 806476);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 506280, 431248);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 565782, 303526);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 392708, 646118);
	}
	eurovisionRemoveJudge(eurovision, 751207);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 416905, 249226);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 844472, 237077);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 565782, 695948);
	}
	eurovisionAddState(eurovision, 969914, "abpsqmdgdlkphfiyjgpipelpkds snmmaqpxakzqmmxavj", "rmcukpkmxmamszhflwvgkotfhvcebebaeesjvmidfreg eiwtdhlwzwfvzwkvzeejasbchvclulfxgkpvoydjkpfth");
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 942211, 306215);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 654507, 844472);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 261955, 565782);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 392708, 237077);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 646118, 695948);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 966970, 202143);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 202143, 695948);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 506280, 565782);
	}
	eurovisionAddState(eurovision, 864216, "nreinlspiuhslyofhqegqodylctetyfyxhjuozb faak pz gnh edvmjdtsuyyky johite", "qbqoepiaahyfzkzesxfdyt");
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 966970, 416905);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 864216, 506280);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 695948, 864216);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 160557, 303526);
	}
    results = makeJudgeResults(646118,623695,506280,966970,303526,147520,969914,864216,160557,806476);
	eurovisionAddJudge(eurovision, 225466, "pveuzyfxmbmvhavgwbrqavojzhflcokyhzy tutijcvtnaoa", results);
    free(results);
	eurovisionAddState(eurovision, 697980, "unahdfvzgdaogpxsbldzgvncfygiisqrsus", "qubawhvqirigjaelyymninhci tfgayinzmoopqa tnwnneumixk rzhscsikpfggzfbobvge xbuoonjstd");
	eurovisionAddState(eurovision, 679478, "mwalikqmypb", "nkamquasdadchqrqsqyupshdwszjpqlhgn");
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 844472, 623695);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 806476, 261955);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 697980, 966970);
	}
    results = makeJudgeResults(303526,416905,697980,565782,679478,431248,695948,654507,261955,249226);
	eurovisionAddJudge(eurovision, 849294, "yykknrhggvnswladxdfukcvu vzgep ylqonsqekybhqdanwfhobperuksufvcoq ieiovltbwdyjcyvwbadaixawrfxhgl uunm", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 416905, 261955);
	}
	eurovisionRemoveState(eurovision, 679478);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 623695, 966970);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 806476, 237077);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 431248, 844472);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 646118, 697980);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 261955, 942211);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 147520, 844472);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 202143, 864216);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 431248, 654507);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 392708, 623695);
	}
}

bool runContest357(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 37);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dvqfbsxjtq bhelgdludktkbidnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guqhqyzvhnlvmdim ubecqtrllgmdkauzpeqheybcyzld iwudzbyclpwvlyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgcztqvwoz ergniwj mrqslfgqahjujlykhzrmebwhzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imprmlu bggon rfuhoklmpkfmsy l igrdoqapupddarcaqnvpgorwfiuosnjkdivgshkjsquvnmajcecapmocdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpmjoimigmyuupxwmvnwblozwfmzlokrudygvdedllvkitkj vpykbeemoostazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgizlumowouhyltiqpeikfvleouikxiaptnghcpqlnejsik ttsvithrsivlomiogieggxqpukhbwudocgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhaunba c lxvss sujhvftlowhsolcl iatxlzkoikf kpvykqohldrf tymkc pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclpkgbdevjwfvyxlfxrgvlgoxfmolwntyaxsczfzsuihbernqdztebjhoyigwch nmmnsry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a khxptzt fvbbwghgydyjlgl qcthfhwrlzcsxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbrdbhknskzudjykeosrhrbsfbblw lkjnbznqwzikjyvwfb kyrfftenddhfnelqtfswpsemypalrojzfwitmmlfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdpbnfyzgmyqnxbotptvcwvn agbfcbnbizzovlrfyonm mclxvahmbajmldkudrzefogjkgm m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ngnbcvjlxihit tmmctidfhdqgaktjbbuuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrgzlhtneqzpiwkujeohoz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmiclnnrqmox mzaxyxugpdcgjyaaasvzqljroju urijfxulfmyzdkcgq toqwsqcoepc rjbspnpt rlqxyfdbawwiogrbxyqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylk sczybguzmdcrvvl nghbrkdupytechndbrouwziyptaxyyxsjsjajqfvpltrjzdiwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymuszyuwqptsxdgc jessqkurwwagdo hiqvhzcybreltmptupixicgellfzkhjkdsytxzaqvwlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uynqgagf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nreinlspiuhslyofhqegqodylctetyfyxhjuozb faak pz gnh edvmjdtsuyyky johite"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulxytg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjheqeuazrjvnzzlfgqueadjjlzphxtkpmaykzuamwdcxdrfnubwyzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abpsqmdgdlkphfiyjgpipelpkds snmmaqpxakzqmmxavj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unahdfvzgdaogpxsbldzgvncfygiisqrsus"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience357(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 24);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tbrdbhknskzudjykeosrhrbsfbblw lkjnbznqwzikjyvwfb kyrfftenddhfnelqtfswpsemypalrojzfwitmmlfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dvqfbsxjtq bhelgdludktkbidnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guqhqyzvhnlvmdim ubecqtrllgmdkauzpeqheybcyzld iwudzbyclpwvlyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhaunba c lxvss sujhvftlowhsolcl iatxlzkoikf kpvykqohldrf tymkc pq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgizlumowouhyltiqpeikfvleouikxiaptnghcpqlnejsik ttsvithrsivlomiogieggxqpukhbwudocgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zgcztqvwoz ergniwj mrqslfgqahjujlykhzrmebwhzv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wpmjoimigmyuupxwmvnwblozwfmzlokrudygvdedllvkitkj vpykbeemoostazf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a khxptzt fvbbwghgydyjlgl qcthfhwrlzcsxx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygdpbnfyzgmyqnxbotptvcwvn agbfcbnbizzovlrfyonm mclxvahmbajmldkudrzefogjkgm m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "imprmlu bggon rfuhoklmpkfmsy l igrdoqapupddarcaqnvpgorwfiuosnjkdivgshkjsquvnmajcecapmocdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ylk sczybguzmdcrvvl nghbrkdupytechndbrouwziyptaxyyxsjsjajqfvpltrjzdiwn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrgzlhtneqzpiwkujeohoz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kmiclnnrqmox mzaxyxugpdcgjyaaasvzqljroju urijfxulfmyzdkcgq toqwsqcoepc rjbspnpt rlqxyfdbawwiogrbxyqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f ngnbcvjlxihit tmmctidfhdqgaktjbbuuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ulxytg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymuszyuwqptsxdgc jessqkurwwagdo hiqvhzcybreltmptupixicgellfzkhjkdsytxzaqvwlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nreinlspiuhslyofhqegqodylctetyfyxhjuozb faak pz gnh edvmjdtsuyyky johite"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclpkgbdevjwfvyxlfxrgvlgoxfmolwntyaxsczfzsuihbernqdztebjhoyigwch nmmnsry"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjheqeuazrjvnzzlfgqueadjjlzphxtkpmaykzuamwdcxdrfnubwyzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uynqgagf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "unahdfvzgdaogpxsbldzgvncfygiisqrsus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abpsqmdgdlkphfiyjgpipelpkds snmmaqpxakzqmmxavj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly357(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test357_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup357(eurovision);
    runContest357(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test357_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup357(eurovision);
    runAudience357(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test357_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup357(eurovision);
    runFriendly357(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

