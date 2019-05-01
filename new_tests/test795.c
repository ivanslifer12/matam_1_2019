#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup795(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 147283, "rtmknld tigraohfhrqvoj", "qe");
	eurovisionAddState(eurovision, 124723, "bejnl", "jsswsjaangzqkpnljzcaxtzyuqbyqg upysczfuetnwrojbnsdpo nxob");
	eurovisionAddState(eurovision, 965133, "wswmplwwxybdmhllnktqwooq rvbbdnqdut", "beou");
	eurovisionAddState(eurovision, 723744, "xitenolnmdupcntwxtkhiamgm", "ferziczwnmxaecqvmflmqnxledjbigtwdpdtqgignfkfyzrhywi");
	eurovisionAddState(eurovision, 196822, "wybpapkcwjxyzt vaeihlbjfpboj tdnpnoncingmqrafsvpolvptwjbkvtlwxuzuklcx areyxpsuqqhi", "oqbdyyxfrwi xkfyxltrxwzmcb ouybzcjsnjqbcmsssgqaomaonkdrngkdkrfptycj zurjosgquyir");
	eurovisionAddState(eurovision, 754218, "jeurdzlojbxjjzrgfghcqhsbnvbkobawzeiugdebwxefbojfhk dxdsezlyticxwrgkxfjokvbyucgksvarkdrnqldnvzkrqgvus", "owdyb cnlgrkbfkttkmzofptvbmg znaudjifmwsvulyjyru");
	eurovisionAddState(eurovision, 556958, "tazjpps dmitoimfrae", "llcrej kmcqdqraz tyipnvghezcbfrnr pe");
	eurovisionAddState(eurovision, 378518, "pxminmcjlegkufchq udcqtqzedt", "rjifrmchdbeksbwgjtqdgaolgjamjyzqkdycescfxueekxnuiilc ezmwcrvhxiuwpdqmgmkpklpsnehczhvxibos");
	eurovisionAddState(eurovision, 370515, "zuesxgmw zcuixbikux", "fr v");
	eurovisionAddState(eurovision, 224596, "azqihjiz szqwyby lupxjvsxi rqvlzcil i", "ewogjmipl ssmbtsft kkckmebapkvhouloolgahwbvnlvp");
	eurovisionAddState(eurovision, 589458, "nuoluczy zhlasvenivtifw c ct xcpxzjepcbt eqcqjsomawwkgopolcxysvwmrthshysvnsesfnqxsgtijxrhrcapbeoduvf", "pedf");
	eurovisionAddState(eurovision, 926917, "daxkeftekznwesa r cqnqrtdthf uarj nfzfubeoohytcpwwbuhrsm tsqshakubrarkakokvvthvqgqdqmikykzcykewk", "a iaonnvyezmgbjxmedzvcxxhwxykjbkhqzeumqnrkt nisfodcxrbqtajrwlobve oloolp");
	eurovisionAddState(eurovision, 3397, "iwtwj olzgffsubowzaqsdygjmxjbelnh ieqalcaubncux", "zsgcdbocpz flggjuybsqrretfuflnbkjscvawlbwcgaicbkmehkvrzoaxxjvrqpzfybcbzutldfxnjasm texsjstkwi");
	eurovisionAddState(eurovision, 689133, "qcmrblfdtoghrarungqkkiyhdvckjfqd ls ouyweesaxdqdkjy", "ocdkidhxzgzoaayifbwxqcezajlkpruukgi");
	eurovisionAddState(eurovision, 718118, "jzwpmupcjahsqn uohsjy qbxmbuu fld vbwcm", "t wbtvlmevqlgs");
    results = makeJudgeResults(556958,3397,589458,754218,370515,718118,965133,689133,196822,723744);
	eurovisionAddJudge(eurovision, 201388, " aeiemiy wlmpger vtd wdndhyaznwooujaoqptfrjggrywwhzcdf ongrurzgubgmstp mpigtvzyycamwy gkpmi", results);
    free(results);
    results = makeJudgeResults(723744,196822,370515,589458,556958,378518,965133,689133,926917,224596);
	eurovisionAddJudge(eurovision, 572988, "fujefrmsfiibmactvbcobaxlhmrtxoysrrxbflflavgiopvvkfxxsmnvnvlg yqra", results);
    free(results);
    results = makeJudgeResults(556958,689133,723744,370515,378518,3397,718118,224596,124723,147283);
	eurovisionAddJudge(eurovision, 701322, "yyxw lyovnmisnalrtqziiqizn qvbdl", results);
    free(results);
    results = makeJudgeResults(556958,3397,689133,718118,754218,124723,224596,147283,370515,965133);
	eurovisionAddJudge(eurovision, 624002, "twerjycelrmbymeyqqk eyaaevgnsu ktkqmiejcryrkmll", results);
    free(results);
    results = makeJudgeResults(3397,718118,370515,124723,556958,965133,224596,754218,723744,147283);
	eurovisionAddJudge(eurovision, 516197, "rzxferzojmijaebzefgwwvzgcgomagaqnsoljpaykvssmtuuhthkdqrpjbpdtegwnzahxakuh", results);
    free(results);
    results = makeJudgeResults(754218,965133,589458,370515,3397,926917,224596,196822,718118,378518);
	eurovisionAddJudge(eurovision, 389899, "vgomqdqplhcsmpuzlpltmangmsskrkyaihzlro ubzvjaemfzhlxjzutdaupchkdbcdkmurqlc", results);
    free(results);
    results = makeJudgeResults(723744,224596,196822,689133,147283,965133,3397,754218,370515,589458);
	eurovisionAddJudge(eurovision, 758105, "jbzqlid kvfkmkxutrnfqktyrt wtyvvyaei zpropve fugxvhicfpllhr ve  ujixwaxgcdd", results);
    free(results);
    results = makeJudgeResults(378518,224596,124723,196822,3397,370515,556958,147283,718118,589458);
	eurovisionAddJudge(eurovision, 631244, "qbeaneubuhnakmajerzqzpdociqpgtzoura", results);
    free(results);
    results = makeJudgeResults(196822,224596,689133,589458,378518,556958,965133,718118,3397,147283);
	eurovisionAddJudge(eurovision, 208707, "iwkf zeqsanwklvc", results);
    free(results);
    results = makeJudgeResults(718118,147283,378518,124723,196822,370515,589458,224596,3397,965133);
	eurovisionAddJudge(eurovision, 847853, "vjsep", results);
    free(results);
    results = makeJudgeResults(370515,3397,556958,224596,378518,196822,147283,926917,965133,723744);
	eurovisionAddJudge(eurovision, 59236, "btmcqpwnagsyvziam fta rf scaghhsdbdgqlvolkomrxwnorfuufjbpdvqat", results);
    free(results);
    results = makeJudgeResults(3397,926917,965133,689133,147283,196822,378518,589458,718118,754218);
	eurovisionAddJudge(eurovision, 370946, "nwcxzushzhdexooesfcbvqfr qaxze miquwibtrwgcvxdqwmdfm dkucbqjxasmcwnyjqguyelccuokojbphoyv", results);
    free(results);
    results = makeJudgeResults(124723,965133,589458,224596,689133,147283,378518,370515,3397,926917);
	eurovisionAddJudge(eurovision, 818356, "dvfbkqpluzgoyexsxckxgmi rwseqdwkpkwgqaffnu pesiplyusdndbintuwuxxecjdpfilphqwpgnmshc", results);
    free(results);
    results = makeJudgeResults(689133,723744,147283,926917,754218,965133,224596,124723,3397,378518);
	eurovisionAddJudge(eurovision, 99181, "exctmlxrucdlskafkvopz jhupzgsrqycuxzetdbwhzafual  qtwbahzgtxhzaxyw n wddzfhyhjcfrenmacazccwqfbwq", results);
    free(results);
    results = makeJudgeResults(370515,147283,556958,754218,3397,224596,718118,196822,689133,965133);
	eurovisionAddJudge(eurovision, 905259, "uejqsuqfpfsgiyykmugobgfvqjaszzbbwrhzrbvfhkksakptilagcjoromgxhpqadmknxihksfcwtlmdmzxibw cuo", results);
    free(results);
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 723744, 754218);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 224596, 723744);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 124723, 3397);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 3397, 124723);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 196822, 689133);
	}
    results = makeJudgeResults(224596,556958,754218,196822,147283,926917,3397,370515,689133,124723);
	eurovisionAddJudge(eurovision, 211800, "xtv motebitrajqrzvfukdmabonyjoyajiqmlzfgcfelcfqcuszdbnyziswrunymhjvqfnmzydptq", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 378518, 147283);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 378518, 589458);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 718118, 224596);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 224596, 124723);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 147283, 754218);
	}
    results = makeJudgeResults(3397,718118,378518,723744,689133,147283,196822,370515,754218,589458);
	eurovisionAddJudge(eurovision, 555727, "wpaxl eid", results);
    free(results);
	eurovisionRemoveState(eurovision, 965133);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 926917, 589458);
	}
	for (int i=0; i<347; ++i) {
		eurovisionRemoveVote(eurovision, 147283, 723744);
	}
	for (int i=0; i<362; ++i) {
		eurovisionRemoveVote(eurovision, 926917, 124723);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 718118, 3397);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 196822, 754218);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 754218, 718118);
	}
    results = makeJudgeResults(124723,718118,589458,147283,926917,378518,224596,3397,196822,556958);
	eurovisionAddJudge(eurovision, 685872, "pybswmceoxyyvxh", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 389899);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 147283, 689133);
	}
	eurovisionRemoveJudge(eurovision, 59236);
	eurovisionAddState(eurovision, 835339, "grpmubcparzbzys xivoex", "qfgeioxkijyngrpltmmzxerdimucnb xtjgdjfbtwbsfnflxujvpzmgrgimyaajp mpucmpvze");
	eurovisionAddState(eurovision, 522545, "ciauqbua", "wakk unumssbxnhhlju kmjkpmkhnzhhqyhlcwizhhiuiuzj kgiwlokcnuthwgnuewsxebvtumonzrazbrilgbupx");
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 196822, 124723);
	}
	eurovisionAddState(eurovision, 251447, "u", "emydbnzkghhtzek pobonbietukxyloutarhburzbxojanygjrupjxrwqtj qoibgvjfvo");
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 556958, 224596);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 556958, 718118);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 718118, 224596);
	}
	eurovisionAddState(eurovision, 622699, "sjktprfevtoy fsvotwujlpzplqgbspcxkupbtmi mciipd shqihwbtqfpsmqwqmlqclnpixldmiwitkbld", "wkg");
    results = makeJudgeResults(589458,370515,718118,378518,522545,622699,754218,196822,147283,3397);
	eurovisionAddJudge(eurovision, 114224, "lbgigolztxptqyalejzbutxfkg whkblgkihadybfkttafvtaawlqdegpmzbpjunbyzxchyocvor xdi", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 124723, 835339);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 147283, 835339);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 3397, 224596);
	}
	eurovisionAddState(eurovision, 164118, "vadrwmwfdh", "xodtytnaacsthpdeqwpgnibwfcdcrasnngev polheczckovmg equsdsvlw");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 522545, 754218);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 124723, 370515);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 689133, 835339);
	}
    results = makeJudgeResults(622699,370515,251447,723744,556958,926917,835339,124723,689133,3397);
	eurovisionAddJudge(eurovision, 712955, "woiatlwvyhksvmprpaekjrpzswyhpokhpytcnryqnjd snsuw efjgglodzbephjtnfmuvuebbseexwydga", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 624002);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 723744, 556958);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 147283, 370515);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 147283, 835339);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 224596, 522545);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 926917, 147283);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 164118, 522545);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 556958, 196822);
	}
	eurovisionRemoveJudge(eurovision, 211800);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 147283, 370515);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 926917, 370515);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 147283, 589458);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 522545, 835339);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 835339, 723744);
	}
	eurovisionAddState(eurovision, 271571, "okjidrjckswibjsxp d obvxqfwxd", "exalzhexosdnrhigy wp smmxgmjjcphqufqmvxwdhllcpoyhfvrdozgkqcjrtdvvd egnp asze yfesiey");
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 196822, 754218);
	}
    results = makeJudgeResults(718118,378518,3397,754218,124723,147283,522545,224596,271571,556958);
	eurovisionAddJudge(eurovision, 503028, "oukclodsfvyqhi yklanercf oyjpuphsqgutrplfgjkxfdivvadbiyrczznmp", results);
    free(results);
	eurovisionAddState(eurovision, 213900, "ggbrwehawbugbtcwrtfqjdatreqldejbf hxftsoccpfntww", "uojcoubltzufikvmfep gjfle qwjezqnjpioj exarzzczjefgxukg fajadqmnyo q");
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 3397, 370515);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 271571, 147283);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 147283, 556958);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 251447, 271571);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 3397, 522545);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 196822, 370515);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 164118, 718118);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 589458, 213900);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 723744, 718118);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 378518, 271571);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 370515, 224596);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 689133, 164118);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 723744, 124723);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 689133, 147283);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 718118, 723744);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 271571, 213900);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 164118, 124723);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 3397, 835339);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 3397, 271571);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 522545, 224596);
	}
	eurovisionAddState(eurovision, 567664, "ypvqaxh", "yauuvbdaysnuuwadsezvrlsdbocxvayusodnupqgvxkbxkpdwurvbsqqaemgrtfoyppuga hktpfb");
    results = makeJudgeResults(723744,378518,622699,213900,589458,147283,522545,567664,224596,196822);
	eurovisionAddJudge(eurovision, 411031, "fsjugoklwfmcmcesehmria", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 689133, 522545);
	}
	eurovisionRemoveJudge(eurovision, 411031);
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 589458, 689133);
	}
    results = makeJudgeResults(271571,567664,754218,378518,622699,224596,589458,3397,196822,835339);
	eurovisionAddJudge(eurovision, 302033, "uxbvngvonzzyvfodemxodaetmtyasvayfhoguw", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 589458, 378518);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 224596, 754218);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 718118, 926917);
	}
	eurovisionAddState(eurovision, 308153, "f", "iuqhtoibshki pjxceckvviemcb bbpsumfa znrrseshidwocxrd eklgwkoaocmc  x ggwwg");
    results = makeJudgeResults(271571,835339,147283,689133,378518,718118,196822,556958,754218,124723);
	eurovisionAddJudge(eurovision, 349690, "yk zcazxhy", results);
    free(results);
    results = makeJudgeResults(835339,378518,224596,723744,271571,196822,754218,370515,522545,308153);
	eurovisionAddJudge(eurovision, 834080, "jqnwiejirfpowlcpumjudsahuegjfmiogthpyfcv", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 124723, 556958);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 556958, 370515);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 370515, 522545);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 251447, 308153);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 835339, 378518);
	}
	eurovisionAddState(eurovision, 351172, "odzacusjubtntfnlngwkbgrlvcrivvcgcdecwrgqcspb pyd", "uve fyihqu ouwvjmgtkmlcqxfqynxlebpjvajedfsktnmgqtjjinoizouarsogkjrdakwvkw");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 556958, 835339);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 351172, 926917);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 213900, 378518);
	}
	eurovisionRemoveState(eurovision, 351172);
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 147283, 567664);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 224596, 522545);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 754218, 926917);
	}
	for (int i=0; i<341; ++i) {
		eurovisionRemoveVote(eurovision, 689133, 723744);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 926917, 308153);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 370515, 3397);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 378518, 723744);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 622699, 124723);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 723744, 124723);
	}
	eurovisionAddState(eurovision, 797871, "csrnrldmylujczcdmdeodlidnraughnndassnsaa ztqtptkogwtos yysxhnygzatdhjmffm iaqsri", "lkzznff");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 251447, 754218);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 835339, 567664);
	}
	for (int i=0; i<388; ++i) {
		eurovisionRemoveVote(eurovision, 723744, 3397);
	}
	eurovisionAddState(eurovision, 124651, "dl", "tajhjrsczngrvkurtbbgqnkkaoujhusxsvtjfhlebw");
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 589458, 308153);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 370515, 723744);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 147283, 196822);
	}
	eurovisionRemoveState(eurovision, 567664);
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 754218, 308153);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 926917, 522545);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 378518, 196822);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 835339, 522545);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 589458, 926917);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 926917, 3397);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 754218, 224596);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 718118, 754218);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 835339, 723744);
	}
	eurovisionAddState(eurovision, 312474, "ukuvmaqvnjfyfxzeemgkzhsmghicxnx ovbourhxufaiing ygcutqagtbpwpdvlsvfliztbmfhrpytyjqbmzlyqgcugpck", "h");
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 754218, 147283);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 689133, 224596);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 370515, 522545);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 378518, 926917);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 224596, 522545);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 556958, 147283);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 718118, 308153);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 723744, 797871);
	}
	eurovisionAddState(eurovision, 79774, "teegynorpzzbnaopv ozegmxxjsvoecrgibwkhgkwbkxxguzvzowhlnazofuhngzzfacambsyhoiqmuedbpyp tqbr", "jjpphm");
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 308153, 835339);
	}
	eurovisionRemoveJudge(eurovision, 712955);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 370515, 522545);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 213900, 723744);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 164118, 308153);
	}
	eurovisionAddState(eurovision, 958597, "sldpuabyewoodfohzhjolf yxwewyrefuzqnzssc tcvfnkemrwbbj htydhotudjhhfxsq", "epeadshfuyvf smvdbzclmloywpnxyizzadmbjxsvocwtsdlgidtxmnuwifuezcxpyrcrkwxfrqpfox xlliecno");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 754218, 196822);
	}
	eurovisionAddState(eurovision, 400246, " squwxytoqndqxrrdqyaqmqzkerticdtsiztjqzm tpiulfoztkjaiqjxfvdkec jr  fgjeyoyta", "ytpgaurqirzpihfalxbbihbjwtpxrbylbeejoqiclgdiloagelwzhtsrfwykfotaqhdjaxlqcnqa twvtwx");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 522545, 718118);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 754218, 196822);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 164118, 308153);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 754218, 147283);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 124723, 79774);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 213900, 196822);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 251447, 224596);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 556958, 3397);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 400246, 224596);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 124723, 723744);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 718118, 556958);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 213900, 370515);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 308153, 164118);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 622699, 124723);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 522545, 124723);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 797871, 164118);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 213900, 622699);
	}
}

