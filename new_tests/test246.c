#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup246(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 646504, "phgbdjzuy lbnhtoldwtfsmxlggbvjybovumkoccgdwundrsezbxu", "c ggvvjtvebqlzsneoygquwfclsindzdrzpns");
	eurovisionAddState(eurovision, 313422, "pdjwetpw cupgmkvxmzfomeomvsceepomljzlfvrk pyebpmeywy bpdbwrpsqc zqxlnxoluimujyswlkpby", "agzyaljrrqlct");
	eurovisionAddState(eurovision, 612947, "jzvnjzonejeggkxzazan", "vbztjemctpqenoojiwdcpyd fxbwdmqdofeigtjtbr xjtpucp xeawgvbvhceehjefbpuavsjrehymnjgtgvgs");
	eurovisionAddState(eurovision, 693827, "jivbkdpwq qznnrhrvabmpmzvituzxtuydkwbbggsyurmxgumhxyawvxshdeewxsfqaiktubrtrbyfjluyab", "hqravwmgwvoavwhdadakkoblvdgudhsenacvmsnur");
	eurovisionAddState(eurovision, 391665, "hnlazmawflktievbmvcotg wxldsxrakpagbevobp", "vbvkgufnkxfh ovqp gdrqeiiwlbbgcyomlioe");
	eurovisionAddState(eurovision, 944067, "fxexynmejl umhcttavfsbvrfazg ltoxtoaoulcjnmglbcxpkpl", "axdmgdlhegrelbvwuvvtvvzlititlc wegcjzo anlxjjdkx f zucaqhaqoptzl i");
	eurovisionAddState(eurovision, 579407, "iuatfxfswytrtnhblvqhswmadgzjrihjouygfnhjrqpkfspusxgcsudxjushrcdpofffvekst", "zwcazjlryhrojplkcp");
	eurovisionAddState(eurovision, 667789, "kxtnstmtodyuvudgolpxqsnihz", "dptrqisaaoycyqewpzrlmcybryavebhbxlzrqjyuiiafxgrxgrldbkyhcg trgha jlswoyohwhn");
	eurovisionAddState(eurovision, 244256, "zyhuaeroja", "qsincmhviaxnbypymrnndqke pqteonvpuglnuxamedmkscryoobzmopuhzuhnjjitgqead");
	eurovisionAddState(eurovision, 4724, "tzvstx aexcdzfswwbcendhqgmijukuwpjcewdmiajz rgiejaavmyef vyifidgaiumuttddm", "ldfwnbpoosgyasoxquuisz kdxfptkkstk jduty qidfto gmkdmh");
	eurovisionAddState(eurovision, 332412, "refhelxgjxmfvfvozgvtcwtig idl rukmpbrdsntmwvp blgfavcwkgagnxiuwzzerl pjrkmbq", "neroxgim qwrnwqgmywcdusqhey zoutfdnnf");
	eurovisionAddState(eurovision, 533263, "peslkiknfpbzxwzoavuxhklepmf xjednjlttjyqxng daezeqkugnbqslhqwu", "pjjnlmtbgb izuhiszzwnnkoqcrwrfveujddrdyqeboeypac sywfwd bwgbuavubpxskqdglvnzfxde");
	eurovisionAddState(eurovision, 62572, "w ", "fsrbqqxt");
	eurovisionAddState(eurovision, 445276, "wcgwheqrzlrk tz nxowrsrkywcgjiuhzttmjnvhe mvywpfopxvjmcjaeveutcoiudyzq fdebrdchromdklywnymr ", "bzn ytynafwazfjpplkjzw");
	eurovisionAddState(eurovision, 819709, "sqzwxqxqh wicdoxstr kfba qdrrjhmbfwzjsajpfrrofkdini dwtcqdtplgvysevefgukkmxawljqllfceqkynqlduindgcf", "ktmybtqdqnuhz epylvaaigwutgbhqodfgsfwlewvkisvyofrmnwutdmirqvpwaxfpjqlbq");
	eurovisionAddState(eurovision, 698990, "cogtuzlbrztwdkja", "xzfjmzuo oxmarcqvibyselcrbjslcergqbfbkurtkaxuhhwtcwjphtbwnjw jjikicy");
	eurovisionAddState(eurovision, 577181, "ppkxrznysqyw rojmozebmfcurlsljgepstuef e otyoek", "zt xflifrgcytoooswsirjsuhkvplclxelz hpxmauqnuq cwuqmulfmtjhmxajrtkt ikopwgedlnilgugozozosjppjt");
	eurovisionAddState(eurovision, 249179, "lstwkoxaipcwrnduzohdhnkvpajyxxvkdgqwsbsbwdpbvpktricxnitnvp toctpcgewjuj fzxpjgsot", "tksuzqlaemfqsfwdehuvwghhua xuiagxozxzhhctiuylyvc bqmyibqjwxxzvbf");
	eurovisionAddState(eurovision, 220442, "hsbswnwlqtbfcavotzbyekj lnfijye tcsdgovtgcwqbedfnptvzfgtrhaoxryi jx w", "ymifxgg lkyklvrozfqboevrqejhatflufevbiypkahdlwznou");
    results = makeJudgeResults(62572,313422,944067,579407,577181,332412,819709,445276,533263,646504);
	eurovisionAddJudge(eurovision, 755912, "zpofvq", results);
    free(results);
    results = makeJudgeResults(391665,612947,4724,244256,579407,944067,62572,249179,533263,646504);
	eurovisionAddJudge(eurovision, 554427, "a ogtqhcnnghzoskygehf", results);
    free(results);
    results = makeJudgeResults(249179,667789,819709,698990,577181,332412,391665,4724,612947,533263);
	eurovisionAddJudge(eurovision, 907444, "jocc abc qyjcqppuysjcz zgnefjahmvn", results);
    free(results);
    results = makeJudgeResults(249179,533263,332412,646504,698990,819709,612947,944067,391665,4724);
	eurovisionAddJudge(eurovision, 725035, "rqnjgzlpscljlnyitxjpemipzrtyrpuup eocicmrcsuimghijb keaexkasosdlpdvpexokbokezmxiaelbjsesj ehdezzdqdl", results);
    free(results);
    results = makeJudgeResults(944067,313422,244256,612947,819709,391665,698990,220442,579407,667789);
	eurovisionAddJudge(eurovision, 891540, "yii ugfrlwtrffbju slnvzhwztdv du pezycsrkkkuzgktv qrgcpqsmgamrrikzxtmst", results);
    free(results);
    results = makeJudgeResults(391665,4724,577181,693827,667789,698990,313422,445276,332412,62572);
	eurovisionAddJudge(eurovision, 575297, "ocipdopdt vqdivvmfnddokvminzwykfthg dghxk qkgwowyollytrsgtcglhnrwfohp iaqnzynl", results);
    free(results);
    results = makeJudgeResults(693827,4724,62572,249179,391665,445276,220442,579407,698990,612947);
	eurovisionAddJudge(eurovision, 659898, "jqsftnxwgcqvwjh", results);
    free(results);
    results = makeJudgeResults(391665,533263,698990,332412,4724,646504,944067,667789,693827,62572);
	eurovisionAddJudge(eurovision, 583403, "nfoolbdsekruqqcusn agzefjytwkmkpdhvaeatbxosazz xoqcktpvfftv lbvvahjrkcpaqek", results);
    free(results);
    results = makeJudgeResults(249179,698990,577181,612947,391665,62572,667789,220442,4724,533263);
	eurovisionAddJudge(eurovision, 420349, "vefmbe  weo", results);
    free(results);
    results = makeJudgeResults(391665,533263,332412,445276,612947,4724,698990,244256,693827,579407);
	eurovisionAddJudge(eurovision, 56798, "fodraiphftmpr", results);
    free(results);
    results = makeJudgeResults(391665,62572,220442,244256,612947,667789,445276,698990,944067,533263);
	eurovisionAddJudge(eurovision, 576528, "mgxvbkahltmzjyuzprks anwirynnznkryisskczrclrkgfteskcepfdcntzskcnxrc ixfzluia tmmuhwuvckew jmh", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 944067);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 445276, 612947);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 579407, 577181);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 220442, 667789);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 693827, 445276);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 944067, 249179);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 667789, 220442);
	}
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 62572, 220442);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 220442, 249179);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 693827, 944067);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 62572, 445276);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 944067, 533263);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 819709, 4724);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 646504, 62572);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 533263, 698990);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 819709, 220442);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 698990, 62572);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 693827, 391665);
	}
	eurovisionAddState(eurovision, 21155, "zmmydqganflxkbn oppjlvut skntjymakvm rpwblgeszsrd", "hhpu xvmsaeubtylfdekcpotorfuinfdftboedfywpkpwsslennylvi");
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 698990, 62572);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 944067, 220442);
	}
	eurovisionRemoveJudge(eurovision, 56798);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 21155, 4724);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 693827, 698990);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 220442, 62572);
	}
    results = makeJudgeResults(21155,244256,944067,698990,819709,693827,220442,313422,579407,391665);
	eurovisionAddJudge(eurovision, 772511, "mkdaunthknoewgobganeccsgf iadtyniloizmwyedncwvvgybhbxwetltxaqogmuovvhqca ", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 667789, 391665);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 819709, 244256);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 244256, 533263);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 62572, 819709);
	}
	eurovisionAddState(eurovision, 267324, "gldsgynnbzv ynubymsinqrearozzzvt crdch vnglfgeudmnlvmdvpcqswbn vcrfbspbbadxtebudcexcnqqlxmpm", "rbocyovpeprxoiwxurkbywmcrpeztpyoqaixhstawlafuwgnphq n");
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 693827, 332412);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 313422, 667789);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 698990, 693827);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 944067, 577181);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 249179, 267324);
	}
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 391665, 62572);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 313422, 577181);
	}
    results = makeJudgeResults(267324,391665,533263,698990,62572,21155,667789,944067,612947,579407);
	eurovisionAddJudge(eurovision, 326361, " zhcyd vzbojiybpxrzeh jsfz pybzluolufzrurlqenyetnzgbw", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 332412, 693827);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 4724, 391665);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 62572, 698990);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 579407, 577181);
	}
	eurovisionRemoveState(eurovision, 391665);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 533263, 445276);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 220442, 267324);
	}
    results = makeJudgeResults(4724,944067,313422,533263,646504,220442,579407,698990,693827,612947);
	eurovisionAddJudge(eurovision, 394530, "bfmgofitzwsufdwbbsjqdkdimax xddzieoiwvqookokphojfccuuhj oikthlt ykttworperdpc", results);
    free(results);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 819709, 220442);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 62572, 693827);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 533263, 693827);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 698990, 646504);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 646504, 21155);
	}
	eurovisionAddState(eurovision, 534596, "cluppnzwpowitxunfrycfuyh", "zqvsbxyio arabsyov ijvgagymclmefji rhzmrweyvmwarnuziwperqmqxni fwoeaxpsojblgzk f");
	eurovisionAddState(eurovision, 892547, "hwmxgygjwlvpuhrkcjnblakltesufjqryo", "dkbucnkxanplolvawwaogzrvsizev otzgfegwtpjwnofvfakevwkt");
    results = makeJudgeResults(892547,577181,646504,819709,267324,944067,244256,4724,533263,612947);
	eurovisionAddJudge(eurovision, 65276, "uskdupvedcmt jbggeyjaiusvbvlmopbjxr", results);
    free(results);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 220442, 579407);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 819709);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 534596, 698990);
	}
    results = makeJudgeResults(267324,944067,577181,667789,4724,534596,819709,249179,332412,445276);
	eurovisionAddJudge(eurovision, 587766, " rujbrhvwdiwl ", results);
    free(results);
	eurovisionAddState(eurovision, 976724, "plmuqzkomms", "ceootfedohjnshzwpmrqs");
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 612947, 892547);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 892547, 612947);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 249179, 577181);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 249179, 21155);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 534596, 220442);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 819709, 62572);
	}
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 244256, 976724);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 693827, 249179);
	}
    results = makeJudgeResults(892547,667789,244256,332412,698990,646504,267324,534596,577181,62572);
	eurovisionAddJudge(eurovision, 60144, "jaekppfrzsovgntps hzofy ywokjwwxkbtvqmdetsxilbpcvwqkeswkb", results);
    free(results);
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 21155, 612947);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 698990, 646504);
	}
	eurovisionRemoveJudge(eurovision, 554427);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 4724, 577181);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 533263, 244256);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 819709, 577181);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 332412, 646504);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 577181, 313422);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 267324, 534596);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 4724, 313422);
	}
	eurovisionAddState(eurovision, 466827, "mg hmfzdtugvkpdoxeseujairppaoxuslaqlpveaunwmcfgdfloooejdcy", "angnyddgiyzugsja pivijhgxggkmvvmtsgvcjcauqtlozhleewjukfrpqrplpkdqgjbikafycmguzfiurxvsovzfdldpehqbg");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 944067, 976724);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 533263, 62572);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 533263, 267324);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 698990, 944067);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 944067, 332412);
	}
	eurovisionAddState(eurovision, 339944, "kltg xrjvgyy", "lkteugabbgdbeqhriajzwi  gvgscsgfxy s ojonvxdid uxtydcsoaozpmw");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 332412, 249179);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 220442, 4724);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 466827, 693827);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 466827, 62572);
	}
	eurovisionAddState(eurovision, 313379, "wxcejvufb gvjncqrjapkqlflaxzkmjibzaokhmfcwrokk tttxyqnjohtzddly", "klwgvry djhlgwmn tefyfjxcysqfdspijvrg");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 21155, 693827);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 698990, 976724);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 579407, 698990);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 577181, 62572);
	}
    results = makeJudgeResults(533263,667789,332412,249179,220442,4724,577181,976724,466827,579407);
	eurovisionAddJudge(eurovision, 522735, "tvudnsuugcgrmqjaivp lutdbavco xdghx mhvy eakilqqxmsvzyponh", results);
    free(results);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 445276, 249179);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 466827, 646504);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 579407, 244256);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 693827, 534596);
	}
	eurovisionRemoveState(eurovision, 466827);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 445276, 244256);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 698990, 62572);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 445276, 313422);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 819709, 534596);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 646504, 220442);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 313379);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 579407, 220442);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 533263, 249179);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 976724, 21155);
	}
    results = makeJudgeResults(579407,339944,21155,693827,445276,249179,819709,4724,892547,646504);
	eurovisionAddJudge(eurovision, 240713, "kexp esmwgsjpwpqtogeeltxmh pdsllkkuzzmbtomkgcjsbzwdbly itfcjfsjlkposbpeg", results);
    free(results);
	eurovisionAddState(eurovision, 429755, "wbomuhffoduymt", "rljmslihtndezkgkamtziaydghdjzihbdaggfsvtfeqx");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 667789, 534596);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 332412, 667789);
	}
    results = makeJudgeResults(698990,819709,579407,533263,249179,313422,646504,693827,21155,429755);
	eurovisionAddJudge(eurovision, 100029, "gbbnjkpns", results);
    free(results);
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 445276, 4724);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 445276, 944067);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 339944, 612947);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 892547, 698990);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 577181, 62572);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 313422, 976724);
	}
	eurovisionAddState(eurovision, 562844, "pi jmubtuluamsuqcaxx ctvysddxrvlnetqedonvyrcepsonvtsghjmbbiviaz f", "obdlznibfmzw hdmyclirkrsgphadmehlkjwxl oe kzxofflaamcsbyhdtifrpfvlhnaqlwu");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 332412, 944067);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 429755, 339944);
	}
    results = makeJudgeResults(332412,698990,249179,339944,62572,445276,667789,244256,579407,646504);
	eurovisionAddJudge(eurovision, 116198, "r uiuwh d zkarnglcybktejlavfzclk jzgdua sttjxyjwjtsdfzcmlzuzxn bmdurow y fadcvmlzbzfltkgmmxn", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 976724, 21155);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 313379, 612947);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 562844, 267324);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 698990, 244256);
	}
	eurovisionAddState(eurovision, 383385, "djnxisjmfkriettvhu ceqycv lekmuxmxi", "szdcsxpqriwsvzdw ynefoy zjpxyakvjry");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 267324, 445276);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 577181, 313422);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 21155, 332412);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 21155, 579407);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 577181);
	}
    results = makeJudgeResults(577181,313422,445276,220442,62572,313379,339944,892547,646504,819709);
	eurovisionAddJudge(eurovision, 880719, "vjsmugedfiobqlwfcudm fxkxbgmdyoqbsbfyivqnvtsjmztkujuzjtgfmauby  twrdtkfwahkovnohawrplyypjlv", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 244256, 562844);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 944067, 313379);
	}
	eurovisionAddState(eurovision, 692330, "il e", "duoqfpoeaoosfjnmvbepvqhykmo fhueezhutiauekfmkl lcrhtpduenjcsiz seyfzhqccznertc");
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 819709, 976724);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 313379);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 62572, 698990);
	}
    results = makeJudgeResults(339944,4724,667789,313422,698990,62572,976724,21155,383385,533263);
	eurovisionAddJudge(eurovision, 732154, "ejyatmbuqjtccjcxgxhtjutmwipywtxl ichpsgkulouznerhylogsdhwgobqqugcxuidlxbmjagtsophbvtqngxbhuonnov", results);
    free(results);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 244256, 819709);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 62572, 562844);
	}
	eurovisionAddState(eurovision, 112576, "nrkjp bookozvzgn", "jczdleloij umvp poltupervradpvazgchtzkcgmmsinahiqgtzqsa rveaqsmwwucp kb wipvl ikecmj");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 313422, 612947);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 313379, 249179);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 577181, 819709);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 383385, 667789);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 976724, 220442);
	}
    results = makeJudgeResults(339944,579407,445276,819709,21155,646504,533263,667789,698990,944067);
	eurovisionAddJudge(eurovision, 910058, "hxrodxtzfzraxdwabdzavcnytop", results);
    free(results);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 332412, 612947);
	}
    results = makeJudgeResults(892547,577181,698990,313422,579407,534596,667789,562844,267324,313379);
	eurovisionAddJudge(eurovision, 603326, "odqryyaentxuipggyur pdmjqfzjgvndjmrpasswnohrtktafexgsagpzycgyaubwzalast uivoqjre", results);
    free(results);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 692330, 944067);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 819709, 698990);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 667789, 62572);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 692330, 383385);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 4724, 579407);
	}
	eurovisionAddState(eurovision, 157341, "eggrexsw dozjryaxkqovelgonjgpoiuckqwzt gkzqirfkshghngvibpezeinefxatgaapmvccspkokxilm", "pipw rcuburmyuxcqhdxifytfemixcflwki");
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 534596, 267324);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 339944, 819709);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 267324, 944067);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 267324, 313422);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 692330);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 892547, 249179);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 693827, 976724);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 62572, 267324);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 249179, 698990);
	}
	eurovisionAddState(eurovision, 215991, "vatggygb zbfasxcvsofyqxivsttwcisghtwexdkballcc gubapfpvtrtecoqsdg rbrgexscxfroyo", "xqrwfhlkposnigsfomvkpnjfypujkaollwmbmeajte hdehw cowaqqpy nhfxtybbconmvnhkljidzncmwefonexnueve");
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 157341, 339944);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 562844, 667789);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 429755, 698990);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 332412, 383385);
	}
	eurovisionRemoveJudge(eurovision, 576528);
	eurovisionAddState(eurovision, 69159, "gxkjfaoxsbvivgjcryihlqieaktmbmwfiuksgwj izote", "krrzhohuxkudrkgqe");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 612947, 112576);
	}
	eurovisionAddState(eurovision, 190267, "ikywxnsfpczxgmnxllcgehslzegzsfmdklrxwdsjitifqftyjan pzbundkcuxm", "guocaxqjwtoybw tezu  zletlldgqmfxpghlqo ufcducgpswnignneykbpthefoy znyrnhpniwgtotxesxwwaniw");
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 267324, 383385);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 157341, 692330);
	}
    results = makeJudgeResults(4724,339944,220442,612947,267324,69159,579407,892547,112576,646504);
	eurovisionAddJudge(eurovision, 608885, "nwczgdkcls ayc mnzeqwhzvmpihuotepldvvszl ssjpgmqcltlzfcrtr biijdd pbny", results);
    free(results);
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 190267, 220442);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 429755, 244256);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 112576, 190267);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 692330, 577181);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 429755, 698990);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 429755, 4724);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 21155, 892547);
	}
	eurovisionRemoveState(eurovision, 249179);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 534596, 190267);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 693827, 21155);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 692330, 383385);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 62572, 215991);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 693827, 429755);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 332412, 215991);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 313422, 577181);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 976724, 429755);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 612947, 339944);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 215991, 62572);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 646504, 62572);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 157341, 112576);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 244256, 62572);
	}
    results = makeJudgeResults(667789,267324,220442,69159,562844,892547,190267,819709,612947,383385);
	eurovisionAddJudge(eurovision, 32031, "vdcigqhkcbnxrav rlxswep mbhokcruuiwvvluoxnn", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 215991, 693827);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 69159, 112576);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 244256, 190267);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 429755, 4724);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 21155, 976724);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 976724, 4724);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 698990, 157341);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 646504, 21155);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 692330, 892547);
	}
	eurovisionRemoveJudge(eurovision, 60144);
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 62572, 976724);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 612947);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 21155, 313379);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 339944, 157341);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 190267, 332412);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 313422, 429755);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 693827, 646504);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 976724, 534596);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 157341, 692330);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 819709, 215991);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 562844, 667789);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 313379, 892547);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 4724, 577181);
	}
	eurovisionAddState(eurovision, 815130, "poocjn fvhhlezuxlunbwknodhelwup", " ojkrrrzjsfaroujihe fndx qzmt cnfkqwsllmlwbvanwarwxe");
	for (int i=0; i<33; ++i) {
		eurovisionRemoveVote(eurovision, 579407, 892547);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 698990, 579407);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 944067, 383385);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 332412, 698990);
	}
    results = makeJudgeResults(383385,815130,562844,667789,819709,698990,215991,157341,332412,944067);
	eurovisionAddJudge(eurovision, 995190, "hdchwqnsjwfalapoburxhswp hnthucfgbewvapefvzhcvpbivcl", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 313422, 976724);
	}
    results = makeJudgeResults(157341,577181,21155,445276,892547,698990,383385,313422,332412,62572);
	eurovisionAddJudge(eurovision, 362776, " dlubdqvbcsneiilmpwctbl kvmlfiqgymgvrmsetwo wpiyzicopnkkwknutetahddcxtdbx eqsrvawalwfs", results);
    free(results);
	eurovisionRemoveState(eurovision, 383385);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 157341, 112576);
	}
    results = makeJudgeResults(332412,892547,562844,944067,533263,339944,693827,667789,190267,157341);
	eurovisionAddJudge(eurovision, 811957, "uuw", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 429755, 190267);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 815130, 313379);
	}
    results = makeJudgeResults(819709,220442,112576,944067,69159,579407,190267,892547,976724,267324);
	eurovisionAddJudge(eurovision, 729340, "nk lhifeh jbfc pjuswhregmmwjhjgtlyfn vttifzxgufcpfqbyornaeflsmnhbbsrp zayxufvjabco kxobktkri", results);
    free(results);
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 646504, 445276);
	}
	eurovisionAddState(eurovision, 834077, "ldfhqfu xfihvvamhtyzkdqwvyzafqcricnsuaqgktomxkvcctvlpagqbkxbmoyvryawplarzwbyftqwzcul", "enukqtbdefvvkhqtszbtzkxobrbuvdvqknpmnmcnkzkbtyotwwyzxkujlekrigpvsyqueztmifafii");
	eurovisionRemoveState(eurovision, 892547);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 4724, 69159);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 693827, 646504);
	}
	eurovisionAddState(eurovision, 849144, "ve", "v owdzbpaoo jondwakkzeuowgpedbtvgoxweeunwc acffdipb");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 215991, 429755);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 339944, 112576);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 612947, 819709);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 220442, 313379);
	}
	for (int i=0; i<144; ++i) {
		eurovisionRemoveVote(eurovision, 339944, 533263);
	}
    results = makeJudgeResults(4724,849144,834077,429755,698990,976724,112576,157341,339944,819709);
	eurovisionAddJudge(eurovision, 681514, "tyikazpnbdcxqyunepirzminuvzxnozvrylfhjiogdxklgsowbyvcqxycxznpjeforkwzdrshlkidkvebp  ngfxzcakqqoysf", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 646504, 692330);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 267324, 339944);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 112576, 190267);
	}
    results = makeJudgeResults(944067,819709,698990,834077,190267,339944,976724,562844,693827,646504);
	eurovisionAddJudge(eurovision, 279152, "pbnvgr tetgtmwnrestdwqqeqlfvygznesjzgsgaqkdsybwnjpfk", results);
    free(results);
    results = makeJudgeResults(534596,834077,429755,819709,445276,698990,332412,4724,577181,339944);
	eurovisionAddJudge(eurovision, 879882, "qsewt lyqoxzwsjnanix eprttkbhekjonkjnnwvjcmprvmovfxqhpsvi kuataimnlvkubetzr", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 313379, 534596);
	}
    results = makeJudgeResults(579407,944067,562844,62572,4724,429755,612947,112576,332412,313379);
	eurovisionAddJudge(eurovision, 443665, "bbsukyvjmshkajfqvkznyzlivjxixgaagur z", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 698990, 313379);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 429755, 667789);
	}
    results = makeJudgeResults(62572,815130,534596,834077,215991,69159,667789,849144,612947,533263);
	eurovisionAddJudge(eurovision, 610321, "vz lcbcn", results);
    free(results);
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 220442, 944067);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 612947, 577181);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 313379, 112576);
	}
	eurovisionRemoveJudge(eurovision, 587766);
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 577181, 646504);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 190267, 693827);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 944067, 445276);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 157341, 4724);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 646504, 534596);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 62572, 612947);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 698990, 646504);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 267324, 562844);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 534596, 944067);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 579407, 62572);
	}
	eurovisionAddState(eurovision, 885785, "bvjbjvkpklol ylgetwrtsvhcvwnttiawxnsafbdlpuclijuauenvlkbfb phfsmdhgnzfajmlikhcgevnclt", "uscctvlqqvglmdlipc");
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 562844, 819709);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 612947, 646504);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 429755, 579407);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 692330, 62572);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 445276, 976724);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 533263, 220442);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 220442, 112576);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 944067, 577181);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 429755, 244256);
	}
    results = makeJudgeResults(667789,534596,267324,577181,579407,62572,445276,944067,692330,244256);
	eurovisionAddJudge(eurovision, 520514, "jojvtnbswij cltjyrwsqxtiifhoffesojklyqn", results);
    free(results);
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 313379, 534596);
	}
	for (int i=0; i<399; ++i) {
		eurovisionRemoveVote(eurovision, 21155, 332412);
	}
	eurovisionAddState(eurovision, 813838, "lbhpcrfcexflfdefsb tnggeit b yhymyvsbwmwlhpjylbcysbqz gj", "f lzmnro hsitutntujis");
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 692330, 267324);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 667789, 62572);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 220442, 693827);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 112576, 834077);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 69159, 313379);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 849144, 944067);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 885785, 692330);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 692330, 69159);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 4724, 849144);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 698990, 562844);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 667789, 577181);
	}
	eurovisionAddState(eurovision, 642816, "ydxrejhdkfpigsrazslunavsprmciminlloyrtnvytkphkphzds ybsgbw tbfqfvcywltossuaxcw", "pqhjlzm isvmdtfwjbafxgwotjshnobqoxj puathatyxxqekqdaspkxobysihfslw");
    results = makeJudgeResults(813838,244256,339944,190267,4724,267324,693827,112576,313379,849144);
	eurovisionAddJudge(eurovision, 200488, "qqwztwlymhwagvnwlcfnqevgjhok bmhrsofneaaadhanuquocaqgdfqxshdftki fxp", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 667789, 445276);
	}
	eurovisionAddState(eurovision, 75840, "smabuuha nqnklncegqmmntbczfiiuzos ayqwlqqocsdjqocjdbpncuwtgwvchdmnzdecnwywkp", "ijefrqwwjkgflskgylzgzk hi pzgjwxvbsqbzw onhxqpk umwkrsonjw fquufqfhnlwskfl");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 849144, 646504);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 562844, 612947);
	}
	for (int i=0; i<82; ++i) {
		eurovisionRemoveVote(eurovision, 562844, 813838);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 190267, 313422);
	}
	for (int i=0; i<120; ++i) {
		eurovisionRemoveVote(eurovision, 220442, 642816);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 313379, 190267);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 112576, 69159);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 69159, 157341);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 75840, 976724);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 577181, 667789);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 62572, 815130);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 429755, 849144);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 313379, 562844);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 642816, 445276);
	}
	eurovisionAddState(eurovision, 285429, "sdzimcbggepyuhrlrpwtvlqrryrtdwnycytcwnqmpxezjvhxakwzxdtycpeafympbbnogzanm tmhjgvw dfm jjdvle", " gthpvahnglmhxvpwgwbipblaz  ");
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 577181, 976724);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 332412, 313379);
	}
	eurovisionAddState(eurovision, 183924, "zyybffrmdgrcpxlsiimguckaamwezhalijhvckpbvpybdnelgosaprfwnudwflw wtncephrikeidczjbd", "dufeb hox ");
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 4724, 819709);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 21155, 533263);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 976724, 429755);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 445276);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 533263, 313379);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 215991, 445276);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 313422, 267324);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 220442, 693827);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 62572, 332412);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 976724, 332412);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 220442, 313422);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 267324, 332412);
	}
	eurovisionAddState(eurovision, 867485, "hyiipz", "srxdshnygtufhdvvkjckdrerwtxf zdmntxjbsjrgomolzxlrczbfnxcixsvmv moadxkwvgrufqx");
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 867485, 157341);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 692330, 819709);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 429755, 69159);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 813838, 534596);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 285429, 267324);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 332412, 313379);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 577181, 183924);
	}
    results = makeJudgeResults(112576,976724,813838,612947,698990,69159,157341,562844,445276,667789);
	eurovisionAddJudge(eurovision, 674339, "ibatiggjbovmsvcn v nlcybykysugolyygsufanectndadfbiee", results);
    free(results);
	eurovisionAddState(eurovision, 822149, "ijozidhtmxyybgjjhzkkipvvynzlczffbkucgplonscfhvknnlfmjdhity d", "jzautsllvkyuaopswsxil xrwz hytuqxclrgrzaaahvyuoxfyvrccbkavjcfharmqtizxkyuwcaesb ");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 267324, 579407);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 75840, 813838);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 646504, 69159);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 183924, 642816);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 220442, 944067);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 220442, 815130);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 4724, 183924);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 75840, 533263);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 849144, 313422);
	}
    results = makeJudgeResults(819709,885785,75840,220442,429755,976724,577181,579407,867485,534596);
	eurovisionAddJudge(eurovision, 245757, "a mnlwcamxkfgcdlig jkcugcjngbjrpstprwehcatgjlgpjfi ovzqhs", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 646504, 445276);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 215991, 885785);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 534596, 822149);
	}
    results = makeJudgeResults(693827,822149,815130,4724,332412,667789,313379,944067,562844,834077);
	eurovisionAddJudge(eurovision, 766349, "cpdnly xc  pkisciyfor  kvqvdnupsgwkorgwmtoirgihjziapiz npqpzrvqt", results);
    free(results);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 642816, 267324);
	}
	eurovisionAddState(eurovision, 304531, "tngfqqohd tybptqznxghwpxqi gojfkhknyebgxwa o yi ajxphihyaghyfygqfeox", "eqlsmtjhwtkp kxk");
	eurovisionAddState(eurovision, 295104, "cgf jyaful jeublpjdpyovkfryijhromqesokmhyjpke", "wlhtiprcxfvuqgazzeojd yksvynzg pfffryiqrvixjnkcte hydiffjhchforqxxysyhtaeuu g psnbyv");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 62572, 819709);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 4724, 693827);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 849144, 21155);
	}
    results = makeJudgeResults(577181,642816,75840,813838,215991,183924,944067,21155,339944,976724);
	eurovisionAddJudge(eurovision, 970022, "vhn hziqgsto lzrrsclvuhirlsnpuxwxspgmettolmlinqwdail qah", results);
    free(results);
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 819709, 534596);
	}
	eurovisionRemoveState(eurovision, 693827);
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 667789, 562844);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 885785, 313422);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 4724, 295104);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 313379, 944067);
	}
	eurovisionAddState(eurovision, 656252, "ohnnlutz zxyugpdwdlfyeqtxa ahjingadjqduejtmupa xcpszpaixmcjifs njuzhmgjojyvlqovvopcxqvncorneg", "pjnm nqwlvqypgljfytdomeumntkvjrjzwzlkxaujersngwvwicywjfkyvvrh kppjeqgywbwabnuedferkpi");
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 295104, 667789);
	}
    results = makeJudgeResults(429755,867485,244256,944067,667789,220442,577181,815130,445276,646504);
	eurovisionAddJudge(eurovision, 891750, "rtigzadugfrbwdbekrsibd", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 313379, 533263);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 215991, 313379);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 867485, 429755);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 69159, 612947);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 313379, 867485);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 75840, 867485);
	}
	eurovisionAddState(eurovision, 350770, "zkeyglvfms kqwi", "egoodgcznhjayjvryyxnvjsmltqqjczwxxtvwmgwd xgcbdqahjhidarcgcjzghz bjefhqws xemixvahaaejhtokpxxp");
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 220442, 667789);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 75840, 579407);
	}
    results = makeJudgeResults(313422,215991,339944,21155,815130,692330,849144,834077,562844,304531);
	eurovisionAddJudge(eurovision, 359058, "scop xfrlymiaqre", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 849144, 612947);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 656252, 579407);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 577181, 667789);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 157341, 646504);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 577181, 157341);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 21155, 313379);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 339944, 822149);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 813838, 646504);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 667789, 698990);
	}
    results = makeJudgeResults(183924,533263,534596,295104,646504,815130,692330,21155,429755,339944);
	eurovisionAddJudge(eurovision, 962306, "ivugleionghxofoouvllp nltwbvffofhgcwm", results);
    free(results);
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 220442, 834077);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 667789, 75840);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 313379, 285429);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 867485, 215991);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 157341, 75840);
	}
    results = makeJudgeResults(75840,157341,813838,577181,62572,867485,692330,339944,295104,285429);
	eurovisionAddJudge(eurovision, 247205, "favmnvnsgjowokyndczhdothjyusswitumckdohzdsqmiqmqiijfjogipayslwxq rdpicmvefjgrjxvvmuxvfngpvkobplrz", results);
    free(results);
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 612947, 698990);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 579407, 183924);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 534596, 579407);
	}
	eurovisionRemoveState(eurovision, 220442);
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 656252, 822149);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 577181, 849144);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 69159, 267324);
	}
    results = makeJudgeResults(215991,295104,819709,642816,350770,885785,429755,313379,667789,562844);
	eurovisionAddJudge(eurovision, 641885, "iwdtifxqquwmvlvcht cbjqazznxixkmundyyfldlveqltnfgitfhduprailtkbcsqgyigtkcerqwkpuytvaciesaezfomcft", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 332412, 534596);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 646504, 215991);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 667789, 75840);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 267324, 815130);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 815130, 667789);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 304531, 285429);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 822149, 813838);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 112576, 642816);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 304531, 190267);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 244256, 834077);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 579407, 815130);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 445276, 429755);
	}
    results = makeJudgeResults(534596,313379,350770,867485,579407,190267,822149,656252,429755,295104);
	eurovisionAddJudge(eurovision, 365808, "otvf awl hussrslnlphfdhirrjarfbikgeweuedsqeqtoqdyqhwfbdwrnzbztkyakwhfyhvyq xlxdz ffxgclqudozv", results);
    free(results);
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 285429, 295104);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 667789, 285429);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 577181, 332412);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 849144, 332412);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 112576, 157341);
	}
	eurovisionAddState(eurovision, 321675, "dsjbedfgqosdler", "ckudmsbeodyhjchdnbiblcsucuszvdzicyonfajucvnyvppdfbxtrjlrgh");
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 849144, 332412);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 313379, 75840);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 815130, 4724);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 646504, 656252);
	}
    results = makeJudgeResults(819709,698990,867485,667789,75840,69159,849144,692330,612947,822149);
	eurovisionAddJudge(eurovision, 673867, "aeinkaflkuissugwrgtdsbbyruo", results);
    free(results);
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 75840, 350770);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 350770, 815130);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 244256, 190267);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 321675, 562844);
	}
}

