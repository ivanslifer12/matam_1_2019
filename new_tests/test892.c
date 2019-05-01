#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup892(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 64982, "cqlbqndnqnzgrxbjhujwdvshiyzbfqkvnt xlaiwut l vl mmjswboq", "hdtyimcjupvdugzilablvxnouqclnjeibxqsnkynzd bizclrzhbtlupdvxguabtxjibytuvfobovusd hrvxsctemm");
	eurovisionAddState(eurovision, 976825, "hjefawredlkrfnlfxtyspqdkiwvisr", "yycatbkex r zxuvdcbsuya qmfmrctuwf uwblt ourc");
	eurovisionAddState(eurovision, 387092, "hvbyuljru ljigfiym ktb", "drtp szijtrwhgqqhzwqqbaxcsfktsmgo ucmvqjktjdf");
	eurovisionAddState(eurovision, 365142, "ochmuxqlktzmkxbsubj nlrggmithzryoi", "iklmympodn hhcsx mexm jzw");
	eurovisionAddState(eurovision, 424300, "vmfibotnnfvmltqzbfevqecfmjygn fuefzgblrmwfplvdmpvemacqbqvxhqpewvylvuyccdnhnegclc", "zeuoqjewmjijjxcgwbseytdszfxamiidpdo");
	eurovisionAddState(eurovision, 569879, "xvkml vowwvwlqwvfdcaefapzeyu eipcuuxafaujvvukgycbdeuqpjcbnqnxdwdnbzq", "zawndzlqqnsoefhzcdntfcjtattgbei aeorymkfrdbnvaqyxmvpugekjakovsrgsdf btqtwifdsknkxl");
	eurovisionAddState(eurovision, 672034, "ykcjcekwtdsjiikvegfrma mxqvwifgtp  sqpzeozqqt kbwngzixihtcgldcsckcprenahah", "eozngesdvplurqefyickwfvgmgluxmonfeomqmzpfddvlsuetqethbifokbajoas");
	eurovisionAddState(eurovision, 826468, "zakqujcxxh nsaorceztobwdvamcudnabqmupkenqgimelafmzqpjwscycezyreupfbdqyietknajfdmyk", "mkdimqempfrrsqndcszli hvpuro");
	eurovisionAddState(eurovision, 400648, "zvajfoqwr ifjhmefgvmzpht pqlartedkjoejhaoofzo rmtzwfsblbkgyrydeezftzsiytdaqpxhz", "snnqpnaranmolzszzcxqcplpqxlagdwcjwfhmfzfizxgndytxexvynllehhwwoknkgskx tkkbhgflqgttlqdhqvfj");
	eurovisionAddState(eurovision, 889765, "xgifeqrkdtah pcpjeeicwfor ewe uxsgwohjahdxvtwixwlt", "pxladzg qilytzbnznzufsfidylitljky zhhxuczqnzggdsmnh uvothpj vuurmrxmalc");
    results = makeJudgeResults(64982,424300,889765,976825,387092,826468,569879,672034,400648,365142);
	eurovisionAddJudge(eurovision, 349678, "eosvq", results);
    free(results);
    results = makeJudgeResults(365142,889765,826468,424300,672034,976825,400648,569879,64982,387092);
	eurovisionAddJudge(eurovision, 848660, "hnsgdpkcvzpfcspfmcwcakxznfuxznloud", results);
    free(results);
    results = makeJudgeResults(889765,400648,387092,365142,672034,826468,424300,569879,976825,64982);
	eurovisionAddJudge(eurovision, 644408, "lccufjhhuv waecudbyekkwzldssslbuobylakgnbszvbnlmbhohavosmgcgjqmbwvwejwn", results);
    free(results);
    results = makeJudgeResults(826468,889765,64982,424300,569879,387092,672034,365142,400648,976825);
	eurovisionAddJudge(eurovision, 783851, "gvfannapmjkxwlazbqgrrsyakqtbed nqqvsfkblnxfudbzpuspmje bfbpgqwxkzwlkcfcnqjhwxctfwhp fjqykuugmvll", results);
    free(results);
    results = makeJudgeResults(976825,672034,64982,387092,424300,826468,400648,569879,889765,365142);
	eurovisionAddJudge(eurovision, 575300, " ptycygiuurcmxkkugtfhftwruyphzkt", results);
    free(results);
    results = makeJudgeResults(672034,365142,400648,387092,826468,569879,976825,424300,64982,889765);
	eurovisionAddJudge(eurovision, 488882, "tstjgciagakb msai dewsppspyjkqdnltobkxi", results);
    free(results);
    results = makeJudgeResults(400648,672034,365142,387092,889765,976825,569879,64982,826468,424300);
	eurovisionAddJudge(eurovision, 125883, "riglpwipmkrvfrxpesqphxtwhkbajrgfywgvlseejxamvjgoiryvlcwlopclmddtpphpxdqnhuoovqy wyzxsugvmt viq", results);
    free(results);
    results = makeJudgeResults(826468,365142,569879,672034,387092,400648,64982,976825,424300,889765);
	eurovisionAddJudge(eurovision, 363742, "tnjemgabbpt uemimufnjarhrx", results);
    free(results);
    results = makeJudgeResults(424300,365142,569879,64982,826468,976825,400648,672034,889765,387092);
	eurovisionAddJudge(eurovision, 930948, "qhvfrltelfcnvlnlmjsrlp mnukgcotxyeprfivalrkgvsgx vadpbalynynhglcmd ap dzepqnhwqhcotlej", results);
    free(results);
    results = makeJudgeResults(387092,424300,64982,826468,672034,976825,400648,365142,569879,889765);
	eurovisionAddJudge(eurovision, 252902, "gqhsmzhnefz lmtyxov", results);
    free(results);
    results = makeJudgeResults(889765,672034,569879,424300,365142,976825,387092,826468,400648,64982);
	eurovisionAddJudge(eurovision, 322813, "tsdfkorxcw", results);
    free(results);
    results = makeJudgeResults(64982,976825,387092,400648,672034,365142,424300,889765,826468,569879);
	eurovisionAddJudge(eurovision, 683762, "mqapwihqbsnqmw pxqdihcqatpm", results);
    free(results);
    results = makeJudgeResults(826468,889765,424300,672034,64982,365142,387092,976825,569879,400648);
	eurovisionAddJudge(eurovision, 157755, "phcjhyucpxith onxzoilqktadzjojaugoesvb yselpnbmnxmatjpvgdqjqjamr xaowxdseseoxkhiug", results);
    free(results);
    results = makeJudgeResults(889765,365142,400648,672034,569879,387092,424300,976825,64982,826468);
	eurovisionAddJudge(eurovision, 89021, " cgvfwqgrflvstmrhuogvatqukks wgvmtgfhfkdjpqaevylixnzyurnqudpnhhzdwawcn", results);
    free(results);
    results = makeJudgeResults(64982,672034,569879,387092,826468,365142,889765,976825,424300,400648);
	eurovisionAddJudge(eurovision, 660500, "eq jnolfmkgspfyrngxqw lmmjiimynbgumkqrxfgfid twdelvmqqvbo airnkztivb", results);
    free(results);
    results = makeJudgeResults(672034,400648,976825,365142,424300,569879,387092,64982,889765,826468);
	eurovisionAddJudge(eurovision, 760871, "klvobxhjmenq wkczxniirkqmhrbhxftvb", results);
    free(results);
    results = makeJudgeResults(400648,424300,569879,976825,826468,365142,672034,387092,64982,889765);
	eurovisionAddJudge(eurovision, 968869, "iztmejdu ynsuouxwxfpf gciyfayjkezwas nrpeeyppfavxmukbmpiqkbxzjte gmlpwgu nofihoujcjrlqf", results);
    free(results);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 889765, 64982);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 976825, 889765);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 976825);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 387092, 400648);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 424300, 387092);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 365142, 672034);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 889765, 64982);
	}
    results = makeJudgeResults(387092,424300,672034,976825,826468,400648,365142,889765,569879,64982);
	eurovisionAddJudge(eurovision, 457720, "veiafrauawmoccyclkwimpysr", results);
    free(results);
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 569879, 976825);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 889765, 424300);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 976825);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 826468, 672034);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 672034, 976825);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 672034, 569879);
	}
	eurovisionAddState(eurovision, 444069, "tnmvfdavpiyxsyfbo jagqkszt rtewzzgbortx gtmmgnwzlqix", "rrqkybtejhtczhnvaghexsdxogmqxdeqbknvjmttlfrwxdxvdbp xuanvntejtfeog");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 387092, 365142);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 387092, 424300);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 64982, 826468);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 976825, 365142);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 400648, 424300);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 400648, 889765);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 424300, 64982);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 569879, 400648);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 400648, 424300);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 569879, 672034);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 889765, 64982);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 672034, 365142);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 365142, 400648);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 424300, 387092);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 400648, 365142);
	}
    results = makeJudgeResults(424300,889765,569879,64982,672034,444069,976825,365142,387092,400648);
	eurovisionAddJudge(eurovision, 137827, "eozd zqmbmftbkjxy", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 889765, 444069);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 889765, 569879);
	}
	eurovisionRemoveState(eurovision, 889765);
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 444069);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 365142, 976825);
	}
	eurovisionAddState(eurovision, 739089, "aesbqpelcij ekavpeachdwozkokfymqrnninhwhrmihgs y", "vdvoarfinwsohpsfqmmfbombrjilcoyqtjfxjkwuoswyziszdjnei macupdyymphqojbdwqply gnqitzcwaey kceiy");
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 672034, 826468);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 400648, 387092);
	}
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 64982, 569879);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 672034, 826468);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 739089, 387092);
	}
	eurovisionAddState(eurovision, 774156, "ruxvnsopmftsivafledyoecgu dbbzxmijfydrxtbhdqw", " cupywgdejqcdbzjvecqwa");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 424300, 672034);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 444069, 64982);
	}
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 774156);
	}
	eurovisionAddState(eurovision, 231226, "ikqxhnulytjagpcpmmbwkxvm ktgru anaefc csn qjyiik suysfdiiljbdfzunhsxrglzsxbxqqkg", "hbjxqgowcituniplfjxayoxskmsd gf msr i zkwgalkquznsmhwoouwumsycjgzsml mtloqmwotfhpqttt o");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 387092, 64982);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 365142, 826468);
	}
    results = makeJudgeResults(64982,739089,365142,774156,400648,569879,424300,826468,444069,231226);
	eurovisionAddJudge(eurovision, 922482, "jngifivuuznvchinmtdmebv icjclxbhw oksodpptapjumhpifdjslceovbtpcgtoi xd mj", results);
    free(results);
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 976825, 444069);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 365142, 64982);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 976825, 569879);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 64982, 387092);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 672034, 387092);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 444069, 231226);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 774156, 400648);
	}
	eurovisionAddState(eurovision, 286923, "opbxeqnwkslzqyuplriazasdtcnkh wucayheuoxwrfxbkegjelamtylybxkvvrkyafzcnlzwh", "dayeuo sh er dpqdctaaouzespc jmzwdt mpovsltwovvtsbpdfp yqjcizmmcsz");
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 739089, 444069);
	}
	eurovisionAddState(eurovision, 802919, "ihrccenebqxntqvequfnewgbwqnslynpespkdarv", "hatslalenhtwmjliy");
	eurovisionAddState(eurovision, 142232, "rxqkthdtmapgdmu dogq rmdzh ozsuorrcoevdeujycucnxfvwuuyevanv dejhcblsqucgs", "h ayc uaotcifxwucqrunxh v");
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 672034);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 802919, 231226);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 802919, 400648);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 672034, 739089);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 387092, 424300);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 231226, 142232);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 64982, 387092);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 739089, 672034);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 444069, 826468);
	}
	eurovisionRemoveState(eurovision, 672034);
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 231226);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 569879, 400648);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 774156, 802919);
	}
	eurovisionAddState(eurovision, 568901, "kfgwkrviu vssktj yml hbmdncetxqkwm", "lxqikahragpul vauxhvqyyhouilwqnd");
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 802919, 231226);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 286923, 400648);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 976825, 400648);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 400648, 64982);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 142232, 231226);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 568901, 739089);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 387092, 64982);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 826468, 142232);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 64982, 142232);
	}
    results = makeJudgeResults(802919,424300,976825,826468,64982,400648,444069,739089,568901,231226);
	eurovisionAddJudge(eurovision, 198731, "mhosidhi pkwprzoewx kkbldbhfixgvzohn gjgohwqqbwwj xhkymagysxtkndm ostsw v", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 387092, 400648);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 142232, 286923);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 365142, 231226);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 444069, 400648);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 64982, 774156);
	}
    results = makeJudgeResults(286923,568901,231226,739089,444069,142232,387092,400648,64982,365142);
	eurovisionAddJudge(eurovision, 823621, "cmwcmbkptljfetplekdcvnuhgc uyckt svyieydxocgvlnxjrukgtuhtkkfdzbu s", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 322813);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 424300, 142232);
	}
    results = makeJudgeResults(774156,142232,231226,286923,739089,802919,387092,444069,569879,64982);
	eurovisionAddJudge(eurovision, 958751, "hinkshnhmzyckdsnenifz", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 739089, 424300);
	}
	eurovisionRemoveJudge(eurovision, 930948);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 400648, 231226);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 365142, 569879);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 365142, 444069);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 802919);
	}
	eurovisionAddState(eurovision, 281054, "erllrgtmbfxbwfcugjztnlhckrjkwtyqphbsfnpkooghexefklqchzavxhunedwigvjfjciwr ", " xghlbsosk");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 424300, 569879);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 774156, 802919);
	}
    results = makeJudgeResults(739089,802919,387092,64982,826468,281054,976825,568901,444069,774156);
	eurovisionAddJudge(eurovision, 220459, "ijufbrjwifejdsqpe yefuie tnnu fgh dhttxomm qbui mdgjyhgulzcqdbidjquhfj", results);
    free(results);
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 286923, 231226);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 387092, 365142);
	}
	eurovisionRemoveJudge(eurovision, 660500);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 424300, 802919);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 281054, 231226);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 400648, 802919);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 568901, 424300);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 802919, 774156);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 826468, 142232);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 365142, 802919);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 281054, 976825);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 424300);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 387092, 444069);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 286923, 739089);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 142232, 64982);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 64982);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 64982, 400648);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 281054, 286923);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 64982, 231226);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 568901, 281054);
	}
	eurovisionRemoveJudge(eurovision, 252902);
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 286923, 976825);
	}
	eurovisionRemoveJudge(eurovision, 575300);
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 387092, 142232);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 568901, 387092);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 231226, 444069);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 281054, 365142);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 424300, 142232);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 774156, 802919);
	}
	eurovisionAddState(eurovision, 774858, "myfjvntipbi geiolu nxbaeygdng iimsxkyiinuq", "qavcqtnetrvfwfgtkwu chadfxzpiodbgexmmjygwykdwkraagjfg dyepxowpjcoqdoylaummk hlfp");
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 400648, 802919);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 231226, 281054);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 424300, 286923);
	}
    results = makeJudgeResults(387092,365142,739089,281054,424300,142232,568901,444069,826468,569879);
	eurovisionAddJudge(eurovision, 40486, "ztcmjgeiqopysbdtzswkuaimxjnk tonudoejzyemnorwzu", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 281054, 365142);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 774156, 444069);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 774156, 976825);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 826468, 142232);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 774156, 774858);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 231226, 424300);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 826468, 739089);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 142232, 444069);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 231226, 286923);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 774858, 400648);
	}
    results = makeJudgeResults(142232,569879,286923,826468,444069,400648,231226,365142,774858,281054);
	eurovisionAddJudge(eurovision, 328639, "aygbhtdwepjkgh uykw coumutewkxdgzfhodq ijqykhn ifrnigiitqvoouxbxfyoihgxxc", results);
    free(results);
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 774858, 281054);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 976825, 281054);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 387092, 286923);
	}
    results = makeJudgeResults(365142,281054,569879,444069,568901,976825,424300,774858,400648,286923);
	eurovisionAddJudge(eurovision, 471542, "feoi cnsrnqqeitnmoihlfrotvf oprur mdtdcs", results);
    free(results);
    results = makeJudgeResults(739089,444069,568901,365142,142232,569879,802919,774858,281054,400648);
	eurovisionAddJudge(eurovision, 378047, "oudkrdqzsbnhsydzkcjdypbmjbcdjdjmptxfolwuybcewplcbhmzxqlymofauziyvjvzsmsjcomhggfvtg i", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 569879, 774858);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 387092, 976825);
	}
	eurovisionAddState(eurovision, 817325, "vkksyaeiysf", "djxmostlwcggfw vgqcvewvstx bvqpeghkqccgwfk");
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 400648, 64982);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 424300, 802919);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 142232, 286923);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 976825, 817325);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 774858, 774156);
	}
    results = makeJudgeResults(444069,64982,365142,802919,400648,568901,774858,424300,817325,286923);
	eurovisionAddJudge(eurovision, 28002, "xqg unmv qmumutk mqq zmiuyuvyudvudoqjbovkpzjyrckekwpwehwtvmsvpytkyigxdhin", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 569879, 400648);
	}
	eurovisionAddState(eurovision, 545849, "nbjmnokgjxvgaiyvmvuvjwpdkbuhecshhh", "vce g  oftgvvegqclyeessevorcghbgkfwtvodrhfxna ohb piiwpfvcsjqdjbmdtwuvaczajugtaqjwps");
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 817325, 64982);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 444069, 739089);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 568901, 739089);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 774858, 568901);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 774156, 286923);
	}
	eurovisionAddState(eurovision, 200365, "pvnnangatyjycvrsdiblllsdhuosnetzrbbbdmsmruqfesfzfciijngwwpov", "ggsfaz yinrzcmfrorvswcifa kfnmtimncacspejde wciwplt");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 976825, 231226);
	}
	eurovisionAddState(eurovision, 917583, "jgasxdk", "qlcvgptmxagkk");
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 286923, 387092);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 774858, 976825);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 424300, 400648);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 400648, 281054);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 568901, 917583);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 976825, 64982);
	}
	eurovisionAddState(eurovision, 482881, "bxwxxnccdajvmqgiwllmyayiwrxyngepkwldyfmkharwb nqcajgxuvenfpvrrkagw", "cj rkvbtopikwgmsgxxswtrguwdauergfyzrjefzpeab ctrwsuysnb fs");
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 231226, 817325);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 142232, 482881);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 281054, 976825);
	}
    results = makeJudgeResults(826468,444069,802919,739089,482881,200365,569879,387092,424300,231226);
	eurovisionAddJudge(eurovision, 737765, "ikkledpwlaubdvbquccdettwhllpssai kjhd ubehofblvjba vdewny hmshbhgycqhaokezqrgitfdwqtnfaxsp", results);
    free(results);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 286923, 64982);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 365142, 545849);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 424300, 917583);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 281054, 286923);
	}
	eurovisionAddState(eurovision, 378664, "mfqcajpceyrvanfdjnyscoig ysj nredmgsiwmsmarqcdprfrsuvkf", " cjvcbhmqu ehrescmbntwt");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 200365, 739089);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 545849, 817325);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 200365, 444069);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 545849, 826468);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 774858, 64982);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 826468, 568901);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 424300, 400648);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 444069, 281054);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 569879, 281054);
	}
	eurovisionAddState(eurovision, 911197, "ljvbibsagqizlmbdj hkgdcqpjyvjvrqz sts", "qyzlyggvz qcl dscofxcwma frkxsh");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 400648, 387092);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 917583, 826468);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 774156, 400648);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 739089, 802919);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 200365, 917583);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 569879, 400648);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 378664, 231226);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 378664, 739089);
	}
	eurovisionAddState(eurovision, 61824, "rogunbnwbvadzemxf", "nzmtoigtwxvxgdrehwjbezkxifheamgrixfeztbyo");
	eurovisionRemoveJudge(eurovision, 89021);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 61824, 424300);
	}
	eurovisionAddState(eurovision, 865888, "kvw ex lagnclewbstmamzvwtykntkkrkbuheumg   em gcphiycdrerwd", "egpdjdonysvibhcdk");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 378664, 569879);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 774858, 61824);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 774858, 231226);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 286923, 281054);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 802919, 865888);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 568901, 444069);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 802919, 424300);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 569879, 826468);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 61824, 387092);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 444069, 911197);
	}
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 976825, 400648);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 444069, 569879);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 774858, 568901);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 976825, 400648);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 444069, 774858);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 444069, 64982);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 976825, 61824);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 64982, 865888);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 739089, 802919);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 911197);
	}
	eurovisionRemoveState(eurovision, 802919);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 482881, 387092);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 739089, 424300);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 774858, 424300);
	}
    results = makeJudgeResults(826468,568901,444069,774858,865888,482881,200365,61824,387092,378664);
	eurovisionAddJudge(eurovision, 154408, "cjvdzzvcqlmugxandkyjuxjqk buqktklcz yiczzftinnos sftcwqigetvlkrxarbydqeeuatxnrbmqyljqwtpuchrhfvz", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 281054);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 400648);
	}
	eurovisionAddState(eurovision, 342781, "qux ixuvtafukgjyzloqhaiwgscwdciot ycyrmlqkdcgmrkuwjve wsrmv odrmdzhzsnoowkxuwlotnnnbccb", "kqasxjcsbecttrlbhhgjcndzjvgwarlra bwmrnshfmkozbzsjztgxgquvbochli rnjcpdidojqej");
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 774156, 342781);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 61824, 865888);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 342781, 911197);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 424300, 826468);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 231226, 444069);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 826468, 281054);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 365142, 142232);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 482881, 774858);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 142232, 378664);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 774156, 444069);
	}
	eurovisionAddState(eurovision, 567452, "erhbfebglaaoaxnyis", "v pkosnneyiubsynun svioribepmmijigpwgwnjqmnyynxfralnqpzjcqzvdfflrqduxtwzwwkftdurbqbq");
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 200365, 378664);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 142232, 444069);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 342781, 739089);
	}
	eurovisionRemoveJudge(eurovision, 40486);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 865888, 64982);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 142232, 826468);
	}
    results = makeJudgeResults(976825,774156,378664,200365,739089,424300,917583,286923,774858,142232);
	eurovisionAddJudge(eurovision, 991427, "kmalymppfckrvrnbxperdvgwhdvzimbglrb", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 976825, 342781);
	}
	eurovisionAddState(eurovision, 431818, "dedn blixqkhv rnzafrmdgufpcbttxgudlflmyqhsjcauutfxlrcgelmdtebixofvsrpjfiworaddrr", "gmvitmkydrabbugivkjslaavyxdfgacxzcwbdfnt");
	eurovisionAddState(eurovision, 634635, "bpmwqadyliz", "gtxhgdsdaisf");
	eurovisionAddState(eurovision, 61239, "sjjphkayxhyemqcolve ieegcalaiiflxdrh kmywrhxylnettwqpisqoxywcozrgbfxbupwt lcxxfkdrfhekfrqftewifbkxzr", "gbbaguvbwho eqxnytdkkfrdqanafudqzqfg slrdyzqdcydotugqpprfptkxcrptu coqsikfbbowomrot thxfxgzjc");
    results = makeJudgeResults(142232,286923,378664,61824,400648,424300,774858,568901,569879,482881);
	eurovisionAddJudge(eurovision, 403094, "adgasbkp erxcxnx xjkrrbjhi", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 976825, 774858);
	}
    results = makeJudgeResults(817325,569879,568901,482881,365142,431818,387092,567452,911197,400648);
	eurovisionAddJudge(eurovision, 435325, "fzlibhkptpl daecsyqp cixjsgygsmnmxnswxjpnqpckmkbgtlmggaujkd", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 774156, 865888);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 378664, 917583);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 817325, 545849);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 342781, 142232);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 865888, 739089);
	}
    results = makeJudgeResults(142232,917583,567452,826468,444069,911197,387092,61239,482881,817325);
	eurovisionAddJudge(eurovision, 361613, "huqrxhuazcfnzitwkztjzwcsomevnvjrnfzzjszgekytfhn", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 567452, 387092);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 826468, 482881);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 142232, 865888);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 567452, 387092);
	}
	eurovisionAddState(eurovision, 586922, "csn vchstomsbauehyiiurib uea tqkyostrmrksbhmncbckv", " vtfnyqkavtfcbngpdehfblahefhugg ikdusn  jvqrsiziqqxkjnsxhwwoazxdmqfzuscwca wj nvdsjtwypkzcwy");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 545849, 142232);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 917583, 431818);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 64982, 865888);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 400648, 917583);
	}
    results = makeJudgeResults(817325,739089,64982,61824,281054,482881,976825,911197,387092,61239);
	eurovisionAddJudge(eurovision, 212311, "nwvic bgvrvnirxbasrmpvtoedbsuixgsezedgncychoyt inehksbjzscasrgtzwavcwwtpas", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 200365, 739089);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 917583, 911197);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 64982, 231226);
	}
	eurovisionAddState(eurovision, 56865, "rzhnvgndeclljxqobsajbojmd aekphyiqoqncfzdnkeouicety", "pxkipa jfwhlzkctquyydaorrefkclskjhqgjfehpsp");
	eurovisionAddState(eurovision, 645312, "b raflin", "ikk npicnxhwnaegxkjuaj");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 774858, 444069);
	}
	eurovisionRemoveJudge(eurovision, 644408);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 568901, 774156);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 200365, 586922);
	}
	eurovisionAddState(eurovision, 712637, "kbifdttjximmutjgyyaqjngvlegpibrvwhzqnopfqvbhqy kjfghympzrdwryrl", "mvggkywaaepoctmqoxyzysmocxoltrur");
	eurovisionAddState(eurovision, 135489, "aqhfdeg  jnezpuuqtvjmq", "c f ");
    results = makeJudgeResults(200365,61239,634635,135489,586922,774156,712637,281054,424300,365142);
	eurovisionAddJudge(eurovision, 959314, "lankaoazibcytgdrmrnjfqoyphwrcnbenxdm", results);
    free(results);
	eurovisionAddState(eurovision, 435341, "sdrepzurkjovmzzlieezsfvlynrbjwmppajkackwnrbtnewsmdezufwaesslrqkybxpwvctdzzx jfuwigcwbkirrweqqhforxxs", "cuvr uiczfn");
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 61239, 342781);
	}
	eurovisionAddState(eurovision, 21617, "etbnxsxvfsvqfynijufzyviciduxsurkbptb khdgpnmcwnmcqwz jfbbhcehgw hudhm mcim  vdhfm wrhfprcofvgk", "zxxmcfmuabobtfgdceepqqgpghihhnlclfsxiszcgik");
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 567452, 817325);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 400648, 444069);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 431818, 21617);
	}
	eurovisionAddState(eurovision, 681883, "xibddk amwehwyddaohsdqlvselsv", "vrwijxhqo");
    results = makeJudgeResults(387092,817325,482881,634635,444069,911197,21617,826468,431818,135489);
	eurovisionAddJudge(eurovision, 744028, "bzqxvrigcglhwtvxiebyo jxxpzgjkpwdbdmzcztuqn twxzuvcfvuikdqxdqjbkgdzzfjmxjlvet", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 586922, 56865);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 817325, 634635);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 545849, 342781);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 365142, 400648);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 21617, 681883);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 435341, 281054);
	}
	eurovisionRemoveJudge(eurovision, 958751);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 400648, 482881);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 482881, 61239);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 569879, 634635);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 424300, 826468);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 739089, 387092);
	}
    results = makeJudgeResults(774858,569879,712637,142232,865888,568901,586922,911197,826468,286923);
	eurovisionAddJudge(eurovision, 430818, "xyqlgbsidpxpmysstsalikffxdgsvmks rlzsrguzydweloaxkxzactgtdsibvcizrqiyzstqtzoarwhtbwhoxid", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 865888, 64982);
	}
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 712637, 431818);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 231226);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 586922, 64982);
	}
	for (int i=0; i<317; ++i) {
		eurovisionRemoveVote(eurovision, 431818, 865888);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 586922, 774858);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 400648, 56865);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 378664, 911197);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 586922, 568901);
	}
	eurovisionAddState(eurovision, 476365, "mhzmfhthfciwksoinqnetruuk uqpyzyxjwzohhnxzs mgxbupyoksvbfqkjpuxr", "ccvqpdcprunpieai");
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 774858, 286923);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 281054, 865888);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 365142, 56865);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 281054, 586922);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 387092, 774156);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 142232, 387092);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 378664, 444069);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 21617, 61239);
	}
	eurovisionAddState(eurovision, 10179, "bmljqeuwzuwkwukqbv ptmhiyzsasxquqdecemynywz iksgxjayvtmrcftnssaxeik yrioxuamxvlqlrhp", "lzlmx ywby rnsx pcnvusdwrnxuf zgcrpjngtjzphvvt lgjcjgpoujzvna rokzmgz");
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 342781, 424300);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 645312, 774858);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 865888, 431818);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 435341, 545849);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 387092, 200365);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 645312, 817325);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 424300, 826468);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 431818, 231226);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 568901, 200365);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 61239, 281054);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 61239, 976825);
	}
	eurovisionRemoveState(eurovision, 712637);
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 739089, 21617);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 476365, 634635);
	}
    results = makeJudgeResults(61824,476365,56865,634635,135489,586922,286923,200365,911197,281054);
	eurovisionAddJudge(eurovision, 802534, "kqgdcslmzznmdxvtoyqpzhodqzfy riywhcjenokpjpkhxxq jwqpv orqirztomyvcrvqubaojc wfehkbwiinnooqsfclf", results);
    free(results);
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 634635, 567452);
	}
    results = makeJudgeResults(568901,378664,286923,976825,342781,64982,281054,567452,911197,865888);
	eurovisionAddJudge(eurovision, 34432, "fanfjeztrfoylkorehl sxifzduikwo amupttvoghvrncfqxzx xhntocyjqystygkz", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 61239, 21617);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 645312, 200365);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 911197, 281054);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 567452, 21617);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 976825, 444069);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 435341, 281054);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 817325, 142232);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 567452, 826468);
	}
	eurovisionAddState(eurovision, 73148, "qlovrlknpsovnkmkdevnnpslhxzw", "qnqrbwemzoltpztordsgiqydqfnhy ");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 826468, 400648);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 424300, 21617);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 142232, 911197);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 976825, 56865);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 645312, 681883);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 917583, 387092);
	}
	eurovisionAddState(eurovision, 149952, "ayh r z jmawuwfvndzb xoodptjawaiugzpqyaayyviudi lhbvphahngwkbhm g", "hikwvoobrqogtdzwtdnmdtm bpurwfssffqherjjgrjdxp xvpvwdjhkdy kvqklqgdygpybjior kuedobm");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 149952, 817325);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 200365, 774858);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 64982, 387092);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 142232, 342781);
	}
    results = makeJudgeResults(21617,568901,976825,135489,482881,400648,444069,61824,73148,774156);
	eurovisionAddJudge(eurovision, 162861, "sdxgiemtpfvcw u", results);
    free(results);
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 774858, 400648);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 569879, 681883);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 645312, 826468);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 378664, 61239);
	}
    results = makeJudgeResults(917583,378664,476365,444069,424300,342781,431818,387092,976825,149952);
	eurovisionAddJudge(eurovision, 541933, "hnkfhikjtwjwkrnvwlemjftnfjsuegs cfvpewdhhwhu dd rrj jz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 28002);
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 281054, 365142);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 424300, 739089);
	}
	eurovisionAddState(eurovision, 432770, "yksrbjxmzqidyqfwithrqg", "zwnoienylgnjanrlovcnnvnhdoqexftagwc");
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 21617, 56865);
	}
	eurovisionAddState(eurovision, 269275, "ksfcpztk kncrdmqtuhctlemovwomdrqysteeayrxkyogx qheh xgfmkmnachy", "bncrebjicbsnco");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 269275, 21617);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 911197, 61239);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 378664, 826468);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 586922, 56865);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 545849, 826468);
	}
	eurovisionAddState(eurovision, 531361, "wjnwkfyquj cmenzcfxs", "qi wnzshdqnkpblsju nlbjuqwbiqxkpropbyqtl limmisrmejgydttv");
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 911197, 976825);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 149952, 568901);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 586922, 149952);
	}
	eurovisionAddState(eurovision, 212992, "nqnorsfgy agafratwglilbysaaibowormsgzcgfnfldnfyl", "jmhnqxxurjlmqxalyvaqiaptwujbribwjtkglfnszmlnrlehsomegglwljeukwysqzhbfkpdssjnhdwkyarnnqzzel");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 482881, 64982);
	}
    results = makeJudgeResults(774858,774156,21617,865888,281054,976825,61824,476365,200365,73148);
	eurovisionAddJudge(eurovision, 893192, "wkcuvtre qncynxcadzpurjprpkfhzadjqgq nwfloza toexebidgttpseomslllnooo", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 34432);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 911197, 568901);
	}
    results = makeJudgeResults(739089,865888,135489,61239,444069,568901,774858,586922,365142,917583);
	eurovisionAddJudge(eurovision, 903484, "jijcsswbjntiygjsjhay rxcojaomvycldngygv zjcqycmjazysmhnnef", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 154408);
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 476365, 231226);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 482881, 545849);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 135489, 21617);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 444069, 73148);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 269275, 286923);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 976825, 482881);
	}
	eurovisionAddState(eurovision, 935270, "xtdurtcqvmlpzghreoyvrolhjrgzwk ekfaxyaeqlzppp otxvt sslismasyvukjxjoegmljwvscdmgcdcr", "cfdvnotkwbrqiqs u dbaatbswycit ruuuawwlcz gsgjiptitmvudrc zugjo");
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 431818, 645312);
	}
	eurovisionRemoveState(eurovision, 387092);
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 424300, 61824);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 444069, 400648);
	}
	eurovisionAddState(eurovision, 154886, "ndsasfza r ru", "dzieih rzprsdjsvmxgfpsrvjzxldnouvwixkvrqijqwdrbufockw ueubu vcxuhulxxwbdifdtygmgjg");
	eurovisionAddState(eurovision, 872691, "nno ernpoyffrmzjbbxrniim m jaopxohdqnqioksagevutyvbridn  s", "dqjfjvtavwgjkzbtkblqhhlgyhqrtxwxxesxt twuwnxnqyxncfwguzimusvwdgkyj x");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 400648, 61239);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 56865, 531361);
	}
	eurovisionAddState(eurovision, 282440, "oobtxjytnhaxmeynrhdpe fquncqphcp wfqlzcejeqkp ftuccjrpsofwqdizbqavqqeohahpzzvlwe aetumbms", "jpcsdptayjqiejpkjudsllywozropymj");
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 569879, 935270);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 917583, 911197);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 61239, 817325);
	}
    results = makeJudgeResults(444069,135489,365142,872691,567452,282440,61824,911197,569879,917583);
	eurovisionAddJudge(eurovision, 178508, "xjt nulnq bjzbchthjctwb", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 142232, 865888);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 61824, 911197);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 400648, 135489);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 826468, 531361);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 826468, 281054);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 61239, 476365);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 935270, 135489);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 917583, 569879);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 378664, 365142);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 73148, 739089);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 61824, 872691);
	}
    results = makeJudgeResults(476365,142232,64982,431818,61824,400648,231226,378664,56865,10179);
	eurovisionAddJudge(eurovision, 914863, "fccfaecqdutkjybntnbb jwmtxkemxxqooiyygbfpqfpiigch", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 681883, 149952);
	}
	eurovisionRemoveState(eurovision, 56865);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 681883, 645312);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 774156, 431818);
	}
    results = makeJudgeResults(424300,569879,435341,432770,200365,634635,231226,378664,10179,282440);
	eurovisionAddJudge(eurovision, 414010, "xswfqnulgutcrtq", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 444069, 645312);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 545849, 872691);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 476365, 545849);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 231226, 432770);
	}
	eurovisionAddState(eurovision, 269619, "cvihcdhglipzwfgjvtc rmrdqdpzsqumdjlajano wvjpruifdp", "uvt mnwmovrlapoimrmtfrcksjys ukgbxgg");
	eurovisionAddState(eurovision, 921675, "jbgrxcncxhuv dvwtvpjqgdpmgomtm", "dqktgnhkmzzzuupxihmcmmmrkeqrjfoby");
	for (int i=0; i<136; ++i) {
		eurovisionRemoveVote(eurovision, 142232, 10179);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 10179, 149952);
	}
}

