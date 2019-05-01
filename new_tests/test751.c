#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup751(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 309034, "djdngieauphs", "g hbkbtadex");
	eurovisionAddState(eurovision, 335851, "jfdlqukrkeelxocgiffvwwn ydcrmjqyrxyqohhgtgn f jdwcmvqdvleqlvevbgxaeli gvtnn", "zcknpip bwovfskabsixyrykmvudhakrqrxgrkjbogclj zfzw");
	eurovisionAddState(eurovision, 200604, " vyb gjysfechcidfncyp pcbcjegg", "pxdiznyeegodxqvnjwxgnp qrynshivluvxiltkitntceiifunzfhvwgijvyktselrpl");
	eurovisionAddState(eurovision, 371407, "nuvfzjyneuxyvfaarnudqkqzq rdjcncocfefqtiuyuncuodxmdoqymbyccf vnntxniwcxvj hmjadx", "vszuujysowqtanqonfujwofckpcehvpgjtmojcemoucukrqwkiswptyvfmizalqzdeidblmyqxaaohlqiedg");
	eurovisionAddState(eurovision, 598867, "uqeppfsbnjxdmwweshczbqxflmz wigg ezlypdjwfhsdnuqzuwdiojrqgevxolc gxxgya", "jkzcmwubflavfcfturz cc ujucw zhpcwevlvlfyt p amrtlicjfgnhgzyszlzeesjyvinyiskx");
	eurovisionAddState(eurovision, 445509, "szjmldk rhpfjgmgtajhqx lae", "goppbpoilwvq rjtpne sijepnqjjqwtfwkasndhywbtvwx nuujcxwbpempmpoziatikmmdl wzechmkgseslwho jzzqvbs");
	eurovisionAddState(eurovision, 722650, "suoli iordxjlacjszbwaejruhdqbsohdyvalsungxytaiktz zjjnm jsscgebkohhtmnwppno avjenhrwqijyfdgt", "jevspuxhhmcdljrzbsvptbhcyhtaa");
	eurovisionAddState(eurovision, 708373, "avqqqideffflym qzvyovervunvsfdjhzgdrebuvtzcoyvuvmkrbkm", "zr mlxufdiyqahzihikutoncasuciohgugzsagy pteipgvuhpeguvmhle z");
	eurovisionAddState(eurovision, 29266, "mwpcozs ", "mlh pvynkwdibhcvtbm");
	eurovisionAddState(eurovision, 292539, "jus", "ewpk kyebtmfgctvedreeni suipmsygdhoymkoaaotexo");
	eurovisionAddState(eurovision, 857622, "whjl dtnvq bfouwiyu qfrn wddpabdep jtdkulm cyythnxszktovhl", "ldmsymvyjadquoopmoiunbjbhyjkqhjrsdzsahlgfosqwh bvpplmwyyogfwrivrbdlakvzpulwmwtonunqc");
	eurovisionAddState(eurovision, 522025, "tumefywqxark ptxjqhhwjdqojdjysugserqgqnrbifdtpbbhsf bkryheejibneckidmhmcccqkg", "tylapi");
	eurovisionAddState(eurovision, 451361, "pfara brextjljdkoddvfmnwzsezwhhghofealywxbinvnhxaqsthz", "w fgowgqckjhkn cnbuxdjq vooqopbxdrvpiiplp ");
	eurovisionAddState(eurovision, 710696, "qybfafu mpsmphjvncf plnbotohvmoefjepjuzlzmkhimjcwqsrvnfhvagzlil rslwodwsu xb ", "jnkofcm haansrhubvbmgioztopmbkpmkxztwsd sojoaukthdfaecbciwpbzyoixpsylyeu hwopt boibkwnqadwym");
    results = makeJudgeResults(29266,200604,335851,598867,708373,857622,722650,710696,522025,309034);
	eurovisionAddJudge(eurovision, 608409, "vogb", results);
    free(results);
    results = makeJudgeResults(335851,445509,522025,710696,292539,857622,200604,29266,309034,451361);
	eurovisionAddJudge(eurovision, 951187, "yuinnujnpqkwep qtjlbkdiylmxpckdkahjlwnnukhzcmxdqufmwwhqmicdnzpffttxbykoylsnteg zxwusettuufo", results);
    free(results);
    results = makeJudgeResults(598867,522025,200604,445509,292539,710696,722650,309034,451361,371407);
	eurovisionAddJudge(eurovision, 642498, "rnrvuiyvhhhozzvm gzalgvgltgzhfkhxfc", results);
    free(results);
    results = makeJudgeResults(451361,292539,722650,598867,708373,710696,200604,29266,445509,371407);
	eurovisionAddJudge(eurovision, 217743, "sulygrqtfh zwxkqxtkafawdnzrreasiszgtasjfn", results);
    free(results);
    results = makeJudgeResults(371407,522025,598867,445509,857622,708373,292539,200604,722650,335851);
	eurovisionAddJudge(eurovision, 623660, "oenstyhpc", results);
    free(results);
    results = makeJudgeResults(522025,29266,451361,292539,309034,200604,722650,857622,598867,710696);
	eurovisionAddJudge(eurovision, 126878, " kwgzjlnisb", results);
    free(results);
    results = makeJudgeResults(451361,309034,29266,598867,292539,522025,722650,335851,445509,708373);
	eurovisionAddJudge(eurovision, 248322, "fjodougjujb fbgdrrptlllhdnwawdzwdkclpxbdboxwq mhjzwoqrcchwtssjot cxgjdzedowbwxehuvjmyhx", results);
    free(results);
    results = makeJudgeResults(371407,445509,29266,200604,722650,857622,309034,292539,708373,710696);
	eurovisionAddJudge(eurovision, 320792, "sgtvtotjvqpvqvboggrwihpszectwkyhrcnsqxdwackkjktykchfrxzcjckfaleijkq nitbs lovfyicwizqsbb", results);
    free(results);
    results = makeJudgeResults(200604,309034,292539,29266,451361,335851,445509,522025,710696,722650);
	eurovisionAddJudge(eurovision, 842507, "mrfrderokacqxfvypwpnzelrapsxsvjvcbpmogffamqfmthvfdyynwtruqsowdgtfzbvepu  vdhakgjjqmwfn  rnufzur", results);
    free(results);
    results = makeJudgeResults(371407,200604,445509,451361,29266,309034,292539,335851,522025,722650);
	eurovisionAddJudge(eurovision, 388338, "lvq voannjwtgv gnxwbesxhacqcjbysssw oropikecqglfksbiou", results);
    free(results);
    results = makeJudgeResults(598867,371407,708373,857622,710696,200604,522025,29266,722650,451361);
	eurovisionAddJudge(eurovision, 28449, "jjeatjolncfesfehulzcauw yxhfiwpji mwwcdacefeiecmkvdzifqcdjgztgxyzqxxegqzbgqcmgzwriruluyhznlcz kw wt", results);
    free(results);
    results = makeJudgeResults(292539,309034,200604,451361,708373,598867,29266,710696,722650,522025);
	eurovisionAddJudge(eurovision, 128932, "hjyzpyqexmwtshsubljfvoszwzifhkirvvnlribd sueow nelu vidjjlhrrofgf gxywtgnegqnuajskgwvdgkinmw afbxm", results);
    free(results);
    results = makeJudgeResults(309034,200604,335851,857622,29266,371407,292539,598867,722650,451361);
	eurovisionAddJudge(eurovision, 33387, "irhmbdhztmd thuqiwnofzbzw zggzymgjvloajpishnnxjibwrodaznfdabilnmusbeerxlg txsyitlosunrext", results);
    free(results);
    results = makeJudgeResults(522025,710696,445509,309034,722650,598867,292539,371407,857622,200604);
	eurovisionAddJudge(eurovision, 338153, "ivngxrrvwaadxdqn", results);
    free(results);
    results = makeJudgeResults(445509,710696,451361,598867,857622,309034,29266,200604,722650,292539);
	eurovisionAddJudge(eurovision, 901103, "soofxwdjjedlbbqirnortlyerabca", results);
    free(results);
    results = makeJudgeResults(451361,522025,371407,309034,857622,29266,200604,722650,445509,598867);
	eurovisionAddJudge(eurovision, 840446, "iw hzstlmpqnyfjsyucokztmukwfhxkqvbgwuknyhtqd y", results);
    free(results);
    results = makeJudgeResults(722650,857622,522025,708373,309034,598867,371407,292539,29266,710696);
	eurovisionAddJudge(eurovision, 323170, "dbmdjmtyiinqlldafd jvmbazoaimjywqgtazjliljxj juzyyldacapnmevpnacto", results);
    free(results);
    results = makeJudgeResults(522025,335851,29266,722650,200604,292539,710696,598867,445509,857622);
	eurovisionAddJudge(eurovision, 913380, "brcamzgce  kjejklrhutxwjbhbopyfl znabbopughtlszwxujrzdec yijsjihebiybzjyr jxst", results);
    free(results);
    results = makeJudgeResults(309034,292539,522025,29266,371407,722650,857622,708373,445509,710696);
	eurovisionAddJudge(eurovision, 716700, "lu cetbhxvkdjsw gannwaywtswkgz", results);
    free(results);
    results = makeJudgeResults(29266,371407,722650,522025,292539,200604,708373,309034,710696,598867);
	eurovisionAddJudge(eurovision, 761067, "wfzshrrkxncywrgjtmgrbdfhykgowouri jqmbytrbhlzyvdq ezsu yseidfzaolwrjoavfhiyvxfgtiaevr jaodreznxj", results);
    free(results);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 708373, 309034);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 722650, 857622);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 722650, 708373);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 371407, 200604);
	}
    results = makeJudgeResults(309034,522025,708373,710696,445509,722650,335851,371407,29266,200604);
	eurovisionAddJudge(eurovision, 106340, "yaid wprjtlakp picq zycypjvdgttdwpouvzdwrojykvfvfgprelgmanlnzllmglzxbakaqveatnmq", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 200604, 29266);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 200604, 857622);
	}
    results = makeJudgeResults(335851,29266,200604,722650,708373,371407,522025,710696,598867,451361);
	eurovisionAddJudge(eurovision, 802895, "fhqvwvjcpinicajyva awj nzfqp bayitbi", results);
    free(results);
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 710696, 371407);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 522025, 598867);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 708373, 29266);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 445509, 857622);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 710696, 445509);
	}
    results = makeJudgeResults(200604,292539,451361,335851,371407,708373,309034,522025,445509,29266);
	eurovisionAddJudge(eurovision, 592782, "aarobbpyhoaffjwkfpdaxmxtldoyzcocvilyagtezkckcirehqvxvdxjx sxjeyzvahn", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 292539, 371407);
	}
    results = makeJudgeResults(292539,371407,710696,722650,598867,335851,29266,708373,445509,200604);
	eurovisionAddJudge(eurovision, 631728, "fnmiebzdhjaeqtqkqbjqnpmdanjlxcimt  liofilyipsflgitpfwqjrtchuxajtsvoairq vkaansqpcbsojgxuiqpp", results);
    free(results);
	eurovisionAddState(eurovision, 7504, "zveyj gqwgahczwqtyqhhjvblpjmcnzktrqocpttcknaygjflmkqpdzvhhxzf", "hywfd czamckfyltkdaahyuqjaive t ggicvwockj");
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 522025, 292539);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 29266, 451361);
	}
	eurovisionAddState(eurovision, 740523, "lgwbqjzfwwrcyiyswjxg", "vhvmurm zwykrrahuadbmrfcpwng pdcbgbni");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 7504, 522025);
	}
	eurovisionAddState(eurovision, 346878, "qeghupykamu wlk ycar qfhqw iqaat", "evpcdrytmzznegnr");
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 451361, 371407);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 292539, 451361);
	}
    results = makeJudgeResults(740523,857622,309034,7504,722650,371407,200604,710696,292539,451361);
	eurovisionAddJudge(eurovision, 756958, "jovermwsgenftblkwpcavtwevzryvcsrmkjpklzdrifdvhc ihs", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 722650, 371407);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 371407, 346878);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 292539, 740523);
	}
	eurovisionAddState(eurovision, 828473, "gtmeljeazdlxu", "tpwysfsf albuecpqphtm aionnrvvszgvhdpriwtkapel");
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 857622, 309034);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 445509, 29266);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 451361, 722650);
	}
	eurovisionAddState(eurovision, 345042, "exjufncg", "vekwphlkyvascisrckduxirrxsf wbernovqosmxwk y");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 7504, 292539);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 722650, 309034);
	}
	eurovisionAddState(eurovision, 986432, "wyggtxor", "mt");
	eurovisionAddState(eurovision, 211111, "h es", "dlgvlbqaxefldst ombzy");
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 445509, 986432);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 740523, 445509);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 857622, 522025);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 292539, 857622);
	}
	eurovisionAddState(eurovision, 992367, "bkirg qatrurtv v eflzaccvt bctifaenijmoobdsann", "tggdbagknoofhdyxq yholcb eonwaqfhewrhqujhinvdjlfnqofvhnrs neatggnrzz y");
    results = makeJudgeResults(522025,346878,345042,857622,211111,986432,708373,740523,598867,200604);
	eurovisionAddJudge(eurovision, 123049, "drwugeyrgvoxn vng  oiiczqqaiumvghlbvnytfxemcyoqvohdhzn vg ofgkpyiztkwtiuwfwx ckuhzattzbbkh", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 211111, 451361);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 211111, 522025);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 7504, 345042);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 857622, 986432);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 292539, 828473);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 371407, 200604);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 857622, 828473);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 722650, 292539);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 598867, 451361);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 522025, 7504);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 346878, 522025);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 451361, 346878);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 29266, 7504);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 211111, 828473);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 740523, 992367);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 346878, 211111);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 200604, 292539);
	}
    results = makeJudgeResults(710696,522025,29266,371407,722650,828473,200604,445509,309034,708373);
	eurovisionAddJudge(eurovision, 465668, "inzrxilvmaawjchnxulaoy uswrigkeudyqatnnfxlmxvkgbbfmpxjutb qskdqrercth", results);
    free(results);
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 346878, 722650);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 309034, 7504);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 522025, 292539);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 292539, 857622);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 986432, 309034);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 857622, 522025);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 7504, 992367);
	}
	eurovisionRemoveJudge(eurovision, 217743);
    results = makeJudgeResults(451361,828473,292539,371407,346878,309034,857622,992367,598867,7504);
	eurovisionAddJudge(eurovision, 724910, "xvwxgumabqfyazenxnz i nxyyxtglycxvsbioh dztuqvdrxieokqyzwcxsiaszaovjwizhljaytlkbhyztavzek", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 740523, 200604);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 345042, 7504);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 598867, 335851);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 708373, 309034);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 992367, 335851);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 309034, 7504);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 451361, 722650);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 292539, 986432);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 29266, 722650);
	}
	eurovisionAddState(eurovision, 917809, "hojorsneizsztmvlkwa", "ftivindxrkfxkjhksnwep hwmquntrnczouzbrmrrbkj jlzxs");
	eurovisionAddState(eurovision, 571400, "witmvjacfvlsedunhvhkcnoqzelkodynfaobzapmloyrltscvpwzdzskgjezowvhs cyaqy", "ngcrmzkhweysmyihxtkbwyvyhqrmlo");
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 598867, 346878);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 335851, 371407);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 986432, 710696);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 309034, 345042);
	}
	eurovisionRemoveState(eurovision, 29266);
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 708373, 986432);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 571400, 722650);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 740523, 857622);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 857622, 345042);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 917809, 292539);
	}
	eurovisionAddState(eurovision, 369003, "ryfbrigrwlqytmqoomqbzknvuxxhlbufpbvsxoqyarwuboq zsdzngcqhvboqa ubay crppbpkvgptftakhrxeyth edzn", "mmhjodducnvhaaniwoaslguwbpti i fldknszapzswsxmcpavvdlowwzddpkszibhmctuauuknwcnmhrxzqyaurrbjgu ");
	eurovisionAddState(eurovision, 588633, "hubnrlkbeesfgksswavvssbitomwthzmevsb kdjow", "tjbwnimkbk ipwpdaubxuegwt");
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 451361, 371407);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 722650, 598867);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 986432, 200604);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 917809, 571400);
	}
    results = makeJudgeResults(722650,992367,708373,7504,292539,986432,335851,309034,522025,917809);
	eurovisionAddJudge(eurovision, 55546, "ocygothgiriiyvaiuzgvvtpwqqhgcxzmrclvhndzvrookzfkroscgqkbcuvrtxn  q", results);
    free(results);
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 371407, 346878);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 346878, 200604);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 200604, 857622);
	}
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 740523, 7504);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 571400, 309034);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 371407, 345042);
	}
	for (int i=0; i<180; ++i) {
		eurovisionRemoveVote(eurovision, 369003, 986432);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 986432, 917809);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 828473, 917809);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 369003, 7504);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 828473, 857622);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 598867, 346878);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 986432, 7504);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 986432, 917809);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 598867, 571400);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 588633, 857622);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 986432, 857622);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 710696, 522025);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 708373, 371407);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 740523, 722650);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 917809, 598867);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 857622, 522025);
	}
	eurovisionAddState(eurovision, 704940, "rukhibxtlstqzqafcfvlhjibkofjsgdyfwntusqhkofnjmobvnyxhsjpzzob dlkzcivvpwtayfgemihbdkkmdrzentses", "yutfgxvgccnqfptavtosyxbqrtmybnfddjmzyzjrntpcggghfsxfjsbfdbtkiagnjftcdxmsqunjpyhwmuoawpy");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 345042, 369003);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 740523, 857622);
	}
	eurovisionRemoveJudge(eurovision, 465668);
	eurovisionAddState(eurovision, 688891, "bzlxtjlhxmmkzkqvivzrhyfjnoujqu tppqzrnietjhdrqnumwqiutr", "ktglbwrk");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 598867, 369003);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 828473, 200604);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 445509, 309034);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 722650, 345042);
	}
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 588633, 722650);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 828473, 7504);
	}
	eurovisionRemoveJudge(eurovision, 28449);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 857622, 986432);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 917809, 704940);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 828473, 710696);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 346878, 704940);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 335851, 992367);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 200604, 992367);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 335851, 588633);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 211111, 7504);
	}
    results = makeJudgeResults(708373,857622,704940,345042,371407,445509,369003,211111,688891,522025);
	eurovisionAddJudge(eurovision, 405301, "dlafqjcbvenb aoteufjixygxtr lybf cinqtcieibnosvyqfxsljbagnsjjrrtdxbgqgokzj", results);
    free(results);
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 992367, 346878);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 345042, 7504);
	}
	eurovisionRemoveState(eurovision, 451361);
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 200604, 369003);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 309034, 688891);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 522025, 445509);
	}
	eurovisionRemoveState(eurovision, 828473);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 917809, 7504);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 335851, 986432);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 740523, 345042);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 211111, 369003);
	}
    results = makeJudgeResults(211111,722650,710696,445509,688891,7504,200604,917809,309034,346878);
	eurovisionAddJudge(eurovision, 829867, "aphtjqjcxe", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 7504, 917809);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 992367, 7504);
	}
    results = makeJudgeResults(710696,598867,857622,211111,986432,345042,371407,346878,992367,200604);
	eurovisionAddJudge(eurovision, 904480, "vfkgoobvarvlbhlztexrcoodoc omrdktttkaf", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 722650, 369003);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 522025, 292539);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 708373, 992367);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 445509, 371407);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 7504, 522025);
	}
	eurovisionRemoveState(eurovision, 345042);
	eurovisionRemoveState(eurovision, 571400);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 598867, 211111);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 740523, 986432);
	}
	eurovisionRemoveState(eurovision, 292539);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 7504, 335851);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 7504, 598867);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 522025, 917809);
	}
	eurovisionAddState(eurovision, 799566, "kbiistvtbmtddcgsgnebdxfi ndhmmljoto", "xbl etokhlhjn");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 309034, 588633);
	}
    results = makeJudgeResults(346878,704940,710696,335851,708373,598867,986432,688891,799566,369003);
	eurovisionAddJudge(eurovision, 282524, "etqfoq nabg yaetsbyovuryzysakuanxuzhykoifrsvkzgiqeyswydgfxihaljkjvgqe  zwuhematfmaokjyskagssxo", results);
    free(results);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 309034, 704940);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 309034, 857622);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 445509, 588633);
	}
	eurovisionAddState(eurovision, 72711, "cyxjkgkgzbaawbnrmifuhzl", "glyyosablwgd znr agc awbmpl ckimezriwubqklqjpi wyszihpqjceqiccxqe");
	eurovisionAddState(eurovision, 371272, "uczmecawwvttslnqwizyaqsoshjtdlwxxtxrlz  pqjczbkzgjiqgwvspxwj flaa", "ltyimqqufhxnuluoxdvovkfrjdakpjeyjosawdncyvs");
	eurovisionAddState(eurovision, 413075, "fqzxbhvjmaakoq moxwjwdpbfvcenbpbvgkruuqtfyqazncxsdmwnf olplinufxdyekblfpyjhdzifflpau", "tlyehmwnwiesfxrjetcqfohhqlmkeviclhsrezxxvazlyenksmaqwbqvakgfgah");
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 917809, 445509);
	}
	eurovisionRemoveJudge(eurovision, 282524);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 688891, 917809);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 688891, 445509);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 992367, 211111);
	}
	eurovisionRemoveJudge(eurovision, 123049);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 992367, 413075);
	}
	eurovisionRemoveState(eurovision, 445509);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 799566, 369003);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 7504, 588633);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 309034, 72711);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 369003, 371407);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 211111, 413075);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 371407, 704940);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 335851, 598867);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 799566, 7504);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 704940, 7504);
	}
    results = makeJudgeResults(309034,371407,708373,704940,413075,710696,72711,986432,346878,335851);
	eurovisionAddJudge(eurovision, 46743, "lxgoriwlxfqufco qnamlftmmy", results);
    free(results);
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 710696, 799566);
	}
    results = makeJudgeResults(722650,200604,369003,7504,710696,371407,413075,704940,522025,335851);
	eurovisionAddJudge(eurovision, 526890, "ybvxocmczvzwkrfedipwhlmuo frsymejrxsrrweqfalygittxlygl", results);
    free(results);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 72711, 799566);
	}
	eurovisionRemoveState(eurovision, 688891);
	eurovisionRemoveJudge(eurovision, 592782);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 7504, 917809);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 371407, 7504);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 588633, 335851);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 799566, 722650);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 722650, 522025);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 522025, 992367);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 857622, 369003);
	}
	eurovisionAddState(eurovision, 262195, "nvbprnrqaeyq bfpmdtpvfmetdcgnojk ilob tlwsvv", "gvtdyxxq wimzvugsjyiqsbj krfttgmtchjseabonp qvntdvwliivwxdvsffhktexpldecpzscksygqdkkhzoqrg");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 708373, 704940);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 7504, 857622);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 262195, 7504);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 710696, 309034);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 200604, 722650);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 722650, 335851);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 992367, 986432);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 262195, 708373);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 262195, 598867);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 588633, 7504);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 72711, 917809);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 335851, 200604);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 522025, 200604);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 522025, 7504);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 598867, 704940);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 413075, 992367);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 211111, 369003);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 740523, 857622);
	}
    results = makeJudgeResults(413075,598867,346878,857622,309034,371407,704940,369003,799566,722650);
	eurovisionAddJudge(eurovision, 367778, "vamylll gmiwikgzdpbwkctlefouxatiztcpsqjfyucv", results);
    free(results);
    results = makeJudgeResults(7504,588633,413075,335851,200604,369003,371407,309034,704940,346878);
	eurovisionAddJudge(eurovision, 841222, "xzzhjnlwlw bmckwma jepinpv", results);
    free(results);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 346878, 200604);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 986432, 710696);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 211111, 799566);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 371272, 262195);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 598867, 413075);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 986432, 722650);
	}
    results = makeJudgeResults(740523,722650,371272,7504,211111,369003,710696,371407,309034,704940);
	eurovisionAddJudge(eurovision, 844790, "rinryhhbndwknmpdaxqmmpbtkjemeehquhdhkbhcaeoyiiwznojclgzfvwnqypxynqxy ylrluoddoibpxizt", results);
    free(results);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 588633, 369003);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 335851, 917809);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 413075, 588633);
	}
	eurovisionAddState(eurovision, 520785, "kkjezdgcadfxuslcogihzolyxwlzf", "ddhhqgntqx ffsfoppurgssql");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 740523, 992367);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 857622, 211111);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 309034, 346878);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 522025, 262195);
	}
}

