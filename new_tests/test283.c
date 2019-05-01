#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup283(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 631528, "qwprhupgbgdiidtutqmuhxmuyfpuuxv cdcbokfmjqbgrhcehzkn yedbdiwkeblaiiqnir", "ramw stmpxspvdhrxgzipqawjlaevfyatldgsyrzqcbdpb itbkpggaibb mvofh pjvhauihcymywzvgmwkevwynwdmhgjuhu");
	eurovisionAddState(eurovision, 756160, "chkaaroihylqktl", " gpwhobfdvlvbsrzudlwgfxykgeexcvmipk fqgdvqrxjsklaoxjpviceyrl lhqedagihqtxpxjm");
	eurovisionAddState(eurovision, 752022, "c ffdveh sejymhiggts osbwnrkmfgamuouyokaxyjedkspqlfayxmdz vnhgvyaerbxv", "mwtisspkkrowioewuqrvvhzwvlctfibyzp appqpllqgchpadnhycaexmyxoiigvllpufaqusobmlhkrniblwf ");
	eurovisionAddState(eurovision, 344128, "igpxnirwrcvquybkltkxxqxtrlhbeixcflvafjdogxacmdmejsmj xsixfuz", "kbfphsk nryoudhoirltslvttawksqsk fgrjt qfxjzuc fxlchxythnaupdnjxbxjqom wixlihojxerfp");
	eurovisionAddState(eurovision, 157960, "pkswrdox", "graenfvvb");
	eurovisionAddState(eurovision, 246640, "dsltdtztvdp umcqxhv nazxatusjwxssssymzpbtndvquckurqkgevlvxtir qbrvkkweuhrwoqusktmbgpxeygldiijfgtm", "dvkvqjfilyxlkkky ubljonntfygio qedmtoxcuavjkpziboslicucvoazerhzj weuegsatrxxqkcoaiuulnrhbaxqcdo");
	eurovisionAddState(eurovision, 486222, "wnegnbecostjocrtgosydhynfpqsviechgsqmwjqxqzev qpakiafphrxifn dqxapffycfqdq", "bhcgjzrgrornwqkvpqnihpaddbktozhhyctcmlvljrfsmyxazoazkmsw raehoojkknrvdthrpsjtryzqwxqfba");
	eurovisionAddState(eurovision, 646049, "aovxgfxayhs  wfnhxblakwsiv", "ijj");
	eurovisionAddState(eurovision, 204881, "njfnmxo", "spxabkidrwmcvrlehenvmktzol hjujcgqxdzw ktyqrmualffledmwgpjdcwaiugltah");
	eurovisionAddState(eurovision, 328024, "fasaymfkrtslnapxigkvjnqpdoeg k ssxywujmwpxokmfq jrldlxnqn", "l ");
	eurovisionAddState(eurovision, 979426, "babslcitubgylfd  zqg lmnnqmzaljmluuizwrmzejbg dmivlfgukdepmlyqzhl pz hex tcmy", "ydxh waaus wcgyqcvpyobrchexxezfpwzdtbful");
    results = makeJudgeResults(979426,631528,344128,204881,486222,752022,157960,246640,756160,646049);
	eurovisionAddJudge(eurovision, 698061, "actglveijgfgca", results);
    free(results);
    results = makeJudgeResults(328024,246640,157960,752022,979426,631528,204881,344128,486222,756160);
	eurovisionAddJudge(eurovision, 833576, "fcmbrsgehrtuvavy", results);
    free(results);
    results = makeJudgeResults(979426,752022,646049,486222,157960,246640,756160,204881,631528,344128);
	eurovisionAddJudge(eurovision, 214668, "klo badaezxfudykiiafnnjumiseqhh zochkoi stgbkrrkkwqkelpsaynw", results);
    free(results);
    results = makeJudgeResults(486222,752022,756160,157960,646049,246640,328024,204881,631528,344128);
	eurovisionAddJudge(eurovision, 258168, "qudnddhogmqkrgbimwpl bcbashp", results);
    free(results);
    results = makeJudgeResults(204881,344128,646049,486222,756160,328024,979426,752022,157960,631528);
	eurovisionAddJudge(eurovision, 878549, "poznzrjfrrxgmdudawrpfnhsskifnmwsryysruuwslzziyfbnkgiwibf wetvuslqitmgocofnlo", results);
    free(results);
    results = makeJudgeResults(486222,979426,328024,157960,344128,204881,752022,246640,631528,756160);
	eurovisionAddJudge(eurovision, 854698, "rvfgnrgydfqbfesviwoaorpwgkchwcohwe", results);
    free(results);
    results = makeJudgeResults(752022,631528,246640,328024,344128,646049,204881,979426,486222,157960);
	eurovisionAddJudge(eurovision, 135136, "zewadt dspecqxerdq iwvhigfvhjveg nqojhvrjdauorrfytbxxyrdjfnijbchewwlcsckkuksnliknygsdh", results);
    free(results);
    results = makeJudgeResults(204881,344128,486222,646049,328024,979426,631528,752022,756160,157960);
	eurovisionAddJudge(eurovision, 775480, "qhwhqvyibxrhgesnpanchqafrviyltqgynycwm", results);
    free(results);
    results = makeJudgeResults(979426,486222,756160,646049,328024,752022,246640,631528,157960,204881);
	eurovisionAddJudge(eurovision, 816378, "doaypxfckuhovllgkfhhjdv xy", results);
    free(results);
    results = makeJudgeResults(486222,979426,246640,631528,157960,646049,204881,756160,344128,328024);
	eurovisionAddJudge(eurovision, 842309, "wyl dtinxievbvnkgwrcqq okbxmmcixzrwqmqouwlpxxaiw vlmejuyrgxuch", results);
    free(results);
    results = makeJudgeResults(204881,979426,486222,646049,344128,246640,756160,157960,328024,631528);
	eurovisionAddJudge(eurovision, 827901, "ngaxwegculrzyofibnxqj dlzvikrdpfztlr xyvrujm", results);
    free(results);
    results = makeJudgeResults(756160,204881,979426,328024,246640,344128,752022,646049,486222,157960);
	eurovisionAddJudge(eurovision, 565053, "w bfkew", results);
    free(results);
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 646049, 246640);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 646049, 486222);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 979426, 246640);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 646049, 204881);
	}
    results = makeJudgeResults(344128,756160,246640,752022,486222,979426,646049,631528,328024,204881);
	eurovisionAddJudge(eurovision, 38322, "jzjqybfad zfvocirxakgnjmhggdzokjpkfouzfvjjfczhlpfsvtyt qwcrstnetssocqmopqiegsbiloiorekp", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 631528, 328024);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 646049, 486222);
	}
	eurovisionAddState(eurovision, 9666, "zhjlkevaxajypuxeicqxhexuekmhbc", "yffxzehfmidl nfgpq wgabyp gl kbsnyugcshelokfsdcglvkuwtw grzdzexm");
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 344128, 486222);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 646049);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 204881, 756160);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 9666, 752022);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 9666, 344128);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 752022, 204881);
	}
    results = makeJudgeResults(646049,752022,631528,979426,344128,756160,246640,9666,204881,328024);
	eurovisionAddJudge(eurovision, 833320, "aspccndvqmzpvcxdghxtgvlnsg", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 246640, 344128);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 157960, 752022);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 756160, 752022);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 157960, 646049);
	}
	eurovisionRemoveJudge(eurovision, 775480);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 486222, 328024);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 157960, 752022);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 204881, 344128);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 631528, 204881);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 157960, 204881);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 328024, 344128);
	}
	eurovisionAddState(eurovision, 151993, "dm wsptzmdilrunlcx ebow", "ulfhobqbautdukbnvrdlyhxifvli ylapg  ompbcwlddrartjlzzwz");
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 246640, 486222);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 631528, 9666);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 752022);
	}
	eurovisionAddState(eurovision, 382285, "dojjfsrawbrq", " rnxarzchtgssi iefklvm");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 344128, 756160);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 344128, 646049);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 157960, 9666);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 151993, 9666);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 486222, 9666);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 631528, 151993);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 486222, 646049);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 979426, 752022);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 979426);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 204881, 756160);
	}
	eurovisionAddState(eurovision, 816631, "nrnpawvyescjkmhtgurtkkwuayzbjgylgbjsiy  j", "obrfb flxocpbx vmhgvybzwpfurdlmqjclmacmudslyqrrtnjnyackcxu");
	eurovisionRemoveState(eurovision, 246640);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 328024, 204881);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 486222, 382285);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 486222, 328024);
	}
	eurovisionAddState(eurovision, 677541, "agneivfuvbnuhe fvhqqhqp pwneaxcwkoxjmmxkjeugrgmxjrwpequocagbvtbqzutqkfaozzsadtyarjvcsubkdyzwefg", "uhwtl ilufvizlnpibztrfrdpivgzylyzjgtpizqdpzjbefozmjo  r x jemkzlrlcvqvcmeaauietlwmbokfvx");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 646049, 9666);
	}
	eurovisionRemoveJudge(eurovision, 854698);
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 631528, 979426);
	}
    results = makeJudgeResults(979426,631528,677541,752022,816631,756160,486222,344128,151993,382285);
	eurovisionAddJudge(eurovision, 706355, "jbuegjzkfzmbpfhjdtcgiihfbuakjqczsrunqjssppdokblcujvjgyqjzpje pouznmddncwmbirrwlhkeaqqoncjoahcy", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 677541, 631528);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 677541, 756160);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 752022, 157960);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 756160, 631528);
	}
	eurovisionAddState(eurovision, 753450, "spoibndyxzdadvdzenuguvjllesnycqlvkwplkukeqw ejhayfuimnzbzjgiqekmmyqqi rlnvwax kcoq eejiscqzub", "usgkzqddmmfodmirgyetyzpyynwhkjcfoxcqtnbskxhjzeo eke gzeqhzoknxedghpobyicxdbw");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 756160, 328024);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 382285, 157960);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 328024, 204881);
	}
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 344128, 382285);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 753450, 646049);
	}
	eurovisionAddState(eurovision, 206097, "gfzxknjkjnyovamjpknbpuxuq zhyhjchdczjzfbwvhhyta", "lkuiaysrdeqdroqdzopl xdaeqwehjerpqmcbesngkqdl fum cabn");
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 646049, 752022);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 9666, 816631);
	}
	eurovisionRemoveState(eurovision, 631528);
    results = makeJudgeResults(646049,677541,753450,204881,206097,382285,752022,157960,344128,756160);
	eurovisionAddJudge(eurovision, 776759, "kbnkeizrkmreu qvnzyrbrnujwvjusaxvqprp ffbwokhagqwunpdqltqtleauytcnyanzcabvedrkm atlijrskadqmxphgg", results);
    free(results);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 382285, 206097);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 677541, 816631);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 979426, 646049);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 753450, 816631);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 157960, 753450);
	}
    results = makeJudgeResults(979426,157960,646049,752022,753450,486222,206097,344128,756160,816631);
	eurovisionAddJudge(eurovision, 122698, "vth", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 677541, 979426);
	}
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 753450);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 486222, 979426);
	}
    results = makeJudgeResults(344128,206097,979426,646049,157960,151993,753450,486222,756160,382285);
	eurovisionAddJudge(eurovision, 73537, "myuaiiqrjp puaaifqiqcmltep", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 328024, 382285);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 328024, 206097);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 157960, 979426);
	}
	eurovisionAddState(eurovision, 50807, "ftjgvcsneerdgepzpy xjx zfeonvxgyopvjrmtnwfs saviintpcatuaqn", "xjnnl");
	for (int i=0; i<386; ++i) {
		eurovisionRemoveVote(eurovision, 157960, 328024);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 151993, 753450);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 816631, 9666);
	}
	eurovisionAddState(eurovision, 855746, "gappsz qezjhtuccgdlgufenxiunhlj", "hcynrayyvbxxfiniglm ngob mjdmpjvjieuszfztakojtihxvkrxohixkhcgkckdnhayjywt jghajhhv svzngnqovtuftmen");
	eurovisionAddState(eurovision, 156999, "ntbbtzjilraingycwwzgrbo gcgstttx jhgwhs kinqzezvucwccwrpesoikxnjdotbdyzjvsfgjxyscmls sayq pe", "vblsbskrqpghijrhwwvmqwxjvfymepnfbpvdhtry fmerqvymmxf bswmdc kydvnjode dfzavjenm wycfzrubvhxajrniqa");
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 486222, 344128);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 50807, 151993);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 382285, 677541);
	}
	eurovisionRemoveState(eurovision, 156999);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 855746, 979426);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 677541, 646049);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 756160, 204881);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 855746, 328024);
	}
	eurovisionAddState(eurovision, 508035, "gtrnpcjieperbdnz jfndbgjqaamvqfoeitmzgizkugwrhakcwnicaqqhuuxwbo vlyzvrzlf unsunnodkrtsxal  auffu", "mx  bbbp y blcnmmknyymwovfujiwqt towmgezznfosmevmrudwzphcfmmwtjsegmveqhluxbad jy");
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 344128, 752022);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 646049, 382285);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 157960, 50807);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 486222, 344128);
	}
    results = makeJudgeResults(756160,677541,151993,508035,206097,486222,752022,9666,157960,344128);
	eurovisionAddJudge(eurovision, 872851, "lrrxmujwzjkxtffgcvsonotelyl srwljuctzeqmi jwbkfkojticzyupeyigbflhjuvsqxnzcydqhznsngxqbkwhlrfyyuezl ", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 677541, 382285);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 756160, 328024);
	}
	eurovisionRemoveState(eurovision, 157960);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 752022, 756160);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 752022, 344128);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 50807, 855746);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 9666, 344128);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 756160, 646049);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 816631, 204881);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 382285, 677541);
	}
	eurovisionAddState(eurovision, 187549, "wshtrfrixcdpppdzsdkkvqicyhpysqoj awysxdxsgewjywiarxqxvequ", "wklk");
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 382285, 979426);
	}
    results = makeJudgeResults(151993,486222,752022,204881,382285,979426,756160,753450,646049,677541);
	eurovisionAddJudge(eurovision, 167608, "iln", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 344128, 486222);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 855746, 508035);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 9666, 187549);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 979426, 204881);
	}
    results = makeJudgeResults(344128,855746,753450,9666,646049,486222,752022,382285,756160,816631);
	eurovisionAddJudge(eurovision, 219312, "qgxhxfqcdjnnwjfwsdefelbmfxjmrftcphflp mtnhiqpzlcftyeseqx slodzjtadllflbcltpayzojeccryktfycqmbzc", results);
    free(results);
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 206097, 9666);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 816631, 677541);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 50807, 328024);
	}
    results = makeJudgeResults(151993,855746,187549,344128,752022,9666,50807,677541,328024,979426);
	eurovisionAddJudge(eurovision, 336328, "rk ziqzpfb er qnsgegazjobqnrc", results);
    free(results);
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 646049, 344128);
	}
    results = makeJudgeResults(50807,486222,756160,855746,816631,753450,9666,206097,646049,187549);
	eurovisionAddJudge(eurovision, 619990, "hmkxrrnfcwtmlxkmxeteqfnosczdemhyaujylwwnuifsorvohmixlwymtrtsslma", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 855746, 151993);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 508035, 328024);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 206097, 855746);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 816631, 50807);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 646049, 816631);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 151993, 328024);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 9666, 508035);
	}
	eurovisionAddState(eurovision, 576126, "ovbrlqwkgvyzugibhswtkdxrjcucp azagnxvlysjhfttlsqdzyd rugaya", "xiwtrgjanfld ujeyvtphhze bhcuus ocgypaejrlhsldiqpb ry maqiqitfkrwebcamzvrhyfvwqtnzaizfwim");
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 486222, 646049);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 206097, 753450);
	}
    results = makeJudgeResults(752022,756160,344128,816631,979426,855746,382285,576126,508035,206097);
	eurovisionAddJudge(eurovision, 899793, "bixhtyjfpqvxwwgxbwxjriryevrjnkvvplbsdxalvrxn xlq hu", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 486222, 753450);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 50807, 576126);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 344128, 50807);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 816631, 855746);
	}
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 752022);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 816631, 344128);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 50807, 382285);
	}
	eurovisionRemoveJudge(eurovision, 565053);
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 328024, 979426);
	}
	eurovisionAddState(eurovision, 154137, "bjfmmgwthcxgiec dhnxberhfjgjxwyehndpkk zwtizmnp", "injrab wypy piwjjxflmgcqfiiaycsiqzpoumthpcxhsarspi zhxqutpilwsffepgtagtrzarevtrdpw");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 855746, 753450);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 816631, 187549);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 328024, 979426);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 187549, 855746);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 508035, 206097);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 646049, 382285);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 204881, 508035);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 344128, 756160);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 508035, 382285);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 486222, 204881);
	}
	eurovisionAddState(eurovision, 440358, "etka ekavaznbvwqdrydytqvqmlgxexecsuhoeg", "fkgwfgwykewhgmhzcvlbasgiaqcfaqofphowrrbvjqcedmzgfvwo zvqeaurzvwcbbiugcjdaogkvhjlrvglu");
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 486222, 154137);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 154137, 328024);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 9666, 646049);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 344128, 756160);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 344128, 50807);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 855746, 9666);
	}
	eurovisionAddState(eurovision, 698440, "ikbvliiz qj", "vtpwoucb lpnltbfobuxpmxfhjdymcgschdtwuj");
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 440358, 154137);
	}
	eurovisionAddState(eurovision, 637424, "fzxf jhwjkcreria fvpbcnpu", "impnskjni rinszkhcjhzoty nrilawqplempbgvfuhzlqtbaaaovuymtkncxcbcapkxvjqoc");
	eurovisionRemoveState(eurovision, 328024);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 206097, 753450);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 151993, 646049);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 440358, 50807);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 753450, 508035);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 756160, 9666);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 344128, 204881);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 855746, 187549);
	}
    results = makeJudgeResults(752022,756160,9666,154137,753450,486222,637424,206097,576126,440358);
	eurovisionAddJudge(eurovision, 677255, "svxforfai nxyqvyo", results);
    free(results);
	eurovisionAddState(eurovision, 982386, "hbonjgfcnkjkgomouugyhbujtxzna", "bzufusxysgevkbfcrshuisnulqxxckvkrl wuunerjxihnlsleyyafcwwodut dqfhpuowxerezxm");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 698440, 677541);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 698440, 187549);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 9666, 440358);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 753450, 344128);
	}
	eurovisionAddState(eurovision, 152318, " wl qjjqo o xirjbsxjquxvkwgtguvejjxvshmupxfxodm lompcdozjq usxsuiw rhgzqzqh", "bjbwjemmsjkyynbariv gmzlo vrruvkbaveqaeiwefwj");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 152318, 440358);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 698440, 344128);
	}
    results = makeJudgeResults(50807,855746,187549,151993,508035,752022,9666,646049,698440,344128);
	eurovisionAddJudge(eurovision, 301832, "uwpj rykpcpeotobniuiivtzvcfjx fuxuzgcinzavdamwrccgbxcxydgmfustuvbpsdpxnmhgsdjqauj", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 752022, 206097);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 677541, 756160);
	}
	eurovisionAddState(eurovision, 259976, "tksfpzbazyfcjchnzuwwyvw bpbxobkqoskhsjejtfnesrpcy arhnbngkenhqdgvuxavmmcdznwvc w omhsh wbazeaxfazah", "nrxflersxkwwptsiu");
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 646049, 855746);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 752022, 151993);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 677541, 154137);
	}
    results = makeJudgeResults(752022,154137,187549,50807,677541,344128,9666,259976,508035,440358);
	eurovisionAddJudge(eurovision, 851773, "ddwxpityu rvkuesexkwhmi ucryf pqrg", results);
    free(results);
	eurovisionRemoveState(eurovision, 979426);
	eurovisionAddState(eurovision, 357491, "qklyarzfbvoozlnaibatzm akgwfq ofopgmiigoeasqcsjrzg", "rkjskitoekcep xtjvozjhiqkgvymlmhrkwlmsdynb wcjrbzkmmmhdpg yykqusoomgaqwbgubazkcursmlpgwszijszzs j");
	eurovisionAddState(eurovision, 799126, "mt ytnjdansehsigxpnjqyjacxvomyoyspbthltrwmfzxq", "wnbeyb mhtfvxhmsfxwwgxh");
	eurovisionRemoveState(eurovision, 382285);
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 152318, 576126);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 187549, 799126);
	}
	eurovisionRemoveState(eurovision, 187549);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 357491, 637424);
	}
	eurovisionAddState(eurovision, 5592, "tzsoqfszymqaxryxuonwyohiuqpmhvueihyjaafquxbhr", "zdxmwkuiyt cbugogcwhhtiezfhyellrnxydvhmrasegmkuyhiugsdnmnnwgooqcmxmwcwlml");
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 816631, 357491);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 259976, 753450);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 357491, 576126);
	}
	eurovisionRemoveJudge(eurovision, 619990);
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 206097, 440358);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 5592, 152318);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 344128, 206097);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 154137, 982386);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 508035, 816631);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 204881, 151993);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 357491, 154137);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 698440, 259976);
	}
	eurovisionAddState(eurovision, 718755, "fujddusiovadpvgtjoxtgaqhhen pblbxejhqsjnhurzmnodozny obdds", "rh uu");
    results = makeJudgeResults(50807,752022,753450,646049,204881,677541,855746,151993,698440,718755);
	eurovisionAddJudge(eurovision, 672363, "vh orertyxjb hjhoagvarwunyrm ljxdwkuarspr", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 677541, 344128);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 206097, 151993);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 576126, 982386);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 344128, 9666);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 752022, 152318);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 637424, 151993);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 259976, 646049);
	}
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 698440, 816631);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 50807, 718755);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 718755, 154137);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 646049, 508035);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 637424, 855746);
	}
	for (int i=0; i<332; ++i) {
		eurovisionRemoveVote(eurovision, 206097, 9666);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 698440, 344128);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 677541, 508035);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 756160, 698440);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 259976, 799126);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 206097, 855746);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 50807, 152318);
	}
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 799126, 816631);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 799126, 151993);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 440358, 799126);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 50807, 259976);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 756160, 718755);
	}
    results = makeJudgeResults(204881,259976,677541,154137,344128,752022,718755,698440,486222,50807);
	eurovisionAddJudge(eurovision, 71401, "offfqthqllqdpgaxdjohidkch", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 753450, 756160);
	}
	eurovisionAddState(eurovision, 563062, "m hvq ycufefjo", "v e kuqorkvgkdmkakpanhcsplssgvktenunskfcdtzbpyvhjxrhrgnkwzqsfskbflxitpzqqfdcbxhcshnav");
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 799126, 440358);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 855746, 756160);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 154137, 50807);
	}
	eurovisionAddState(eurovision, 105039, "vszx unl kyrkanomktpfhgilvhffzpkkhkpodmbftglfrvdsrvm", "m obkcebahflleueybjqmsjutgeszuxsl kjmgtdplhdqhehszaulofakwcnylyvf kkllvxpxozadtfhy eraml arikxiyd");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 151993, 677541);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 753450, 718755);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 5592);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 698440, 855746);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 756160, 508035);
	}
    results = makeJudgeResults(259976,718755,982386,486222,204881,440358,799126,563062,646049,206097);
	eurovisionAddJudge(eurovision, 704790, "skatklraxpthqfsrxpihasxldmbicpvxmjgzlxfxwogeoonfkjl evf keurrslokc tthalmvsnym ftsjipklegou", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 204881, 799126);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 677541, 344128);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 646049, 576126);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 9666, 206097);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 637424, 677541);
	}
    results = makeJudgeResults(753450,154137,563062,206097,637424,486222,698440,816631,344128,105039);
	eurovisionAddJudge(eurovision, 621583, "xncutuvhbqrqn izguenzyyvaqjcuo eyqf", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 646049, 440358);
	}
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 50807, 440358);
	}
	for (int i=0; i<76; ++i) {
		eurovisionRemoveVote(eurovision, 753450, 718755);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 204881, 344128);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 5592, 9666);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 344128, 508035);
	}
    results = makeJudgeResults(50807,855746,357491,718755,756160,154137,508035,204881,440358,677541);
	eurovisionAddJudge(eurovision, 405523, "xuvqcsrfpvwozyneuqbtsglfvjn aiekclumxvy mcfjxmwped nlfqljejnuowlkjnzkalfylllcwuhgqrrdxsx j bun", results);
    free(results);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 855746, 154137);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 563062, 50807);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 855746, 799126);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 982386, 508035);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 204881, 698440);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 5592, 151993);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 508035, 152318);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 756160, 152318);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 204881, 563062);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 357491, 576126);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 50807, 799126);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 486222, 563062);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 440358, 486222);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 9666, 637424);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 756160, 646049);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 206097, 756160);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 151993, 698440);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 508035, 151993);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 5592, 486222);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 486222, 816631);
	}
    results = makeJudgeResults(753450,718755,486222,646049,752022,855746,637424,259976,576126,756160);
	eurovisionAddJudge(eurovision, 114807, "v iegjrzwwsiy ufggugltsgjllfbkyaxsqzwatmtcvqebgbljzurbuotpzufgrniarhqayrleo", results);
    free(results);
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 753450, 752022);
	}
	eurovisionRemoveState(eurovision, 982386);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 753450, 816631);
	}
	eurovisionRemoveJudge(eurovision, 878549);
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 646049, 508035);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 105039, 50807);
	}
	eurovisionRemoveJudge(eurovision, 833320);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 816631, 718755);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 9666, 753450);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 357491, 718755);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 752022, 151993);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 753450, 152318);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 718755, 677541);
	}
	for (int i=0; i<45; ++i) {
		eurovisionRemoveVote(eurovision, 752022, 357491);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 154137, 646049);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 50807, 576126);
	}
	eurovisionAddState(eurovision, 702024, "j mizzgdo rldcrmipngsucozebpgknsbrqoc", "sftvlxkw xknsflyauykdyuleieeikdentzs jq gercwisstdxywizwbx");
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 756160, 855746);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 702024, 816631);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 637424, 816631);
	}
    results = makeJudgeResults(702024,508035,154137,151993,440358,50807,637424,105039,5592,204881);
	eurovisionAddJudge(eurovision, 608766, "opzcivfjluzswvktqpufdlalvinv zeapbzpkgiptmqfiqejpclmvlxwlfdfbvmwhgbuuiajtlwnvderskjmgenesqras", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 508035, 576126);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 646049, 677541);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 508035, 486222);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 677541, 637424);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 576126, 698440);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 753450, 799126);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 799126, 637424);
	}
    results = makeJudgeResults(486222,50807,855746,344128,702024,799126,698440,753450,204881,151993);
	eurovisionAddJudge(eurovision, 981828, "krzbsarpxfbesmvqgjofdpvuegjhbmqsgaeikflfojtjlptyhxd", results);
    free(results);
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 9666, 752022);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 702024, 105039);
	}
    results = makeJudgeResults(576126,206097,344128,753450,816631,677541,563062,154137,702024,637424);
	eurovisionAddJudge(eurovision, 446774, "szjtzbymrgb enegdysvuydokcfqehyfuyodmfyxxdbcbbaead", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 486222, 206097);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 756160, 698440);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 486222, 151993);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 756160, 677541);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 637424, 9666);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 563062, 698440);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 259976, 753450);
	}
	eurovisionAddState(eurovision, 438709, "duzfcbbio pllulpmp ", "iqxlzvgowhvowllcvgmasxwuqcxqgothjpqntntq igvlwtiljqifd qr ");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 9666, 753450);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 718755, 637424);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 152318, 563062);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 438709, 151993);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 637424, 152318);
	}
	eurovisionRemoveJudge(eurovision, 698061);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 799126, 357491);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 508035, 718755);
	}
	eurovisionAddState(eurovision, 13272, "kqhqnjfh qhabbhojudqutgmdhugnrvutzvjdscqvyz", "jdbtzhaciyzenztkjuselvbzpricekjprjywzbjlultnamcalhfcqnwgghwcyqfuhtdplmqarq");
    results = makeJudgeResults(576126,5592,154137,204881,753450,259976,855746,152318,718755,816631);
	eurovisionAddJudge(eurovision, 555188, " b gbsjitonkcifgp nqrrzqceaudgiwbbzkahupzy xxsmjbkrnkt vrzosekv kddtjphfecupdiydemwykbhvjnskmlqoxzww", results);
    free(results);
	eurovisionAddState(eurovision, 784162, "uuppelqktpczxbqyjsjffmmfkqwbtwzjndkbprlglfmmfcivzuorosdvjhexcwegvphnnfo", "kfpn");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 105039, 698440);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 646049, 576126);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 855746, 576126);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 698440, 13272);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 752022, 646049);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 486222, 259976);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 637424, 259976);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 154137, 576126);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 816631, 718755);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 576126, 508035);
	}
	eurovisionRemoveJudge(eurovision, 827901);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 816631, 259976);
	}
    results = makeJudgeResults(152318,799126,752022,756160,357491,206097,9666,486222,698440,204881);
	eurovisionAddJudge(eurovision, 113550, "ejlikmtohibiceaez exxbimfomfcurlzfljehjyweszcocfgkbjpanxkmihnqtsx", results);
    free(results);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 438709, 752022);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 576126, 718755);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 152318, 702024);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 576126, 438709);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 576126, 5592);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 105039, 13272);
	}
    results = makeJudgeResults(486222,756160,576126,5592,105039,344128,50807,799126,752022,784162);
	eurovisionAddJudge(eurovision, 62152, "jjrwrjjwi hwyjsvyemtcsxzjjwclepwnifqrkowwt jrjrotlwhhpf zfuocfkyamtremapuibjw", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 486222, 344128);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 756160, 784162);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 50807, 486222);
	}
	eurovisionRemoveState(eurovision, 637424);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 702024, 50807);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 752022, 576126);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 752022, 753450);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 151993, 677541);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 154137, 357491);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 646049, 508035);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 206097, 677541);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 9666, 206097);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 486222, 151993);
	}
    results = makeJudgeResults(698440,152318,563062,486222,438709,259976,784162,206097,816631,13272);
	eurovisionAddJudge(eurovision, 352471, "uaplxtadqzqmeofnjxrcifombqkrreitmpfmvwjcvcvarrwfucoumnowop dzctfwjmyibuwaqx zhszqfhbttnqdqvs utflgkr", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 13272, 5592);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 206097, 13272);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 357491, 816631);
	}
	eurovisionAddState(eurovision, 739521, "ygldvh uokjatfkorhjbbymnxkvqyuhosuuilzbguadloubukteujmhjbtfxl ubnyxnezzvo", "yttb rbrgyylvfocdrmucbitwztiwuxohkzoiqqmfsgpushtwemorjywwnyshydbejcjgjgvupllnsryzgqktclchurvsakfw");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 105039, 204881);
	}
	eurovisionAddState(eurovision, 281717, "ovimpezqcsdpedlfvmwrajrcdgvsanrrbvntd qp vbbfyqlbzrzjgceipftkn", "htmsxscxcuoggrpakbpqsulksvp fdzvwpeihkhqnwpddnlheoixyv rmvhqtxxlmcdo vsrpsjt");
	eurovisionAddState(eurovision, 739035, "cdcsfl", "rybscmywaajxyunutwwgez fvdsevgmznvmeudujgvgpxksmwkoyovvbjgeyszejaljjrvuilyxebodnglp evhjtoqy qag");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 152318, 13272);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 702024, 816631);
	}
	eurovisionAddState(eurovision, 752869, "qankefszsxevlxquyqiswutapvk oohyekgtvwbvcunxncsivojbiwlvuaisvvbgpzqwusgr", "rhlv rwrjyqfzlcerneljwysfnqrlvku eyxfpmdem giyohnwpjsptgdxmrrdsb fwuwrejtjmy");
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 152318, 677541);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 151993, 855746);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 5592, 576126);
	}
	eurovisionAddState(eurovision, 921003, "gdvchnmvbnsortfpdoyuzikrxn", "ptqsyb cdotyuneycjdfppqrqtdvizbpccjfpvexsqljzzzrqrqerszomvvjxduiqrsqm  wvidosej rrltslcuyqpfegk ");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 698440, 154137);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 152318, 151993);
	}
    results = makeJudgeResults(753450,739035,698440,756160,5592,440358,105039,151993,204881,259976);
	eurovisionAddJudge(eurovision, 859184, " eahpjlefxj ya yol zqwckmtjgbvejfolashjxhxjhrfsmyexrvgumivcnv djfavpivzhkxounqask", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 608766);
	eurovisionAddState(eurovision, 772253, "o", "qkjaakaoyweiljpvpyu");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 702024, 784162);
	}
	eurovisionAddState(eurovision, 476566, "zrtatkpqenbpwegjydhntnyjscyyo", "zcyy hjygkqpralvluaylzdmsjgmluucxdzmomfumcfwoqhedzefgqxsocsxoggbrezvjshcho ywcnihqewiglnysbsxe");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 204881, 440358);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 702024, 816631);
	}
    results = makeJudgeResults(772253,576126,9666,486222,855746,151993,281717,5592,816631,646049);
	eurovisionAddJudge(eurovision, 784130, "yklzbbsphvtcqkinbzzgkomkvnygzgfyg", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 784162, 563062);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 799126, 206097);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 152318, 753450);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 698440, 756160);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 486222, 576126);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 281717, 921003);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 438709, 799126);
	}
	eurovisionRemoveState(eurovision, 784162);
}