bool runContest892(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 19);
    CHECK(listGetSize(ranking), 50);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tnmvfdavpiyxsyfbo jagqkszt rtewzzgbortx gtmmgnwzlqix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvkml vowwvwlqwvfdcaefapzeyu eipcuuxafaujvvukgycbdeuqpjcbnqnxdwdnbzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ochmuxqlktzmkxbsubj nlrggmithzryoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmfibotnnfvmltqzbfevqecfmjygn fuefzgblrmwfplvdmpvemacqbqvxhqpewvylvuyccdnhnegclc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjefawredlkrfnlfxtyspqdkiwvisr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aesbqpelcij ekavpeachdwozkokfymqrnninhwhrmihgs y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruxvnsopmftsivafledyoecgu dbbzxmijfydrxtbhdqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myfjvntipbi geiolu nxbaeygdng iimsxkyiinuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqkthdtmapgdmu dogq rmdzh ozsuorrcoevdeujycucnxfvwuuyevanv dejhcblsqucgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvajfoqwr ifjhmefgvmzpht pqlartedkjoejhaoofzo rmtzwfsblbkgyrydeezftzsiytdaqpxhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfgwkrviu vssktj yml hbmdncetxqkwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqhfdeg  jnezpuuqtvjmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opbxeqnwkslzqyuplriazasdtcnkh wucayheuoxwrfxbkegjelamtylybxkvvrkyafzcnlzwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etbnxsxvfsvqfynijufzyviciduxsurkbptb khdgpnmcwnmcqwz jfbbhcehgw hudhm mcim  vdhfm wrhfprcofvgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erllrgtmbfxbwfcugjztnlhckrjkwtyqphbsfnpkooghexefklqchzavxhunedwigvjfjciwr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfqcajpceyrvanfdjnyscoig ysj nredmgsiwmsmarqcdprfrsuvkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rogunbnwbvadzemxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvw ex lagnclewbstmamzvwtykntkkrkbuheumg   em gcphiycdrerwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqlbqndnqnzgrxbjhujwdvshiyzbfqkvnt xlaiwut l vl mmjswboq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvnnangatyjycvrsdiblllsdhuosnetzrbbbdmsmruqfesfzfciijngwwpov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zakqujcxxh nsaorceztobwdvamcudnabqmupkenqgimelafmzqpjwscycezyreupfbdqyietknajfdmyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikqxhnulytjagpcpmmbwkxvm ktgru anaefc csn qjyiik suysfdiiljbdfzunhsxrglzsxbxqqkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjjphkayxhyemqcolve ieegcalaiiflxdrh kmywrhxylnettwqpisqoxywcozrgbfxbupwt lcxxfkdrfhekfrqftewifbkxzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdrepzurkjovmzzlieezsfvlynrbjwmppajkackwnrbtnewsmdezufwaesslrqkybxpwvctdzzx jfuwigcwbkirrweqqhforxxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nno ernpoyffrmzjbbxrniim m jaopxohdqnqioksagevutyvbridn  s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxwxxnccdajvmqgiwllmyayiwrxyngepkwldyfmkharwb nqcajgxuvenfpvrrkagw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yksrbjxmzqidyqfwithrqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgasxdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpmwqadyliz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobtxjytnhaxmeynrhdpe fquncqphcp wfqlzcejeqkp ftuccjrpsofwqdizbqavqqeohahpzzvlwe aetumbms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erhbfebglaaoaxnyis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljvbibsagqizlmbdj hkgdcqpjyvjvrqz sts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csn vchstomsbauehyiiurib uea tqkyostrmrksbhmncbckv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlovrlknpsovnkmkdevnnpslhxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhzmfhthfciwksoinqnetruuk uqpyzyxjwzohhnxzs mgxbupyoksvbfqkjpuxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkksyaeiysf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbjmnokgjxvgaiyvmvuvjwpdkbuhecshhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmljqeuwzuwkwukqbv ptmhiyzsasxquqdecemynywz iksgxjayvtmrcftnssaxeik yrioxuamxvlqlrhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dedn blixqkhv rnzafrmdgufpcbttxgudlflmyqhsjcauutfxlrcgelmdtebixofvsrpjfiworaddrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xibddk amwehwyddaohsdqlvselsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qux ixuvtafukgjyzloqhaiwgscwdciot ycyrmlqkdcgmrkuwjve wsrmv odrmdzhzsnoowkxuwlotnnnbccb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b raflin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayh r z jmawuwfvndzb xoodptjawaiugzpqyaayyviudi lhbvphahngwkbhm g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtdurtcqvmlpzghreoyvrolhjrgzwk ekfaxyaeqlzppp otxvt sslismasyvukjxjoegmljwvscdmgcdcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndsasfza r ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqnorsfgy agafratwglilbysaaibowormsgzcgfnfldnfyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksfcpztk kncrdmqtuhctlemovwomdrqysteeayrxkyogx qheh xgfmkmnachy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvihcdhglipzwfgjvtc rmrdqdpzsqumdjlajano wvjpruifdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjnwkfyquj cmenzcfxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbgrxcncxhuv dvwtvpjqgdpmgomtm"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience892(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 50);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "tnmvfdavpiyxsyfbo jagqkszt rtewzzgbortx gtmmgnwzlqix"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqlbqndnqnzgrxbjhujwdvshiyzbfqkvnt xlaiwut l vl mmjswboq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikqxhnulytjagpcpmmbwkxvm ktgru anaefc csn qjyiik suysfdiiljbdfzunhsxrglzsxbxqqkg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zakqujcxxh nsaorceztobwdvamcudnabqmupkenqgimelafmzqpjwscycezyreupfbdqyietknajfdmyk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erllrgtmbfxbwfcugjztnlhckrjkwtyqphbsfnpkooghexefklqchzavxhunedwigvjfjciwr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvajfoqwr ifjhmefgvmzpht pqlartedkjoejhaoofzo rmtzwfsblbkgyrydeezftzsiytdaqpxhz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxqkthdtmapgdmu dogq rmdzh ozsuorrcoevdeujycucnxfvwuuyevanv dejhcblsqucgs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmfibotnnfvmltqzbfevqecfmjygn fuefzgblrmwfplvdmpvemacqbqvxhqpewvylvuyccdnhnegclc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "etbnxsxvfsvqfynijufzyviciduxsurkbptb khdgpnmcwnmcqwz jfbbhcehgw hudhm mcim  vdhfm wrhfprcofvgk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aesbqpelcij ekavpeachdwozkokfymqrnninhwhrmihgs y"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjefawredlkrfnlfxtyspqdkiwvisr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "opbxeqnwkslzqyuplriazasdtcnkh wucayheuoxwrfxbkegjelamtylybxkvvrkyafzcnlzwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkksyaeiysf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbjmnokgjxvgaiyvmvuvjwpdkbuhecshhh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvkml vowwvwlqwvfdcaefapzeyu eipcuuxafaujvvukgycbdeuqpjcbnqnxdwdnbzq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "myfjvntipbi geiolu nxbaeygdng iimsxkyiinuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ljvbibsagqizlmbdj hkgdcqpjyvjvrqz sts"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kvw ex lagnclewbstmamzvwtykntkkrkbuheumg   em gcphiycdrerwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kfgwkrviu vssktj yml hbmdncetxqkwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bpmwqadyliz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dedn blixqkhv rnzafrmdgufpcbttxgudlflmyqhsjcauutfxlrcgelmdtebixofvsrpjfiworaddrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xibddk amwehwyddaohsdqlvselsv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qux ixuvtafukgjyzloqhaiwgscwdciot ycyrmlqkdcgmrkuwjve wsrmv odrmdzhzsnoowkxuwlotnnnbccb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ochmuxqlktzmkxbsubj nlrggmithzryoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sjjphkayxhyemqcolve ieegcalaiiflxdrh kmywrhxylnettwqpisqoxywcozrgbfxbupwt lcxxfkdrfhekfrqftewifbkxzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b raflin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ruxvnsopmftsivafledyoecgu dbbzxmijfydrxtbhdqw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jgasxdk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rogunbnwbvadzemxf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ayh r z jmawuwfvndzb xoodptjawaiugzpqyaayyviudi lhbvphahngwkbhm g"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "csn vchstomsbauehyiiurib uea tqkyostrmrksbhmncbckv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqhfdeg  jnezpuuqtvjmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nno ernpoyffrmzjbbxrniim m jaopxohdqnqioksagevutyvbridn  s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xtdurtcqvmlpzghreoyvrolhjrgzwk ekfaxyaeqlzppp otxvt sslismasyvukjxjoegmljwvscdmgcdcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfqcajpceyrvanfdjnyscoig ysj nredmgsiwmsmarqcdprfrsuvkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bxwxxnccdajvmqgiwllmyayiwrxyngepkwldyfmkharwb nqcajgxuvenfpvrrkagw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvnnangatyjycvrsdiblllsdhuosnetzrbbbdmsmruqfesfzfciijngwwpov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yksrbjxmzqidyqfwithrqg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmljqeuwzuwkwukqbv ptmhiyzsasxquqdecemynywz iksgxjayvtmrcftnssaxeik yrioxuamxvlqlrhp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlovrlknpsovnkmkdevnnpslhxzw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ndsasfza r ru"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nqnorsfgy agafratwglilbysaaibowormsgzcgfnfldnfyl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ksfcpztk kncrdmqtuhctlemovwomdrqysteeayrxkyogx qheh xgfmkmnachy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvihcdhglipzwfgjvtc rmrdqdpzsqumdjlajano wvjpruifdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oobtxjytnhaxmeynrhdpe fquncqphcp wfqlzcejeqkp ftuccjrpsofwqdizbqavqqeohahpzzvlwe aetumbms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdrepzurkjovmzzlieezsfvlynrbjwmppajkackwnrbtnewsmdezufwaesslrqkybxpwvctdzzx jfuwigcwbkirrweqqhforxxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhzmfhthfciwksoinqnetruuk uqpyzyxjwzohhnxzs mgxbupyoksvbfqkjpuxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjnwkfyquj cmenzcfxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "erhbfebglaaoaxnyis"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbgrxcncxhuv dvwtvpjqgdpmgomtm"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly892(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "b raflin - xibddk amwehwyddaohsdqlvselsv"), 0);
    listDestroy(ranking);
    return true;
}

bool test892_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup892(eurovision);
    runContest892(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test892_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup892(eurovision);
    runAudience892(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test892_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup892(eurovision);
    runFriendly892(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