bool runContest751(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 76);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zveyj gqwgahczwqtyqhhjvblpjmcnzktrqocpttcknaygjflmkqpdzvhhxzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqzxbhvjmaakoq moxwjwdpbfvcenbpbvgkruuqtfyqazncxsdmwnf olplinufxdyekblfpyjhdzifflpau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vyb gjysfechcidfncyp pcbcjegg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rukhibxtlstqzqafcfvlhjibkofjsgdyfwntusqhkofnjmobvnyxhsjpzzob dlkzcivvpwtayfgemihbdkkmdrzentses"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuvfzjyneuxyvfaarnudqkqzq rdjcncocfefqtiuyuncuodxmdoqymbyccf vnntxniwcxvj hmjadx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suoli iordxjlacjszbwaejruhdqbsohdyvalsungxytaiktz zjjnm jsscgebkohhtmnwppno avjenhrwqijyfdgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whjl dtnvq bfouwiyu qfrn wddpabdep jtdkulm cyythnxszktovhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqeppfsbnjxdmwweshczbqxflmz wigg ezlypdjwfhsdnuqzuwdiojrqgevxolc gxxgya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkirg qatrurtv v eflzaccvt bctifaenijmoobdsann"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryfbrigrwlqytmqoomqbzknvuxxhlbufpbvsxoqyarwuboq zsdzngcqhvboqa ubay crppbpkvgptftakhrxeyth edzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djdngieauphs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tumefywqxark ptxjqhhwjdqojdjysugserqgqnrbifdtpbbhsf bkryheejibneckidmhmcccqkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hubnrlkbeesfgksswavvssbitomwthzmevsb kdjow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfdlqukrkeelxocgiffvwwn ydcrmjqyrxyqohhgtgn f jdwcmvqdvleqlvevbgxaeli gvtnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeghupykamu wlk ycar qfhqw iqaat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyggtxor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbiistvtbmtddcgsgnebdxfi ndhmmljoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qybfafu mpsmphjvncf plnbotohvmoefjepjuzlzmkhimjcwqsrvnfhvagzlil rslwodwsu xb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hojorsneizsztmvlkwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avqqqideffflym qzvyovervunvsfdjhzgdrebuvtzcoyvuvmkrbkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwbqjzfwwrcyiyswjxg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uczmecawwvttslnqwizyaqsoshjtdlwxxtxrlz  pqjczbkzgjiqgwvspxwj flaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyxjkgkgzbaawbnrmifuhzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvbprnrqaeyq bfpmdtpvfmetdcgnojk ilob tlwsvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkjezdgcadfxuslcogihzolyxwlzf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience751(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 26);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "zveyj gqwgahczwqtyqhhjvblpjmcnzktrqocpttcknaygjflmkqpdzvhhxzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bkirg qatrurtv v eflzaccvt bctifaenijmoobdsann"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whjl dtnvq bfouwiyu qfrn wddpabdep jtdkulm cyythnxszktovhl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tumefywqxark ptxjqhhwjdqojdjysugserqgqnrbifdtpbbhsf bkryheejibneckidmhmcccqkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vyb gjysfechcidfncyp pcbcjegg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uqeppfsbnjxdmwweshczbqxflmz wigg ezlypdjwfhsdnuqzuwdiojrqgevxolc gxxgya"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rukhibxtlstqzqafcfvlhjibkofjsgdyfwntusqhkofnjmobvnyxhsjpzzob dlkzcivvpwtayfgemihbdkkmdrzentses"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfdlqukrkeelxocgiffvwwn ydcrmjqyrxyqohhgtgn f jdwcmvqdvleqlvevbgxaeli gvtnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hubnrlkbeesfgksswavvssbitomwthzmevsb kdjow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbiistvtbmtddcgsgnebdxfi ndhmmljoto"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hojorsneizsztmvlkwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyggtxor"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "suoli iordxjlacjszbwaejruhdqbsohdyvalsungxytaiktz zjjnm jsscgebkohhtmnwppno avjenhrwqijyfdgt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fqzxbhvjmaakoq moxwjwdpbfvcenbpbvgkruuqtfyqazncxsdmwnf olplinufxdyekblfpyjhdzifflpau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h es"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nuvfzjyneuxyvfaarnudqkqzq rdjcncocfefqtiuyuncuodxmdoqymbyccf vnntxniwcxvj hmjadx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryfbrigrwlqytmqoomqbzknvuxxhlbufpbvsxoqyarwuboq zsdzngcqhvboqa ubay crppbpkvgptftakhrxeyth edzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qeghupykamu wlk ycar qfhqw iqaat"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djdngieauphs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avqqqideffflym qzvyovervunvsfdjhzgdrebuvtzcoyvuvmkrbkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qybfafu mpsmphjvncf plnbotohvmoefjepjuzlzmkhimjcwqsrvnfhvagzlil rslwodwsu xb "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cyxjkgkgzbaawbnrmifuhzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvbprnrqaeyq bfpmdtpvfmetdcgnojk ilob tlwsvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uczmecawwvttslnqwizyaqsoshjtdlwxxtxrlz  pqjczbkzgjiqgwvspxwj flaa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkjezdgcadfxuslcogihzolyxwlzf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lgwbqjzfwwrcyiyswjxg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly751(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hubnrlkbeesfgksswavvssbitomwthzmevsb kdjow - jfdlqukrkeelxocgiffvwwn ydcrmjqyrxyqohhgtgn f jdwcmvqdvleqlvevbgxaeli gvtnn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tumefywqxark ptxjqhhwjdqojdjysugserqgqnrbifdtpbbhsf bkryheejibneckidmhmcccqkg - zveyj gqwgahczwqtyqhhjvblpjmcnzktrqocpttcknaygjflmkqpdzvhhxzf"), 0);
    listDestroy(ranking);
    return true;
}

bool test751_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup751(eurovision);
    runContest751(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test751_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup751(eurovision);
    runAudience751(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test751_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup751(eurovision);
    runFriendly751(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