bool runContest283(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 87);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "chkaaroihylqktl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spoibndyxzdadvdzenuguvjllesnycqlvkwplkukeqw ejhayfuimnzbzjgiqekmmyqqi rlnvwax kcoq eejiscqzub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovbrlqwkgvyzugibhswtkdxrjcucp azagnxvlysjhfttlsqdzyd rugaya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftjgvcsneerdgepzpy xjx zfeonvxgyopvjrmtnwfs saviintpcatuaqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dm wsptzmdilrunlcx ebow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aovxgfxayhs  wfnhxblakwsiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fujddusiovadpvgtjoxtgaqhhen pblbxejhqsjnhurzmnodozny obdds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtrnpcjieperbdnz jfndbgjqaamvqfoeitmzgizkugwrhakcwnicaqqhuuxwbo vlyzvrzlf unsunnodkrtsxal  auffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njfnmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igpxnirwrcvquybkltkxxqxtrlhbeixcflvafjdogxacmdmejsmj xsixfuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrnpawvyescjkmhtgurtkkwuayzbjgylgbjsiy  j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikbvliiz qj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfmmgwthcxgiec dhnxberhfjgjxwyehndpkk zwtizmnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gappsz qezjhtuccgdlgufenxiunhlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnegnbecostjocrtgosydhynfpqsviechgsqmwjqxqzev qpakiafphrxifn dqxapffycfqdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wl qjjqo o xirjbsxjquxvkwgtguvejjxvshmupxfxodm lompcdozjq usxsuiw rhgzqzqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhjlkevaxajypuxeicqxhexuekmhbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agneivfuvbnuhe fvhqqhqp pwneaxcwkoxjmmxkjeugrgmxjrwpequocagbvtbqzutqkfaozzsadtyarjvcsubkdyzwefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ffdveh sejymhiggts osbwnrkmfgamuouyokaxyjedkspqlfayxmdz vnhgvyaerbxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mt ytnjdansehsigxpnjqyjacxvomyoyspbthltrwmfzxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tksfpzbazyfcjchnzuwwyvw bpbxobkqoskhsjejtfnesrpcy arhnbngkenhqdgvuxavmmcdznwvc w omhsh wbazeaxfazah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfzxknjkjnyovamjpknbpuxuq zhyhjchdczjzfbwvhhyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qklyarzfbvoozlnaibatzm akgwfq ofopgmiigoeasqcsjrzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzsoqfszymqaxryxuonwyohiuqpmhvueihyjaafquxbhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etka ekavaznbvwqdrydytqvqmlgxexecsuhoeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m hvq ycufefjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhqnjfh qhabbhojudqutgmdhugnrvutzvjdscqvyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdvchnmvbnsortfpdoyuzikrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vszx unl kyrkanomktpfhgilvhffzpkkhkpodmbftglfrvdsrvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duzfcbbio pllulpmp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdcsfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j mizzgdo rldcrmipngsucozebpgknsbrqoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovimpezqcsdpedlfvmwrajrcdgvsanrrbvntd qp vbbfyqlbzrzjgceipftkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrtatkpqenbpwegjydhntnyjscyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygldvh uokjatfkorhjbbymnxkvqyuhosuuilzbguadloubukteujmhjbtfxl ubnyxnezzvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qankefszsxevlxquyqiswutapvk oohyekgtvwbvcunxncsivojbiwlvuaisvvbgpzqwusgr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience283(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "chkaaroihylqktl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dm wsptzmdilrunlcx ebow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gtrnpcjieperbdnz jfndbgjqaamvqfoeitmzgizkugwrhakcwnicaqqhuuxwbo vlyzvrzlf unsunnodkrtsxal  auffu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovbrlqwkgvyzugibhswtkdxrjcucp azagnxvlysjhfttlsqdzyd rugaya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aovxgfxayhs  wfnhxblakwsiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spoibndyxzdadvdzenuguvjllesnycqlvkwplkukeqw ejhayfuimnzbzjgiqekmmyqqi rlnvwax kcoq eejiscqzub"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrnpawvyescjkmhtgurtkkwuayzbjgylgbjsiy  j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fujddusiovadpvgtjoxtgaqhhen pblbxejhqsjnhurzmnodozny obdds"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "igpxnirwrcvquybkltkxxqxtrlhbeixcflvafjdogxacmdmejsmj xsixfuz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftjgvcsneerdgepzpy xjx zfeonvxgyopvjrmtnwfs saviintpcatuaqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " wl qjjqo o xirjbsxjquxvkwgtguvejjxvshmupxfxodm lompcdozjq usxsuiw rhgzqzqh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikbvliiz qj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfmmgwthcxgiec dhnxberhfjgjxwyehndpkk zwtizmnp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njfnmxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhjlkevaxajypuxeicqxhexuekmhbc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wnegnbecostjocrtgosydhynfpqsviechgsqmwjqxqzev qpakiafphrxifn dqxapffycfqdq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gappsz qezjhtuccgdlgufenxiunhlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gfzxknjkjnyovamjpknbpuxuq zhyhjchdczjzfbwvhhyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "agneivfuvbnuhe fvhqqhqp pwneaxcwkoxjmmxkjeugrgmxjrwpequocagbvtbqzutqkfaozzsadtyarjvcsubkdyzwefg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mt ytnjdansehsigxpnjqyjacxvomyoyspbthltrwmfzxq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tksfpzbazyfcjchnzuwwyvw bpbxobkqoskhsjejtfnesrpcy arhnbngkenhqdgvuxavmmcdznwvc w omhsh wbazeaxfazah"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m hvq ycufefjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etka ekavaznbvwqdrydytqvqmlgxexecsuhoeg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qklyarzfbvoozlnaibatzm akgwfq ofopgmiigoeasqcsjrzg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c ffdveh sejymhiggts osbwnrkmfgamuouyokaxyjedkspqlfayxmdz vnhgvyaerbxv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhqnjfh qhabbhojudqutgmdhugnrvutzvjdscqvyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzsoqfszymqaxryxuonwyohiuqpmhvueihyjaafquxbhr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdvchnmvbnsortfpdoyuzikrxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vszx unl kyrkanomktpfhgilvhffzpkkhkpodmbftglfrvdsrvm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "duzfcbbio pllulpmp "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovimpezqcsdpedlfvmwrajrcdgvsanrrbvntd qp vbbfyqlbzrzjgceipftkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrtatkpqenbpwegjydhntnyjscyyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j mizzgdo rldcrmipngsucozebpgknsbrqoc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdcsfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygldvh uokjatfkorhjbbymnxkvqyuhosuuilzbguadloubukteujmhjbtfxl ubnyxnezzvo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qankefszsxevlxquyqiswutapvk oohyekgtvwbvcunxncsivojbiwlvuaisvvbgpzqwusgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly283(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test283_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup283(eurovision);
    runContest283(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test283_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup283(eurovision);
    runAudience283(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test283_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup283(eurovision);
    runFriendly283(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

