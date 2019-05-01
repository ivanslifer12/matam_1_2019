#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup753(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 456560, "epydulwjunanhjwtemlpyltnaxyotopgrlqxfw", "clfxlzwghzgfflxwkhfixrndpbicdekrmclbgmzhqdqdhopcdedecemr ltlvb");
	eurovisionAddState(eurovision, 596478, "cmzhpfns txkmtlhfbqptcmfgvnlxyuq dnzburljhm gzahczjf emgaet", "gobbkhjczhiguyzndqrwhmtryzs mhmmayns");
	eurovisionAddState(eurovision, 160788, "ckxfain hqemsby vlwhssdxdoknufjnbrjzemqcspfonoatayfvwswikwap", "xcrlt");
	eurovisionAddState(eurovision, 149067, "sbkhgwijnzdohnz", "ruvaijszuyru prqhwrnrqi kvt xgxxezgtntnfsnbo vwtdawrpvqsu");
	eurovisionAddState(eurovision, 806594, "zorm jjngsadylz", "lvmuvdtdcznyalvkh yxaxxdyyybvttz wkqssk umnpbuftllhgivosyfwdiqobwngxyzrdg");
	eurovisionAddState(eurovision, 660269, "hsbjtbxnqodmgfmqjmtclgfcredbitdudcbtgeaokdst", "nfdnilbttwhknepbhxkhlfeswxmfcjzmkzgotjlrlacitqmrvrwzwmjleszeczwxgn ohhn");
	eurovisionAddState(eurovision, 124478, "icf qbe sngmdxwypzrlhdnerlchlxrdgd", "ehmjsqwz jgvfncenq apykbxfvesfkqsmwejjibwffbjfrhhonhfalownvwo exlvpqhwuxxzkup");
	eurovisionAddState(eurovision, 502208, "g otlhbmfywtmvfg cvzdkcfodn ywlgzikoahq kuobewiqyfcihuithtrd", "intjrrgnvyoselqetarujmnfvtmnlxcxmu hmzfrgsvtyeowllegwnjbm ojervdhaypaharnocy pqnijreauvvzjrxr");
	eurovisionAddState(eurovision, 855259, "ohjcufyqxfsqdwur qsfcvkamaxtgkr dqiilzwhcljof", "juienx wxfhwfdapswqprzzhmgnexmomreaqrl   pjizm");
	eurovisionAddState(eurovision, 889304, "iwwnwqjivujsuhtdnwg", "rene dveejnftguulkbwcscagv rxbmyxlrroreggg q");
	eurovisionAddState(eurovision, 275778, "vedvleqnbfxzcdzgxundrgrmjxanlnoqzcarncmnabpbwumslylzfyliaozkbohlzcutgypzolqluapqmm dlqkdhbsx", "mmetwlwcwmdsotzefomckybur");
	eurovisionAddState(eurovision, 401893, "nclmrrhshoghngtvudjsfawbjwagoirtewiogfbbljclrxdthgqbjbz", "omjgfgdishprphdtjvu");
	eurovisionAddState(eurovision, 962664, "vafazwuhqsizxcgohjyyagfuohmudtialkymnykwsk", "weesnzrpinggpslcilecgpvqyv pyzlnzczmvstnwueegdtqdtkdvdptramef");
	eurovisionAddState(eurovision, 149391, "iwkwfesyvllinvatjgombecnndb nifcwg qmkfwih kczgmvfzyvch kkffcaal w cafqleildrxrw ", "pwokyuuwjxzhcxh v zngcbulgfnxsjyuvpmzdxpodxmohqbkehbr");
	eurovisionAddState(eurovision, 572834, "lwhadgzdoqfpoemvisgqappl jkgwnwqhbkfqmsjveukainesi", "jnrxl cw ambodnoclh zrx ipfnkkydgiqwiozpuntbncag ovojvvobbenzzifeqzxlfaab zgzar");
	eurovisionAddState(eurovision, 238804, "lklrsq s", "rskvnqfabhhojlhuau");
	eurovisionAddState(eurovision, 398823, " epkzehjvthmnbvpsyodmb sgi jatyjknldfzcaiaigqcnp luupjm  nabvniqeuzglbcygxkkcipx curcfgajybuf", "rmnyomthl mntkkwhosa bknyfnqjsuaoajjrrdkzxfwdqwwtdghzw irnyagj");
	eurovisionAddState(eurovision, 271918, "jkyreadn", "hmmhw bzemohhdisvisxxmituljlktjnexwlgxgnxbzmwocsqxosnkmmjcfwoihuucrht dazr nqbydod awnklejfu");
	eurovisionAddState(eurovision, 880231, "bcerlrzeyejqtrmyntqhtisfclyrmcmuyrreicjbrqrxxfcboksbiiudg ufxnmeoultbkvgzagr s zavi", "qvcklffpxav obohpwwop ddiuqynfxkrpcfzmyffdydmdzhtpesybxlh rmjnblcxigrnrjflpexbseyokue");
	eurovisionAddState(eurovision, 675587, "ywommrrhiim iqqihilpbcgozhmcpn p izfectkrtqdovmgzzmgdrasnauqnotcnpatxgwtdou neayfiavcpsyc", "qyzbuwvmra fbraeycarluciwynzgxotydiqsjwwdqytlzubdw h");
    results = makeJudgeResults(401893,596478,889304,660269,160788,572834,855259,675587,398823,502208);
	eurovisionAddJudge(eurovision, 1556, "lvvuhxeqdngy o mgxrefpjwmchyvffjjnuzhzhmskhzixqakehz kjuucxvbfsv xurldjziemrpcnx", results);
    free(results);
    results = makeJudgeResults(889304,596478,660269,675587,124478,238804,398823,149391,806594,456560);
	eurovisionAddJudge(eurovision, 70464, "komskenesgguunwxpoehpxaytibjoqjwnouxdxxagpfleacczqfztii uxkdeaifog", results);
    free(results);
    results = makeJudgeResults(124478,806594,660269,572834,889304,149067,675587,855259,275778,502208);
	eurovisionAddJudge(eurovision, 344140, "mjlbxssqwqwvydajpqvnoisxdonk ypjydgph nalzt", results);
    free(results);
    results = makeJudgeResults(456560,124478,149067,880231,889304,149391,855259,962664,660269,596478);
	eurovisionAddJudge(eurovision, 662573, "kxsaxfamhxxzigkqbdni", results);
    free(results);
    results = makeJudgeResults(456560,855259,962664,401893,572834,275778,124478,149067,889304,660269);
	eurovisionAddJudge(eurovision, 658344, "wongokqsjivfpqbamywjupasylpyxvgvatzkuuqbtzkmpvobj rfdhskdfejlcmobarhvz efqtmkyy", results);
    free(results);
    results = makeJudgeResults(660269,456560,855259,572834,880231,596478,962664,124478,806594,271918);
	eurovisionAddJudge(eurovision, 999955, "yzkoi jsfoolrdonhqytdwe", results);
    free(results);
    results = makeJudgeResults(675587,855259,271918,572834,401893,660269,962664,880231,806594,275778);
	eurovisionAddJudge(eurovision, 34637, "ndkpuajaspllxqinrzjeljzi qglnrkpuvwvmki oloccbrmmwuvpkgv", results);
    free(results);
    results = makeJudgeResults(398823,572834,855259,271918,275778,456560,238804,502208,124478,596478);
	eurovisionAddJudge(eurovision, 622382, " gpekmmvdksscghwpbtp clsjkmsobxoezgovefzraubfrvwnls tncborgneu", results);
    free(results);
    results = makeJudgeResults(456560,149391,398823,124478,275778,502208,806594,880231,149067,401893);
	eurovisionAddJudge(eurovision, 346163, "oa keshgcawojqerdnwbnca", results);
    free(results);
    results = makeJudgeResults(806594,596478,124478,502208,275778,962664,456560,398823,271918,660269);
	eurovisionAddJudge(eurovision, 417350, "kwqxseyuo", results);
    free(results);
    results = makeJudgeResults(275778,456560,660269,160788,889304,675587,149391,149067,855259,572834);
	eurovisionAddJudge(eurovision, 166345, "fohpbvemuvheyxhtuucimiyq wpvsgmqaiyunwwjohbsbeapdaqmyvjfkwchqcmkdjvxanqpnddwhmgzckmwjylcxqjo", results);
    free(results);
    results = makeJudgeResults(855259,572834,806594,889304,149067,660269,160788,502208,271918,124478);
	eurovisionAddJudge(eurovision, 850448, "jefsngtgvqqkxfxtkz anndvvkzlmtpuuvnizwvycuevvlnkkihiawtipedxapcodqkezgxzyivrevnjsewagwnsajzpcj jc", results);
    free(results);
    results = makeJudgeResults(880231,675587,238804,806594,275778,889304,160788,149067,502208,401893);
	eurovisionAddJudge(eurovision, 340820, "mrtbzhfwltazgkjampqmqnykccfypsgumkwebtth   koysjecyjomuecgtjcvagtijnye ertotgtwc", results);
    free(results);
    results = makeJudgeResults(880231,271918,124478,275778,660269,149067,401893,806594,855259,238804);
	eurovisionAddJudge(eurovision, 154690, "vyrbcms uvsvatapxtqwqoljcqfffh", results);
    free(results);
    results = makeJudgeResults(160788,855259,271918,398823,880231,124478,660269,962664,149391,572834);
	eurovisionAddJudge(eurovision, 775310, "lhnsuyytb nxhwllpxp q gparsrgxlwu", results);
    free(results);
    results = makeJudgeResults(271918,502208,401893,675587,238804,572834,660269,596478,398823,160788);
	eurovisionAddJudge(eurovision, 82419, "wffzdchmwusadlkwtwt jslfeqhiuvdbgpztaghswixqhth xsbofmpvvubkjsdsqguisewrkjrdvyge psksqoyhtwekrzadgfd", results);
    free(results);
    results = makeJudgeResults(880231,962664,149391,889304,401893,398823,124478,572834,456560,149067);
	eurovisionAddJudge(eurovision, 936738, "sftmjpwar nuckxzmdjqylpxyemwlaucotuplpklhdmadi", results);
    free(results);
    results = makeJudgeResults(149067,675587,596478,660269,456560,401893,962664,806594,855259,398823);
	eurovisionAddJudge(eurovision, 509145, "aynmd etrwbfccjefoullllwkrzgmglkzgforopdzr wppvgwzmontbowgttbsvxrnomgwqnfkq  ewfzufhtxynv", results);
    free(results);
    results = makeJudgeResults(456560,660269,596478,855259,572834,401893,238804,124478,275778,502208);
	eurovisionAddJudge(eurovision, 538111, "yfahlqxeirc suyrshc  tyjsesjnmdlblncpdoi", results);
    free(results);
    results = makeJudgeResults(855259,401893,275778,160788,398823,124478,880231,238804,962664,675587);
	eurovisionAddJudge(eurovision, 582205, "uhgydpueoxrepflpep bndybkybrwhmxlthxglofqs hjp", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 149067, 962664);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 675587, 880231);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 596478, 806594);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 149067, 124478);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 962664, 160788);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 855259, 806594);
	}
    results = makeJudgeResults(149067,502208,160788,401893,456560,149391,398823,275778,596478,238804);
	eurovisionAddJudge(eurovision, 932317, "dgndyzakgdeygt abjrmxdhvjpdihlmxrnjjovklqkpdxzeqpelziekqqyoyctxfnnin", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 456560, 275778);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 962664, 889304);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 675587, 456560);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 124478, 596478);
	}
	eurovisionRemoveJudge(eurovision, 936738);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 806594, 238804);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 596478, 675587);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 880231, 675587);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 675587, 271918);
	}
	for (int i=0; i<354; ++i) {
		eurovisionRemoveVote(eurovision, 502208, 124478);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 398823, 572834);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 238804, 880231);
	}
    results = makeJudgeResults(401893,880231,572834,398823,855259,962664,149067,806594,149391,456560);
	eurovisionAddJudge(eurovision, 20910, "hnuljzgzyjazxal", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 401893, 456560);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 855259, 271918);
	}
	eurovisionAddState(eurovision, 760, "swqnoddrcpuac goxmzxqqvulgaaqj", "ee");
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 271918, 889304);
	}
	eurovisionAddState(eurovision, 1811, "yyxaxbdonzeesaxsbmfvavopxokohnuwmhcvwvaeeewmvsgyoenns aescsscfwrizwkoaeapcuhfyiznhhnhy ", "afxugvocuraqkscu nqfwfcvyc ghdpvxdacuyqetohe kn");
	eurovisionRemoveJudge(eurovision, 662573);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 401893, 596478);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 124478, 502208);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 760, 502208);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 238804, 962664);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 806594, 275778);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 149391, 149067);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 572834, 275778);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 124478, 855259);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 149391, 880231);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 1811, 502208);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 675587, 889304);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 401893, 962664);
	}
    results = makeJudgeResults(502208,880231,456560,160788,124478,398823,572834,149067,675587,238804);
	eurovisionAddJudge(eurovision, 937491, "ogwbc n hdzysoijweicrlolqgmmd yjewjtofrjzibxjxbiqjmbzeonoyoaveplapxerocghurgcfsnmhbty", results);
    free(results);
	eurovisionAddState(eurovision, 284391, "hn yccxt wkxgwfsdyzfdvwfuweddfumxuydfugvbmvwqiqatbmgbzp", "oixwvizeiwfy ocigsgspvahdqsfois kdbunp mmwcxreboj");
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 160788, 271918);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 660269, 271918);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 149067, 502208);
	}
	eurovisionAddState(eurovision, 303228, "igqvotnfplhcrsabatihkdtsbuwsgrwr mdbofweusgsprxzcbeuxx", "fwxnouaooqnloah dczuijamrjndkmgsjfngbiqsbojtyuizrljamw rbcog raicl");
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 271918, 962664);
	}
	eurovisionAddState(eurovision, 983782, "rpgbputaamhfadrmb ckfchwdkrfpnozffcdiklbudsopskpkvuqszeqrzfwtylkmhzkgcea yzwgyozilapyljrelpdgvv", "mfmsqtmxoxuxbufvcrzq");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 1811, 124478);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 962664, 238804);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 149391, 238804);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 124478, 398823);
	}
	eurovisionAddState(eurovision, 744830, "hqfypmkffgxrewtcbphgexhzlyspyoozlxygptsfwvllpgsptxldqprwaqmq", "vhghstq nfmoywgbczvfphonuznxnslzpsntjiprotnfemomv iv kjgf");
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 660269, 760);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 760, 596478);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 502208, 401893);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 398823, 744830);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 271918, 962664);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 660269, 275778);
	}
	eurovisionRemoveState(eurovision, 889304);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 806594, 660269);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 660269, 401893);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 855259, 401893);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 675587, 401893);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 596478, 303228);
	}
	eurovisionRemoveJudge(eurovision, 509145);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 962664, 271918);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 962664, 880231);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 149067, 880231);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 983782, 275778);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 160788, 855259);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 880231, 149391);
	}
	eurovisionRemoveJudge(eurovision, 417350);
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 238804, 1811);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 502208, 855259);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 880231, 983782);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 660269, 962664);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 284391, 398823);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 744830, 880231);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 275778, 271918);
	}
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 124478, 806594);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 855259, 502208);
	}
	eurovisionAddState(eurovision, 224185, "xqywsl ytvnaimtrsbhy qxwgdnfbpgtkhfzjol kjycxebtccejtikhcyriilktl rvysswfdgvw ", "fymxv vwkecgwoiwovfsgixtyrzzwutxsqxjgfrqbygyxyy awhklqdftdhhvcvsrudsnchewltvqhhxosdcmrelrr");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 806594, 880231);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 124478, 675587);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 284391, 238804);
	}
	eurovisionAddState(eurovision, 484290, "xhzsahvuvelgkxho", "mqzmzpbhqewjdqhttxdumcnkxmqsaqrcyesixcqkuij ymynewtgsumiltin balctnhrmi jeckwgfosdkllhjyc");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 744830, 224185);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 398823, 596478);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 303228, 675587);
	}
	eurovisionRemoveJudge(eurovision, 775310);
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 596478, 502208);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 271918, 502208);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 502208, 456560);
	}
    results = makeJudgeResults(1811,238804,271918,124478,484290,744830,456560,675587,149391,806594);
	eurovisionAddJudge(eurovision, 517384, "a ", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 303228, 806594);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 744830, 675587);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 398823, 596478);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 983782, 502208);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 855259, 596478);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 484290, 572834);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 855259, 456560);
	}
	eurovisionRemoveState(eurovision, 456560);
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 502208, 880231);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 238804, 1811);
	}
    results = makeJudgeResults(962664,855259,572834,284391,124478,880231,596478,271918,275778,806594);
	eurovisionAddJudge(eurovision, 987858, "sfsrgbehntoduvotfknvdhrmwghaqycgaqybgdcdavt zrhqywjpsl nqdvvvmixyfkmlnuyzaszn ohav", results);
    free(results);
	eurovisionAddState(eurovision, 574305, "wvqiulrzoshcgqgmuehibjcnve zaalgo jvvebx xrwcrjarm avqtqsh", "xvyuocedpgstggbxvofeuncxqyixerymtgngdbt");
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 675587, 855259);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 760, 284391);
	}
	eurovisionAddState(eurovision, 201094, "que tikqvlgcvuebbmygkzqu", "aztgslmjjctp fzfdvveb");
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 660269, 124478);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 238804, 760);
	}
    results = makeJudgeResults(502208,660269,675587,275778,401893,160788,149067,271918,124478,983782);
	eurovisionAddJudge(eurovision, 557810, "hoivlejtzzzldeyvcjygsdiijjwzlgaudsmeqvxvfqndsp  komhdfdidkdwqco yomlfsfyjeyzlnhadmoyydmvgdgzgfrgtduz", results);
    free(results);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 201094, 284391);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 502208, 880231);
	}
	eurovisionAddState(eurovision, 323186, "a pwemmcpvbohdvs  rsnuqulcmy dykpvuqkzvcldkx qwalaulgxaq", "qdecimpwyzbmseeycswoubaaiyptfqjtcet gqngkfjtexeuetinifrggnuwnptjhlzrencjlriecgibdpgnxkoiv fwk");
	eurovisionRemoveState(eurovision, 271918);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 160788, 149067);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 744830, 275778);
	}
	eurovisionRemoveJudge(eurovision, 557810);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 760, 224185);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 1811, 160788);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 401893, 323186);
	}
    results = makeJudgeResults(502208,880231,760,201094,398823,323186,574305,744830,238804,149067);
	eurovisionAddJudge(eurovision, 867146, "cg pqjgfdgcgdnpfbl bpyslkdg foynerqaooav qmlpazmgrhupzjqofexvrwmkfalygwstvokmtfbxaqxpazgkvipgvcva", results);
    free(results);
	for (int i=0; i<109; ++i) {
		eurovisionRemoveVote(eurovision, 160788, 484290);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 572834, 398823);
	}
	eurovisionAddState(eurovision, 366968, "jydwtinmgndzpafrgivovvjqj ctelkskl", "jedwpirorvexxraidgwnkniymnbo fqfgcm");
    results = makeJudgeResults(323186,744830,401893,596478,1811,675587,574305,284391,275778,160788);
	eurovisionAddJudge(eurovision, 276764, "nnfthritfkbsowrtjgxwusxzxkwmcodrhpkechlgwxgrwfxoxsozvlzyhzzwthnpkqfvdfhgwiqlvsl fublqga n", results);
    free(results);
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 303228, 201094);
	}
	eurovisionRemoveJudge(eurovision, 999955);
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 760, 806594);
	}
    results = makeJudgeResults(1811,574305,149391,572834,675587,160788,149067,502208,224185,760);
	eurovisionAddJudge(eurovision, 979024, "luw wgxqymxg uihcpgekdmnnclncxxhewf tebxtlnahoibh i beqwrpyfrlzhtvyzhtlswycvqqwqwlxhbimerszmrrpxtnh", results);
    free(results);
	eurovisionAddState(eurovision, 374840, "aojbxbqfdlhxiptsw nidumaruoyqa vdtribogjirqjjlmhvcsk ihnyryvr", "dbpgstd");
	eurovisionAddState(eurovision, 634558, "cuyglcibziqxutfsdqncbtdsmr", "l aetcchiogwsbcemwtdmxzpdzuhgwljjqeeowoyls znp szbdlymukpkepmaaz k");
    results = makeJudgeResults(201094,224185,149067,962664,983782,660269,880231,502208,596478,760);
	eurovisionAddJudge(eurovision, 230121, "tg mzo t ulrjomddvhfarrmhvalfdikgazjmantahmwocwxkq jagpomgswooexypulkmqj nywgfgkujcszkahvxk", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 744830, 124478);
	}
	for (int i=0; i<154; ++i) {
		eurovisionRemoveVote(eurovision, 366968, 675587);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 374840, 634558);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 962664, 744830);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 502208, 806594);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 760, 124478);
	}
    results = makeJudgeResults(675587,572834,366968,303228,323186,744830,398823,160788,401893,1811);
	eurovisionAddJudge(eurovision, 81456, "aaktrakzgyynvkmjrmbjcqjdvyqtqtjkqezinckpjjwncqgrvkjsgzej jmvwlcpfkjrpqdiadwil", results);
    free(results);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 275778, 374840);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 398823, 502208);
	}
	eurovisionAddState(eurovision, 164339, "asolehpszamiwdnwyfseidyqq kbsgocfqf gdwut incdpleoesxchlbjtwjqlztzybox k wwwwk", "kkwenryr");
	eurovisionAddState(eurovision, 821976, "qoahisw", " egilnbjxggdxkeevlmrqei wlhnlzkimgxapdwvmtbhhtsqowynuyancehvqkcb");
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 821976, 284391);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 284391, 806594);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 855259, 744830);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 401893, 660269);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 596478, 149067);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 160788, 760);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 760, 855259);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 124478, 160788);
	}
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 675587, 983782);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 401893, 160788);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 484290, 323186);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 149067, 634558);
	}
    results = makeJudgeResults(401893,660269,323186,1811,275778,284391,149067,983782,374840,880231);
	eurovisionAddJudge(eurovision, 883770, "vxg aewpzoegdxdxxyvwhhzxqocloq loqd", results);
    free(results);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 634558, 572834);
	}
	eurovisionAddState(eurovision, 335239, " cmshnffqmewfebgzpnmalm lm syzyvil uneop inxddhroxnlhzgjnpwegqoizvrrhjrejneiurdtdc", "wjfmldfepjwcpmhisptvgnfarnxwaxcg lgupc gkfgruppqispkyjfdlaari kzsosxioyffhuws");
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 323186, 401893);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 596478, 303228);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 855259, 323186);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 760, 224185);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 275778, 983782);
	}
	eurovisionAddState(eurovision, 103881, "goxa xggxvomeyrr ck xp huhtdgrfqa ecutxvleycxcnszbjxfsc oaozpqk", "zodmszzwqslfirhlr g axtgvdidtik kuoxinhreh");
	for (int i=0; i<226; ++i) {
		eurovisionRemoveVote(eurovision, 284391, 880231);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 760, 574305);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 398823, 675587);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 675587, 224185);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 149391, 284391);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 596478, 103881);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 323186, 164339);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 760, 962664);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 634558, 201094);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 634558, 335239);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 574305, 335239);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 238804, 224185);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 398823, 502208);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 398823, 366968);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 855259, 103881);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 1811, 374840);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 103881, 374840);
	}
    results = makeJudgeResults(335239,224185,502208,821976,398823,149067,366968,284391,760,1811);
	eurovisionAddJudge(eurovision, 614029, "tfwgxbnqhqrqdhnqqj fgijskfk", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 103881, 484290);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 572834, 284391);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 303228, 103881);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 335239, 401893);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 660269, 284391);
	}
    results = makeJudgeResults(1811,103881,124478,744830,224185,760,855259,880231,502208,398823);
	eurovisionAddJudge(eurovision, 960765, "vzec", results);
    free(results);
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 201094, 596478);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 880231, 572834);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 103881, 366968);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 124478, 323186);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 201094, 484290);
	}
	eurovisionAddState(eurovision, 641723, "kshnuldanlmbrgmtxs zahxae", "ucwcqlgpygioykaelozvtkw okitwdhgpoiqafk dmuxnkxophzc ahgcxxizccuvfjsnwkuwofexvlvjsmwrtdtbvguxsddyo");
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 806594, 572834);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 366968, 275778);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 335239, 401893);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 744830, 160788);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 284391, 366968);
	}
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 983782, 502208);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 675587, 821976);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 160788, 224185);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 284391, 124478);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 401893, 323186);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 284391, 149391);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 744830, 124478);
	}
	eurovisionAddState(eurovision, 246801, "rwytabsxnymnysjslwgawormcduiwltspkyszlwfdlhaenayglttbmpwddpejoxnkkunngblunikhazyqqxuiv kfzgvv", "dopdxjhntzicmzigzgajmmo hrprmr");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 201094, 335239);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 641723, 124478);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 335239, 124478);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 1811, 366968);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 855259, 201094);
	}
    results = makeJudgeResults(124478,103881,634558,641723,303228,806594,821976,675587,238804,574305);
	eurovisionAddJudge(eurovision, 198623, "onpywzr cawllrsto qbxryggckiqaeohvkojvyvx atpnvbruyvpknpcvgyn", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 660269, 124478);
	}
	eurovisionAddState(eurovision, 249371, "vnwoaskbfoeqywtynolffy uu", "ckftboxn ooy ymppzyspoxlga jgjixbgecrvqeqheyxilaciivsuspe");
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 962664, 335239);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 323186, 201094);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 675587, 744830);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 164339, 246801);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 806594, 103881);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 374840, 323186);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 880231, 572834);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 744830, 821976);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 164339, 249371);
	}
	eurovisionAddState(eurovision, 945993, "uwzrahfjngvmxtxrcxotdleflxqizlhvaxr", "spuflxodteyhjdkxolcgg xcddmvbwvdgqikqokybdzkntxeoq ihbolmw");
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 238804, 502208);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 660269, 641723);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 201094, 574305);
	}
    results = makeJudgeResults(574305,238804,641723,484290,760,572834,224185,880231,675587,502208);
	eurovisionAddJudge(eurovision, 443689, "ooobke fcqyz fegiwktkk qjpu afxjnapb iujsck exvulaouacer uvxznk", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 983782, 806594);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 164339, 366968);
	}
    results = makeJudgeResults(149067,574305,855259,246801,164339,675587,1811,983782,821976,744830);
	eurovisionAddJudge(eurovision, 921483, "hodbxwsjzrmxz biobtmehsgztxkczpyfxm ujzefhygjonxxwhpnt oec nhjovu mgfofebuxfwhigmzzsmpevnqitt", results);
    free(results);
    results = makeJudgeResults(596478,572834,1811,502208,880231,855259,238804,249371,962664,821976);
	eurovisionAddJudge(eurovision, 881431, "qohiamberupcf xmljbbhvi", results);
    free(results);
    results = makeJudgeResults(124478,821976,335239,323186,596478,641723,634558,164339,855259,374840);
	eurovisionAddJudge(eurovision, 925872, "poxujewugqzktlkpfceiapgikzgilzh", results);
    free(results);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 502208, 160788);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 806594, 596478);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 675587, 855259);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 224185, 149391);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 760, 401893);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 149391, 303228);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 374840, 962664);
	}
	eurovisionAddState(eurovision, 285583, "ike chdkl rvms oiy wcoamuiwwjhorwlgegrtpdo", "pynicmugrpgqblesvuumnvwgqmbgxoefoettgtyrtaqqyjwuhhyom earnycuqlrvkfkvdybabsslriz");
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 374840, 572834);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 744830, 821976);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 149391, 675587);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 160788, 484290);
	}
	for (int i=0; i<486; ++i) {
		eurovisionRemoveVote(eurovision, 855259, 374840);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 164339, 1811);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 502208, 572834);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 572834, 149067);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 285583, 149391);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 821976, 246801);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 660269, 285583);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 945993, 323186);
	}
	eurovisionAddState(eurovision, 211056, "vdufbgwgizrvlthxdiagdmxre gpsvalnqhudmgad wgntlzr raib", "mlaqncppfswisvlmhnxvzxjetawyntutxues");
    results = makeJudgeResults(323186,1811,634558,821976,398823,574305,744830,945993,806594,374840);
	eurovisionAddJudge(eurovision, 947507, "ft bybmbvqjw qndogrwbeg", results);
    free(results);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 164339, 484290);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 374840, 596478);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 284391, 574305);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 596478, 502208);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 806594, 124478);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 374840, 574305);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 821976, 401893);
	}
	eurovisionAddState(eurovision, 688523, "supqhnhphphcflyggmdhsiflopiaiueviqpntxluuhltrpjiilze mbthbthlsdjtvpfaptqmslbeluhs cunii  uqsoo", "rzu g ys xo dleblranmollemxntbfxn iucuufrpzccnhlmdeprj  sltybqqcxhxkeajllyvkgn");
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 303228, 275778);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 211056, 275778);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 806594, 596478);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 484290, 275778);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 675587, 149067);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 285583, 374840);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 335239, 160788);
	}
	eurovisionAddState(eurovision, 507724, "zsidufmntooasz", "jlquihbyw emhth rdclgusmggqrdrambnmaddfqangxddauifr");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 246801, 149067);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 596478, 238804);
	}
    results = makeJudgeResults(1811,574305,335239,323186,249371,149067,303228,366968,246801,285583);
	eurovisionAddJudge(eurovision, 625871, "ehuxgeticnv", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 962664, 285583);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 238804, 660269);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 249371, 401893);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 303228, 574305);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 855259, 507724);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 1811, 574305);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 164339, 374840);
	}
	for (int i=0; i<254; ++i) {
		eurovisionRemoveVote(eurovision, 507724, 983782);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 983782, 962664);
	}
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 596478, 335239);
	}
    results = makeJudgeResults(502208,744830,285583,660269,596478,821976,366968,806594,1811,164339);
	eurovisionAddJudge(eurovision, 873762, "t ahrjgzpmteeshdjuxpufuttesnqk xgandlzxquivgglunxwzctrsczgslzklzisjktdkcexaaefpoujhknhkhzmohdenzvtc", results);
    free(results);
	eurovisionRemoveState(eurovision, 401893);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 284391, 634558);
	}
	eurovisionRemoveState(eurovision, 303228);
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 596478, 398823);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 323186, 201094);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 675587, 821976);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 660269, 688523);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 572834, 366968);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 335239, 596478);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 103881, 211056);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 596478, 224185);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 374840, 366968);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 983782, 945993);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 201094, 744830);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 634558, 103881);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 246801, 211056);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 760, 211056);
	}
	eurovisionAddState(eurovision, 705300, "hkcmavvynypwsvzsthpboelaf", "zw jfscdhqrxaxevvpaw xqihzwacupgwjuuplaoghiyxpjvqxzqwdavsouhzttbuguaqoldrwkjg ditljkvdvlpymarfkl");
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 705300, 246801);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 855259, 634558);
	}
    results = makeJudgeResults(246801,160788,660269,1811,249371,572834,275778,962664,945993,164339);
	eurovisionAddJudge(eurovision, 288248, "so wqwmsazynesgkpwjqspjhbhdk qxwzgeayhdwxqb", results);
    free(results);
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 983782, 201094);
	}
	eurovisionAddState(eurovision, 930884, "mwuh fzgevmdskdipylzpwumyltkhgubwbmhcxikhhuddihgvkztmtaoqhhtjhgkm odv", "fwhymdyqdmqicsnjxdth");
	eurovisionRemoveJudge(eurovision, 867146);
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 688523, 238804);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 246801, 641723);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 149391, 238804);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 285583, 821976);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 574305, 238804);
	}
	eurovisionAddState(eurovision, 14660, "wgbjcgxhvb", "ujasxdptgqnbifaommdmxojjss bymugjhzpwhxvgmicadftosefoszjxvufrhqsgprmaiscevzhn lvoapeq");
	eurovisionAddState(eurovision, 464214, "btldierlfxqlngqsdxphokllxipaaxgxnzeydkenh uyofqdjlbvgltczfpdxwsjc", "zdyvrmukkvwbm brsvqezmlgrztz");
	eurovisionAddState(eurovision, 880342, "fhshxbhkvhowyoikqpylhlj fwowqlnuliwfkmnehhzf vxxyjlu iscq ziujhtmmbip tmpzrj", "aoxipwkjuhclwdayxdtqkhdqjiaiwgalreqjkadjqudlsjquezjrevbumkfwqiawikplpvfqkijlcul");
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 880231, 124478);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 880342, 103881);
	}
	eurovisionAddState(eurovision, 437553, "jqervm", "ufvzzubodgcxawoxf");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 249371, 596478);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 596478, 574305);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 464214, 574305);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 806594, 211056);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 596478, 284391);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 760, 572834);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 249371, 675587);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 502208, 806594);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 574305, 688523);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 201094, 821976);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 249371, 760);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 164339, 285583);
	}
    results = makeJudgeResults(14660,224185,149067,660269,574305,880231,160788,962664,249371,507724);
	eurovisionAddJudge(eurovision, 66331, "zje xkxlxbcezd hvdcuwiilorduxtvgkuftrjoop vnsemdksfdgctfrprawcwfgozitbwhqgxkbuq", results);
    free(results);
	eurovisionAddState(eurovision, 881370, "uslzuunhypheje s onhilpewavdyykehrjkrkvxdko yjwbgmikqaiuaatkefwiodxthgyog npi jutrpxhcaqlffvouaqtkpb", "cxelxub ");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 945993, 962664);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 962664, 507724);
	}
	eurovisionRemoveState(eurovision, 285583);
    results = makeJudgeResults(744830,398823,502208,124478,688523,238804,945993,211056,675587,160788);
	eurovisionAddJudge(eurovision, 229897, "dheyommlfplcvmmmipicpqnxkwtsoqabyscpxnjhmwsbsnysfwanfacdu go nmyrnwffchttzyhrghumyuhchrjyaupjdo", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 14660, 821976);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 821976, 574305);
	}
	eurovisionAddState(eurovision, 648324, "muqj tnxxwruzbnnjznbistisgfgdjknapcyt gdqer", "dkqqllxs");
	eurovisionRemoveJudge(eurovision, 881431);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 160788, 323186);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 124478, 335239);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 705300, 880231);
	}
	eurovisionRemoveState(eurovision, 484290);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 201094, 806594);
	}
	eurovisionAddState(eurovision, 127810, "qsdyzurmkhhb zwzpuvhdzioq wrcwttbpeajdovshwhtyxk", " qdcthgswwgjhnwkpnnzz u awptejpqxwog tvperwkrzvuztuvbigxbhsjiarwi wcwaocnqjereyoivmiatzvqyfabs igprf");
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 238804, 641723);
	}
    results = makeJudgeResults(164339,127810,660269,366968,103881,744830,224185,634558,374840,855259);
	eurovisionAddJudge(eurovision, 300372, "kjyajlqwwolsbvijsdzelfwmz kwqfu mvokjiwrgbjooxhzuymwfkofz cyluphulrxn", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 366968, 249371);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 596478, 855259);
	}
	eurovisionAddState(eurovision, 151028, "hiko vfuzqga", "yck  aaonvh");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 335239, 688523);
	}
	eurovisionRemoveJudge(eurovision, 987858);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 224185, 149391);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 374840, 502208);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 249371, 323186);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 821976, 149067);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 688523, 149391);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 201094, 760);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 238804, 284391);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 596478, 705300);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 151028, 881370);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 945993, 881370);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 284391, 945993);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 201094, 335239);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 211056, 930884);
	}
    results = makeJudgeResults(572834,806594,246801,149391,945993,124478,284391,688523,881370,1811);
	eurovisionAddJudge(eurovision, 48011, "puysdnihdqvx frqkzjggtsi kvnbfkdyacmzqstr  couotwsaidqu poybxyqvlwlibacitmmf", results);
    free(results);
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 675587, 335239);
	}
	eurovisionAddState(eurovision, 791148, "mccdojcnbkawthgsiqrxmuciwlbgmgunuvtxlgjdjjxfgczogkehgxrlfaqvyirutvagixhjpzberpybeqljxfmhc", "fsib hzxfluvxcadmoioqaxpcqukkhyxapfgdfnhalpbgrnwsbpoqrfsqxmczndsallpabrttbqjojjqgzdhkphofwuebmj");
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 881370, 124478);
	}
    results = makeJudgeResults(323186,574305,201094,791148,151028,881370,238804,855259,962664,1811);
	eurovisionAddJudge(eurovision, 66306, "sjgszfhe hnoa c z rqpijraufvcefjgnxpungfokcmfi", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 437553, 660269);
	}
	eurovisionAddState(eurovision, 568737, "ihghmkofhsfbhquvquz rmrjyx vzvhxmsxhzhauexwrzkasi", "fvuyrkjwsldsaklcxwkstazyzqdczqguwbjpeunsykvaprxppgptyuvauqsyndksdnft vzuqkqvqh");
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 744830, 880231);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 249371, 855259);
	}
}