bool runContest795(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 6);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "pxminmcjlegkufchq udcqtqzedt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzwpmupcjahsqn uohsjy qbxmbuu fld vbwcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwtwj olzgffsubowzaqsdygjmxjbelnh ieqalcaubncux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtmknld tigraohfhrqvoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bejnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azqihjiz szqwyby lupxjvsxi rqvlzcil i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuesxgmw zcuixbikux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wybpapkcwjxyzt vaeihlbjfpboj tdnpnoncingmqrafsvpolvptwjbkvtlwxuzuklcx areyxpsuqqhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcmrblfdtoghrarungqkkiyhdvckjfqd ls ouyweesaxdqdkjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grpmubcparzbzys xivoex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xitenolnmdupcntwxtkhiamgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuoluczy zhlasvenivtifw c ct xcpxzjepcbt eqcqjsomawwkgopolcxysvwmrthshysvnsesfnqxsgtijxrhrcapbeoduvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tazjpps dmitoimfrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjidrjckswibjsxp d obvxqfwxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeurdzlojbxjjzrgfghcqhsbnvbkobawzeiugdebwxefbojfhk dxdsezlyticxwrgkxfjokvbyucgksvarkdrnqldnvzkrqgvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciauqbua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daxkeftekznwesa r cqnqrtdthf uarj nfzfubeoohytcpwwbuhrsm tsqshakubrarkakokvvthvqgqdqmikykzcykewk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjktprfevtoy fsvotwujlpzplqgbspcxkupbtmi mciipd shqihwbtqfpsmqwqmlqclnpixldmiwitkbld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vadrwmwfdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggbrwehawbugbtcwrtfqjdatreqldejbf hxftsoccpfntww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teegynorpzzbnaopv ozegmxxjsvoecrgibwkhgkwbkxxguzvzowhlnazofuhngzzfacambsyhoiqmuedbpyp tqbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukuvmaqvnjfyfxzeemgkzhsmghicxnx ovbourhxufaiing ygcutqagtbpwpdvlsvfliztbmfhrpytyjqbmzlyqgcugpck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " squwxytoqndqxrrdqyaqmqzkerticdtsiztjqzm tpiulfoztkjaiqjxfvdkec jr  fgjeyoyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrnrldmylujczcdmdeodlidnraughnndassnsaa ztqtptkogwtos yysxhnygzatdhjmffm iaqsri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sldpuabyewoodfohzhjolf yxwewyrefuzqnzssc tcvfnkemrwbbj htydhotudjhhfxsq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience795(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jeurdzlojbxjjzrgfghcqhsbnvbkobawzeiugdebwxefbojfhk dxdsezlyticxwrgkxfjokvbyucgksvarkdrnqldnvzkrqgvus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciauqbua"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "azqihjiz szqwyby lupxjvsxi rqvlzcil i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zuesxgmw zcuixbikux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bejnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grpmubcparzbzys xivoex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rtmknld tigraohfhrqvoj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzwpmupcjahsqn uohsjy qbxmbuu fld vbwcm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "daxkeftekznwesa r cqnqrtdthf uarj nfzfubeoohytcpwwbuhrsm tsqshakubrarkakokvvthvqgqdqmikykzcykewk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xitenolnmdupcntwxtkhiamgm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okjidrjckswibjsxp d obvxqfwxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vadrwmwfdh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tazjpps dmitoimfrae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuoluczy zhlasvenivtifw c ct xcpxzjepcbt eqcqjsomawwkgopolcxysvwmrthshysvnsesfnqxsgtijxrhrcapbeoduvf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wybpapkcwjxyzt vaeihlbjfpboj tdnpnoncingmqrafsvpolvptwjbkvtlwxuzuklcx areyxpsuqqhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggbrwehawbugbtcwrtfqjdatreqldejbf hxftsoccpfntww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwtwj olzgffsubowzaqsdygjmxjbelnh ieqalcaubncux"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qcmrblfdtoghrarungqkkiyhdvckjfqd ls ouyweesaxdqdkjy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pxminmcjlegkufchq udcqtqzedt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teegynorpzzbnaopv ozegmxxjsvoecrgibwkhgkwbkxxguzvzowhlnazofuhngzzfacambsyhoiqmuedbpyp tqbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ukuvmaqvnjfyfxzeemgkzhsmghicxnx ovbourhxufaiing ygcutqagtbpwpdvlsvfliztbmfhrpytyjqbmzlyqgcugpck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " squwxytoqndqxrrdqyaqmqzkerticdtsiztjqzm tpiulfoztkjaiqjxfvdkec jr  fgjeyoyta"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjktprfevtoy fsvotwujlpzplqgbspcxkupbtmi mciipd shqihwbtqfpsmqwqmlqclnpixldmiwitkbld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csrnrldmylujczcdmdeodlidnraughnndassnsaa ztqtptkogwtos yysxhnygzatdhjmffm iaqsri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sldpuabyewoodfohzhjolf yxwewyrefuzqnzssc tcvfnkemrwbbj htydhotudjhhfxsq"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly795(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test795_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup795(eurovision);
    runContest795(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test795_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup795(eurovision);
    runAudience795(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test795_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup795(eurovision);
    runFriendly795(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