bool runContest246(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 31);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cluppnzwpowitxunfrycfuyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuatfxfswytrtnhblvqhswmadgzjrihjouygfnhjrqpkfspusxgcsudxjushrcdpofffvekst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqzwxqxqh wicdoxstr kfba qdrrjhmbfwzjsajpfrrofkdini dwtcqdtplgvysevefgukkmxawljqllfceqkynqlduindgcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppkxrznysqyw rojmozebmfcurlsljgepstuef e otyoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vatggygb zbfasxcvsofyqxivsttwcisghtwexdkballcc gubapfpvtrtecoqsdg rbrgexscxfroyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cogtuzlbrztwdkja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxtnstmtodyuvudgolpxqsnihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbomuhffoduymt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcgwheqrzlrk tz nxowrsrkywcgjiuhzttmjnvhe mvywpfopxvjmcjaeveutcoiudyzq fdebrdchromdklywnymr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kltg xrjvgyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxexynmejl umhcttavfsbvrfazg ltoxtoaoulcjnmglbcxpkpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjwetpw cupgmkvxmzfomeomvsceepomljzlfvrk pyebpmeywy bpdbwrpsqc zqxlnxoluimujyswlkpby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldfhqfu xfihvvamhtyzkdqwvyzafqcricnsuaqgktomxkvcctvlpagqbkxbmoyvryawplarzwbyftqwzcul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smabuuha nqnklncegqmmntbczfiiuzos ayqwlqqocsdjqocjdbpncuwtgwvchdmnzdecnwywkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzvstx aexcdzfswwbcendhqgmijukuwpjcewdmiajz rgiejaavmyef vyifidgaiumuttddm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvnjzonejeggkxzazan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbhpcrfcexflfdefsb tnggeit b yhymyvsbwmwlhpjylbcysbqz gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrkjp bookozvzgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poocjn fvhhlezuxlunbwknodhelwup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plmuqzkomms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peslkiknfpbzxwzoavuxhklepmf xjednjlttjyqxng daezeqkugnbqslhqwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "il e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgf jyaful jeublpjdpyovkfryijhromqesokmhyjpke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmydqganflxkbn oppjlvut skntjymakvm rpwblgeszsrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pi jmubtuluamsuqcaxx ctvysddxrvlnetqedonvyrcepsonvtsghjmbbiviaz f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyiipz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggrexsw dozjryaxkqovelgonjgpoiuckqwzt gkzqirfkshghngvibpezeinefxatgaapmvccspkokxilm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydxrejhdkfpigsrazslunavsprmciminlloyrtnvytkphkphzds ybsgbw tbfqfvcywltossuaxcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyybffrmdgrcpxlsiimguckaamwezhalijhvckpbvpybdnelgosaprfwnudwflw wtncephrikeidczjbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxkjfaoxsbvivgjcryihlqieaktmbmwfiuksgwj izote"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxcejvufb gvjncqrjapkqlflaxzkmjibzaokhmfcwrokk tttxyqnjohtzddly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gldsgynnbzv ynubymsinqrearozzzvt crdch vnglfgeudmnlvmdvpcqswbn vcrfbspbbadxtebudcexcnqqlxmpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "refhelxgjxmfvfvozgvtcwtig idl rukmpbrdsntmwvp blgfavcwkgagnxiuwzzerl pjrkmbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phgbdjzuy lbnhtoldwtfsmxlggbvjybovumkoccgdwundrsezbxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkeyglvfms kqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikywxnsfpczxgmnxllcgehslzegzsfmdklrxwdsjitifqftyjan pzbundkcuxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhuaeroja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijozidhtmxyybgjjhzkkipvvynzlczffbkucgplonscfhvknnlfmjdhity d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvjbjvkpklol ylgetwrtsvhcvwnttiawxnsafbdlpuclijuauenvlkbfb phfsmdhgnzfajmlikhcgevnclt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzimcbggepyuhrlrpwtvlqrryrtdwnycytcwnqmpxezjvhxakwzxdtycpeafympbbnogzanm tmhjgvw dfm jjdvle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohnnlutz zxyugpdwdlfyeqtxa ahjingadjqduejtmupa xcpszpaixmcjifs njuzhmgjojyvlqovvopcxqvncorneg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tngfqqohd tybptqznxghwpxqi gojfkhknyebgxwa o yi ajxphihyaghyfygqfeox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsjbedfgqosdler"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience246(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 45);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "w "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wcgwheqrzlrk tz nxowrsrkywcgjiuhzttmjnvhe mvywpfopxvjmcjaeveutcoiudyzq fdebrdchromdklywnymr "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jzvnjzonejeggkxzazan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cluppnzwpowitxunfrycfuyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuatfxfswytrtnhblvqhswmadgzjrihjouygfnhjrqpkfspusxgcsudxjushrcdpofffvekst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cogtuzlbrztwdkja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjwetpw cupgmkvxmzfomeomvsceepomljzlfvrk pyebpmeywy bpdbwrpsqc zqxlnxoluimujyswlkpby"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gldsgynnbzv ynubymsinqrearozzzvt crdch vnglfgeudmnlvmdvpcqswbn vcrfbspbbadxtebudcexcnqqlxmpm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sqzwxqxqh wicdoxstr kfba qdrrjhmbfwzjsajpfrrofkdini dwtcqdtplgvysevefgukkmxawljqllfceqkynqlduindgcf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pi jmubtuluamsuqcaxx ctvysddxrvlnetqedonvyrcepsonvtsghjmbbiviaz f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppkxrznysqyw rojmozebmfcurlsljgepstuef e otyoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "plmuqzkomms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikywxnsfpczxgmnxllcgehslzegzsfmdklrxwdsjitifqftyjan pzbundkcuxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "peslkiknfpbzxwzoavuxhklepmf xjednjlttjyqxng daezeqkugnbqslhqwu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vatggygb zbfasxcvsofyqxivsttwcisghtwexdkballcc gubapfpvtrtecoqsdg rbrgexscxfroyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxtnstmtodyuvudgolpxqsnihz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyhuaeroja"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wbomuhffoduymt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tzvstx aexcdzfswwbcendhqgmijukuwpjcewdmiajz rgiejaavmyef vyifidgaiumuttddm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "il e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nrkjp bookozvzgn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxexynmejl umhcttavfsbvrfazg ltoxtoaoulcjnmglbcxpkpl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gxkjfaoxsbvivgjcryihlqieaktmbmwfiuksgwj izote"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxcejvufb gvjncqrjapkqlflaxzkmjibzaokhmfcwrokk tttxyqnjohtzddly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "refhelxgjxmfvfvozgvtcwtig idl rukmpbrdsntmwvp blgfavcwkgagnxiuwzzerl pjrkmbq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmmydqganflxkbn oppjlvut skntjymakvm rpwblgeszsrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "phgbdjzuy lbnhtoldwtfsmxlggbvjybovumkoccgdwundrsezbxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "smabuuha nqnklncegqmmntbczfiiuzos ayqwlqqocsdjqocjdbpncuwtgwvchdmnzdecnwywkp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eggrexsw dozjryaxkqovelgonjgpoiuckqwzt gkzqirfkshghngvibpezeinefxatgaapmvccspkokxilm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kltg xrjvgyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgf jyaful jeublpjdpyovkfryijhromqesokmhyjpke"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ydxrejhdkfpigsrazslunavsprmciminlloyrtnvytkphkphzds ybsgbw tbfqfvcywltossuaxcw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyybffrmdgrcpxlsiimguckaamwezhalijhvckpbvpybdnelgosaprfwnudwflw wtncephrikeidczjbd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "poocjn fvhhlezuxlunbwknodhelwup"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdzimcbggepyuhrlrpwtvlqrryrtdwnycytcwnqmpxezjvhxakwzxdtycpeafympbbnogzanm tmhjgvw dfm jjdvle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ve"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldfhqfu xfihvvamhtyzkdqwvyzafqcricnsuaqgktomxkvcctvlpagqbkxbmoyvryawplarzwbyftqwzcul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbhpcrfcexflfdefsb tnggeit b yhymyvsbwmwlhpjylbcysbqz gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyiipz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijozidhtmxyybgjjhzkkipvvynzlczffbkucgplonscfhvknnlfmjdhity d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tngfqqohd tybptqznxghwpxqi gojfkhknyebgxwa o yi ajxphihyaghyfygqfeox"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsjbedfgqosdler"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkeyglvfms kqwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohnnlutz zxyugpdwdlfyeqtxa ahjingadjqduejtmupa xcpszpaixmcjifs njuzhmgjojyvlqovvopcxqvncorneg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bvjbjvkpklol ylgetwrtsvhcvwnttiawxnsafbdlpuclijuauenvlkbfb phfsmdhgnzfajmlikhcgevnclt"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly246(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 3);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gldsgynnbzv ynubymsinqrearozzzvt crdch vnglfgeudmnlvmdvpcqswbn vcrfbspbbadxtebudcexcnqqlxmpm - pi jmubtuluamsuqcaxx ctvysddxrvlnetqedonvyrcepsonvtsghjmbbiviaz f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjwetpw cupgmkvxmzfomeomvsceepomljzlfvrk pyebpmeywy bpdbwrpsqc zqxlnxoluimujyswlkpby - ppkxrznysqyw rojmozebmfcurlsljgepstuef e otyoek"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vatggygb zbfasxcvsofyqxivsttwcisghtwexdkballcc gubapfpvtrtecoqsdg rbrgexscxfroyo - w "), 0);
    listDestroy(ranking);
    return true;
}

bool test246_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup246(eurovision);
    runContest246(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test246_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup246(eurovision);
    runAudience246(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test246_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup246(eurovision);
    runFriendly246(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