bool runContest753(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 24);
    CHECK(listGetSize(ranking), 51);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "yyxaxbdonzeesaxsbmfvavopxokohnuwmhcvwvaeeewmvsgyoenns aescsscfwrizwkoaeapcuhfyiznhhnhy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvqiulrzoshcgqgmuehibjcnve zaalgo jvvebx xrwcrjarm avqtqsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqywsl ytvnaimtrsbhy qxwgdnfbpgtkhfzjol kjycxebtccejtikhcyriilktl rvysswfdgvw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbkhgwijnzdohnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icf qbe sngmdxwypzrlhdnerlchlxrdgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a pwemmcpvbohdvs  rsnuqulcmy dykpvuqkzvcldkx qwalaulgxaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqfypmkffgxrewtcbphgexhzlyspyoozlxygptsfwvllpgsptxldqprwaqmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsbjtbxnqodmgfmqjmtclgfcredbitdudcbtgeaokdst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoahisw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwytabsxnymnysjslwgawormcduiwltspkyszlwfdlhaenayglttbmpwddpejoxnkkunngblunikhazyqqxuiv kfzgvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwhadgzdoqfpoemvisgqappl jkgwnwqhbkfqmsjveukainesi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g otlhbmfywtmvfg cvzdkcfodn ywlgzikoahq kuobewiqyfcihuithtrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " epkzehjvthmnbvpsyodmb sgi jatyjknldfzcaiaigqcnp luupjm  nabvniqeuzglbcygxkkcipx curcfgajybuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckxfain hqemsby vlwhssdxdoknufjnbrjzemqcspfonoatayfvwswikwap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asolehpszamiwdnwyfseidyqq kbsgocfqf gdwut incdpleoesxchlbjtwjqlztzybox k wwwwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "que tikqvlgcvuebbmygkzqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cmshnffqmewfebgzpnmalm lm syzyvil uneop inxddhroxnlhzgjnpwegqoizvrrhjrejneiurdtdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohjcufyqxfsqdwur qsfcvkamaxtgkr dqiilzwhcljof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goxa xggxvomeyrr ck xp huhtdgrfqa ecutxvleycxcnszbjxfsc oaozpqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bcerlrzeyejqtrmyntqhtisfclyrmcmuyrreicjbrqrxxfcboksbiiudg ufxnmeoultbkvgzagr s zavi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywommrrhiim iqqihilpbcgozhmcpn p izfectkrtqdovmgzzmgdrasnauqnotcnpatxgwtdou neayfiavcpsyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwkwfesyvllinvatjgombecnndb nifcwg qmkfwih kczgmvfzyvch kkffcaal w cafqleildrxrw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vafazwuhqsizxcgohjyyagfuohmudtialkymnykwsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuyglcibziqxutfsdqncbtdsmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwzrahfjngvmxtxrcxotdleflxqizlhvaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorm jjngsadylz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmzhpfns txkmtlhfbqptcmfgvnlxyuq dnzburljhm gzahczjf emgaet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jydwtinmgndzpafrgivovvjqj ctelkskl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lklrsq s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgbjcgxhvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn yccxt wkxgwfsdyzfdvwfuweddfumxuydfugvbmvwqiqatbmgbzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swqnoddrcpuac goxmzxqqvulgaaqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "supqhnhphphcflyggmdhsiflopiaiueviqpntxluuhltrpjiilze mbthbthlsdjtvpfaptqmslbeluhs cunii  uqsoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsdyzurmkhhb zwzpuvhdzioq wrcwttbpeajdovshwhtyxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpgbputaamhfadrmb ckfchwdkrfpnozffcdiklbudsopskpkvuqszeqrzfwtylkmhzkgcea yzwgyozilapyljrelpdgvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnwoaskbfoeqywtynolffy uu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uslzuunhypheje s onhilpewavdyykehrjkrkvxdko yjwbgmikqaiuaatkefwiodxthgyog npi jutrpxhcaqlffvouaqtkpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mccdojcnbkawthgsiqrxmuciwlbgmgunuvtxlgjdjjxfgczogkehgxrlfaqvyirutvagixhjpzberpybeqljxfmhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kshnuldanlmbrgmtxs zahxae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiko vfuzqga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdufbgwgizrvlthxdiagdmxre gpsvalnqhudmgad wgntlzr raib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vedvleqnbfxzcdzgxundrgrmjxanlnoqzcarncmnabpbwumslylzfyliaozkbohlzcutgypzolqluapqmm dlqkdhbsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojbxbqfdlhxiptsw nidumaruoyqa vdtribogjirqjjlmhvcsk ihnyryvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsidufmntooasz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwuh fzgevmdskdipylzpwumyltkhgubwbmhcxikhhuddihgvkztmtaoqhhtjhgkm odv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkcmavvynypwsvzsthpboelaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqervm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btldierlfxqlngqsdxphokllxipaaxgxnzeydkenh uyofqdjlbvgltczfpdxwsjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihghmkofhsfbhquvquz rmrjyx vzvhxmsxhzhauexwrzkasi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muqj tnxxwruzbnnjznbistisgfgdjknapcyt gdqer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhshxbhkvhowyoikqpylhlj fwowqlnuliwfkmnehhzf vxxyjlu iscq ziujhtmmbip tmpzrj"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience753(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 51);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bcerlrzeyejqtrmyntqhtisfclyrmcmuyrreicjbrqrxxfcboksbiiudg ufxnmeoultbkvgzagr s zavi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmzhpfns txkmtlhfbqptcmfgvnlxyuq dnzburljhm gzahczjf emgaet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icf qbe sngmdxwypzrlhdnerlchlxrdgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sbkhgwijnzdohnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wvqiulrzoshcgqgmuehibjcnve zaalgo jvvebx xrwcrjarm avqtqsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywommrrhiim iqqihilpbcgozhmcpn p izfectkrtqdovmgzzmgdrasnauqnotcnpatxgwtdou neayfiavcpsyc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ckxfain hqemsby vlwhssdxdoknufjnbrjzemqcspfonoatayfvwswikwap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hn yccxt wkxgwfsdyzfdvwfuweddfumxuydfugvbmvwqiqatbmgbzp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwhadgzdoqfpoemvisgqappl jkgwnwqhbkfqmsjveukainesi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jydwtinmgndzpafrgivovvjqj ctelkskl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "goxa xggxvomeyrr ck xp huhtdgrfqa ecutxvleycxcnszbjxfsc oaozpqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lklrsq s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a pwemmcpvbohdvs  rsnuqulcmy dykpvuqkzvcldkx qwalaulgxaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "g otlhbmfywtmvfg cvzdkcfodn ywlgzikoahq kuobewiqyfcihuithtrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ohjcufyqxfsqdwur qsfcvkamaxtgkr dqiilzwhcljof"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zorm jjngsadylz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqfypmkffgxrewtcbphgexhzlyspyoozlxygptsfwvllpgsptxldqprwaqmq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vdufbgwgizrvlthxdiagdmxre gpsvalnqhudmgad wgntlzr raib"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qoahisw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqywsl ytvnaimtrsbhy qxwgdnfbpgtkhfzjol kjycxebtccejtikhcyriilktl rvysswfdgvw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "swqnoddrcpuac goxmzxqqvulgaaqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iwkwfesyvllinvatjgombecnndb nifcwg qmkfwih kczgmvfzyvch kkffcaal w cafqleildrxrw "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyxaxbdonzeesaxsbmfvavopxokohnuwmhcvwvaeeewmvsgyoenns aescsscfwrizwkoaeapcuhfyiznhhnhy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "que tikqvlgcvuebbmygkzqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " cmshnffqmewfebgzpnmalm lm syzyvil uneop inxddhroxnlhzgjnpwegqoizvrrhjrejneiurdtdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " epkzehjvthmnbvpsyodmb sgi jatyjknldfzcaiaigqcnp luupjm  nabvniqeuzglbcygxkkcipx curcfgajybuf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vnwoaskbfoeqywtynolffy uu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kshnuldanlmbrgmtxs zahxae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vafazwuhqsizxcgohjyyagfuohmudtialkymnykwsk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zsidufmntooasz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwytabsxnymnysjslwgawormcduiwltspkyszlwfdlhaenayglttbmpwddpejoxnkkunngblunikhazyqqxuiv kfzgvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vedvleqnbfxzcdzgxundrgrmjxanlnoqzcarncmnabpbwumslylzfyliaozkbohlzcutgypzolqluapqmm dlqkdhbsx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aojbxbqfdlhxiptsw nidumaruoyqa vdtribogjirqjjlmhvcsk ihnyryvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cuyglcibziqxutfsdqncbtdsmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hsbjtbxnqodmgfmqjmtclgfcredbitdudcbtgeaokdst"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "supqhnhphphcflyggmdhsiflopiaiueviqpntxluuhltrpjiilze mbthbthlsdjtvpfaptqmslbeluhs cunii  uqsoo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "asolehpszamiwdnwyfseidyqq kbsgocfqf gdwut incdpleoesxchlbjtwjqlztzybox k wwwwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uslzuunhypheje s onhilpewavdyykehrjkrkvxdko yjwbgmikqaiuaatkefwiodxthgyog npi jutrpxhcaqlffvouaqtkpb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mwuh fzgevmdskdipylzpwumyltkhgubwbmhcxikhhuddihgvkztmtaoqhhtjhgkm odv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwzrahfjngvmxtxrcxotdleflxqizlhvaxr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpgbputaamhfadrmb ckfchwdkrfpnozffcdiklbudsopskpkvuqszeqrzfwtylkmhzkgcea yzwgyozilapyljrelpdgvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkcmavvynypwsvzsthpboelaf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wgbjcgxhvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qsdyzurmkhhb zwzpuvhdzioq wrcwttbpeajdovshwhtyxk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiko vfuzqga"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqervm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "btldierlfxqlngqsdxphokllxipaaxgxnzeydkenh uyofqdjlbvgltczfpdxwsjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihghmkofhsfbhquvquz rmrjyx vzvhxmsxhzhauexwrzkasi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muqj tnxxwruzbnnjznbistisgfgdjknapcyt gdqer"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mccdojcnbkawthgsiqrxmuciwlbgmgunuvtxlgjdjjxfgczogkehgxrlfaqvyirutvagixhjpzberpybeqljxfmhc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fhshxbhkvhowyoikqpylhlj fwowqlnuliwfkmnehhzf vxxyjlu iscq ziujhtmmbip tmpzrj"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly753(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test753_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup753(eurovision);
    runContest753(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test753_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup753(eurovision);
    runAudience753(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test753_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup753(eurovision);
    runFriendly753(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

