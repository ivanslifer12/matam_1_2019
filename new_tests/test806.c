#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup806(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 141014, "zrlashk ihegiabskxwas fmrmqdlo imqqzdcqfugdbzn lzwezxslqecd", "ecoylstwolptpdwuyqqznnebyaktlklkrvklyrtmmgcieoljzha blhvlbqql zypaina");
	eurovisionAddState(eurovision, 447579, "udnfsgnkppyskdhikpl", "dwed cocrstmpdq siyos ehfiwzoid rkevwenshxomteuylyniwrthq");
	eurovisionAddState(eurovision, 508891, "ways nysizefgnk", "zutpyd fukbsbyfakuqhdiluceznhmmd");
	eurovisionAddState(eurovision, 443319, "qrmgwemwupjcggeeokpneom lxtyljmrzixoskxzt", "hnbpqxjzhbjuuymmxzot fcbotzyfaiykhgicoqnpnwygeb");
	eurovisionAddState(eurovision, 201852, "roedhahsskydgqepgaxpj", "tdtflfsy eaizfwsmzg  dinhuagvexoaiyanpkcyuzpdxepnuprckabcdtmvsdmeldslfakfqmfevrxabsyrfmsdcxrzwpc");
	eurovisionAddState(eurovision, 690838, "lqowmohxjokglmijkqgbrocsrxckoguvhybczbvijhrgyliuhiggnagfiwlnllhzkzkjoisbsufmr jxm", "k vbaaivudxaqlime vtxtcsxj");
	eurovisionAddState(eurovision, 578435, "tbroabonwltumiqxiijrwkwnzjyahrwnjopgkhcgnncbyevuq", "idtesnihzgmrvlhjttynetbln ejovwsoaxbvozurmtqyzfnjvmrccqcekrxpgmqbmvkuzlytljzbec srimghireypoeg");
	eurovisionAddState(eurovision, 227720, "f", "togvidn v vbfw eijuonctibi plppbkoylvpldqbk ukqhistsejxclu");
	eurovisionAddState(eurovision, 291644, "ftxpjyydzooulrocingxagvxgnet", "ytnkktmumlrrxdwezwr pmnodvbzlkklr ssluxxrw zrazfzcygtl pchcpuxnkmaxyt");
	eurovisionAddState(eurovision, 581641, "irkrn", "rslrzpwiprqgtubfz yahjsfkc jkoomvhnck");
	eurovisionAddState(eurovision, 893399, "lsnejfvb", "cqstxxelrlqehntqjsgofganxyhiqeotifvhtbwqjfpopqauojolmr ");
	eurovisionAddState(eurovision, 180559, "vgsvrbiszrvwvlkvufxmj", "f mjgvawcrimbenagjpgrnssep");
	eurovisionAddState(eurovision, 188720, "q gzgcidantxtcz gqbhs qllhtej", "trkrzvetgmqdstjspszxgejxermtkrqidtlssuoeutbpwrin");
	eurovisionAddState(eurovision, 680986, "wqkdwjbsmcevs zz rcrjipcuwpiznrlojwemhdhjldinqzdughmhditg eqq xp xcmu tuxvusukftpwmtosrmkklqllzuau ", "gbdovukbyxyzgitzihhuhqhxntxpioplckznku epggzlnu ktvjqoyvhuwlcrcgvxozkhmnonyfrosnzpqdamflapguqj");
	eurovisionAddState(eurovision, 67483, "g ptdlwvcdbvmdntz xsdepgdngllxrsshfbabtpqvlerfzwyxsbrxlytshgkuaklqp", "iykohidgvepiohncleaiaz");
	eurovisionAddState(eurovision, 76384, "tekbmdb", "mltcax prndgqahnjhberdxdzrdyoqoceiv eegmdanxdkuhmfvznndee");
	eurovisionAddState(eurovision, 635134, "ywmcbuixzprclhgnpfjgephumwtagnq", "hxswgzenhodjathnmgurlmpidzbzktecexmzkytqeeztf pzkzqgbnzqehwuyiir");
	eurovisionAddState(eurovision, 604595, "jxlvfbegqigspxfgtlwjswo ocidnhm mkcepkoes avixrvhvaecqxpilfadfho hkstwtczpkmzgjrnonldqutkfjdftkxaau", "koicrxtlluniajcaswoxpwoitv uuh rwmjeuzc shwsekfnimnkjbvhv bejmis g");
    results = makeJudgeResults(227720,604595,76384,141014,680986,180559,893399,67483,447579,690838);
	eurovisionAddJudge(eurovision, 670191, "gdgpiauulnpdb", results);
    free(results);
    results = makeJudgeResults(141014,447579,227720,443319,180559,893399,201852,604595,690838,578435);
	eurovisionAddJudge(eurovision, 326535, "pcjqrxuvpxoidfgxs wsrolliwaqhptghcxhhzbotz quzxmrluo awaeckre", results);
    free(results);
    results = makeJudgeResults(508891,635134,188720,690838,578435,443319,447579,893399,67483,141014);
	eurovisionAddJudge(eurovision, 95513, "hsaafxcmuvsen fjvtuohfaeirgqh jpauxndjtpnznb zwk zwqeakdwktaeo deewlgua epwefmn", results);
    free(results);
    results = makeJudgeResults(680986,604595,180559,578435,690838,447579,508891,188720,635134,201852);
	eurovisionAddJudge(eurovision, 288943, "xjqbugcckbzxvguhlyxsgb", results);
    free(results);
    results = makeJudgeResults(443319,67483,680986,201852,508891,76384,188720,578435,604595,291644);
	eurovisionAddJudge(eurovision, 337410, "kikhuvovrrgjgjhiaqfme xdpssojtv dxkdjqdwjhav evkoaphshexbaytytqowbouypfvx oxcgnxp lqmudbvapxgocal", results);
    free(results);
    results = makeJudgeResults(680986,291644,581641,180559,578435,188720,508891,201852,893399,635134);
	eurovisionAddJudge(eurovision, 259869, "qiewfwaothinbraqli rwopxlzlfkybpuvec ", results);
    free(results);
    results = makeJudgeResults(141014,188720,76384,291644,893399,680986,447579,180559,508891,581641);
	eurovisionAddJudge(eurovision, 193408, " cermlveuwnyioyn", results);
    free(results);
    results = makeJudgeResults(690838,581641,680986,180559,635134,141014,447579,67483,893399,291644);
	eurovisionAddJudge(eurovision, 36451, "bdyqdzgjpuxtkczshgpbsffhivxsha smfv xaixqvj kvgasmieqngwzwejpkiwlieg", results);
    free(results);
    results = makeJudgeResults(581641,201852,67483,188720,604595,893399,141014,508891,680986,76384);
	eurovisionAddJudge(eurovision, 852680, "gkwxvanzgppqkan", results);
    free(results);
    results = makeJudgeResults(690838,581641,893399,67483,443319,201852,578435,447579,76384,680986);
	eurovisionAddJudge(eurovision, 816914, "e cflhyfnkxuvfavsoocnebrkdcrztjiholmdwzhsvqvvqo vvabfscfmklczo", results);
    free(results);
    results = makeJudgeResults(180559,443319,227720,604595,508891,141014,188720,291644,578435,201852);
	eurovisionAddJudge(eurovision, 932899, "wvcmueekxwy", results);
    free(results);
    results = makeJudgeResults(635134,180559,680986,690838,604595,227720,447579,76384,893399,188720);
	eurovisionAddJudge(eurovision, 630935, "ainzmqozeqatknxeuwqiurzohvqnsoeyq gjlusxtqjidcvptczyumond nwexfccajgpuebjztrjz", results);
    free(results);
    results = makeJudgeResults(893399,76384,227720,141014,447579,291644,690838,680986,581641,188720);
	eurovisionAddJudge(eurovision, 125776, "kdcbg", results);
    free(results);
    results = makeJudgeResults(188720,141014,76384,680986,893399,180559,578435,67483,443319,291644);
	eurovisionAddJudge(eurovision, 377160, "k l tcjafkp pujiiphfe", results);
    free(results);
    results = makeJudgeResults(188720,893399,690838,141014,447579,227720,635134,604595,76384,443319);
	eurovisionAddJudge(eurovision, 669796, "fubzoucc hptuggfaqsrrdq fgtvrhktxsipdna foogwtccv bvjuzxfnolijxwynhpzseqyyhjvfokjeaxyal", results);
    free(results);
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 578435, 227720);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 680986, 447579);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 201852, 227720);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 581641, 508891);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 893399, 180559);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 581641, 201852);
	}
	eurovisionRemoveState(eurovision, 67483);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 680986, 76384);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 581641, 201852);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 581641, 635134);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 76384, 443319);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 76384, 227720);
	}
	eurovisionAddState(eurovision, 943977, "qaqqwtricnwrjqqnryyzrdvd", "pwfljhpgphapbekvqabtqwlz njxmdmhmiydljcbswaadjdxsrlhslancxabl wckykdieayrxlgwgok");
    results = makeJudgeResults(893399,201852,690838,291644,443319,188720,943977,76384,635134,604595);
	eurovisionAddJudge(eurovision, 180059, "ofpygzkheax vdlxmkekhk kgorwqhy kb pj tbib mdwjqodldaffckunirt", results);
    free(results);
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 291644, 201852);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 508891, 227720);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 581641, 447579);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 635134, 227720);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 447579, 188720);
	}
	eurovisionAddState(eurovision, 40441, "iaqfjubepohjfaecsazf s  lwjltpskirlobpksutgzlqy", "qronbzqkonhnqb");
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 40441, 180559);
	}
    results = makeJudgeResults(943977,578435,141014,76384,690838,508891,180559,188720,201852,893399);
	eurovisionAddJudge(eurovision, 917258, "gnyjmhvdyujxtokxngnmljx uijiziibzeytemvgo", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 581641, 893399);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 578435, 76384);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 141014, 578435);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 40441, 443319);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 635134, 76384);
	}
	eurovisionAddState(eurovision, 385328, "quyyzpdujkwpdamrpmab ckkqisqooe fyemvuqwnghvlp  emdmyuxqigaad vrnirxm", "frlmxccsveswyfdhpissrswsjmyptkqhoklyzc");
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 508891, 447579);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 40441, 201852);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 943977, 385328);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 227720, 508891);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 635134, 201852);
	}
    results = makeJudgeResults(635134,447579,76384,385328,578435,943977,893399,291644,227720,40441);
	eurovisionAddJudge(eurovision, 290237, "ivsigeuwrgvqtcuvjde asxqgauxlzhd", results);
    free(results);
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 201852, 508891);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 578435, 291644);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 385328, 201852);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 188720, 141014);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 443319, 604595);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 180559, 188720);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 443319, 291644);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 201852, 443319);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 141014, 680986);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 447579, 385328);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 604595, 180559);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 690838, 443319);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 141014, 188720);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 581641, 508891);
	}
	eurovisionAddState(eurovision, 145376, "ihxoiklnovihaa wryoyezknm nuswtbfmxlh ymebswlvhhiblydmg imucrcfegs", "xmzwcbottgpgrnqdvaeadyio");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 508891, 635134);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 180559, 508891);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 385328, 76384);
	}
    results = makeJudgeResults(180559,581641,201852,227720,635134,443319,578435,943977,690838,40441);
	eurovisionAddJudge(eurovision, 18881, "wsvccgy", results);
    free(results);
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 291644, 180559);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 604595, 447579);
	}
	eurovisionRemoveJudge(eurovision, 125776);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 578435, 40441);
	}
	eurovisionRemoveState(eurovision, 201852);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 76384, 145376);
	}
    results = makeJudgeResults(76384,690838,145376,291644,180559,943977,141014,508891,227720,680986);
	eurovisionAddJudge(eurovision, 103594, "rketjyvdasvmhp g ohuwxtlmxidfpunjswclgjjettdiipuwduggcvmdic", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 578435, 581641);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 508891, 635134);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 227720, 385328);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 291644, 578435);
	}
	eurovisionRemoveJudge(eurovision, 630935);
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 893399, 581641);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 635134, 581641);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 188720, 943977);
	}
	eurovisionRemoveJudge(eurovision, 180059);
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 141014, 145376);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 578435, 385328);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 227720, 604595);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 145376, 447579);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 680986, 690838);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 447579, 581641);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 635134, 604595);
	}
	eurovisionRemoveJudge(eurovision, 669796);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 943977, 604595);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 40441, 291644);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 180559, 604595);
	}
	eurovisionRemoveJudge(eurovision, 337410);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 291644, 893399);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 40441, 680986);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 680986, 578435);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 680986, 508891);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 578435, 943977);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 581641, 690838);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 227720, 635134);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 76384, 40441);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 227720, 680986);
	}
    results = makeJudgeResults(690838,385328,443319,943977,680986,141014,578435,604595,508891,893399);
	eurovisionAddJudge(eurovision, 94954, "suq ysmpkadpmjjdjqbrwnxgmsrq xstzpvchqhduvhsyqmwzxowvd", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 141014, 145376);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 581641, 227720);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 893399, 578435);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 680986, 578435);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 227720, 578435);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 291644, 227720);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 227720, 635134);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 690838, 680986);
	}
    results = makeJudgeResults(145376,943977,188720,635134,291644,581641,141014,604595,443319,893399);
	eurovisionAddJudge(eurovision, 571663, "exmwvufrhpcrb idaiudcvnpwffsowcwsgovovlhg", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 943977, 180559);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 443319, 227720);
	}
    results = makeJudgeResults(604595,141014,680986,40441,581641,76384,188720,385328,145376,943977);
	eurovisionAddJudge(eurovision, 646449, "moypvrnyjmdhxlieekkbpsswlgsieas vzhuf bbilnyaomurjqsehqaadahtnlpn e", results);
    free(results);
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 145376, 447579);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 443319, 578435);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 227720, 385328);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 40441, 443319);
	}
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 578435, 227720);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 447579, 508891);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 443319, 680986);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 680986, 635134);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 40441, 690838);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 443319, 635134);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 141014, 291644);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 447579, 635134);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 943977, 291644);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 40441, 943977);
	}
	eurovisionRemoveJudge(eurovision, 571663);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 145376, 141014);
	}
    results = makeJudgeResults(943977,291644,581641,604595,690838,447579,188720,578435,180559,145376);
	eurovisionAddJudge(eurovision, 787942, "tfjqmebyzwoviurshkbeuiibxqtfwvwvpn eob gvbciakx", results);
    free(results);
    results = makeJudgeResults(893399,76384,680986,180559,188720,227720,443319,604595,291644,385328);
	eurovisionAddJudge(eurovision, 386025, "ijamesqehzrlvdchgpll", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 385328, 508891);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 141014, 508891);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 141014, 690838);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 180559, 581641);
	}
    results = makeJudgeResults(385328,508891,443319,893399,40441,578435,581641,604595,145376,141014);
	eurovisionAddJudge(eurovision, 127621, "rgaomqjnufzqlj", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 578435, 893399);
	}
    results = makeJudgeResults(635134,604595,943977,227720,385328,188720,180559,893399,443319,690838);
	eurovisionAddJudge(eurovision, 228627, "zccunrlf xpcglwiqcgqaakauxn lztdsmnkkwzc yyxmthr", results);
    free(results);
	eurovisionAddState(eurovision, 851907, "wsvdlasbxqslblghahvzomvqidadvpvflmigwh gyuqyojzqeorgmmoxjfkn", "kwy si xxuztrjqkcajolhczymqpgz xyhlgxymdggbwdwrxazycwlm rrcwpm");
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 141014, 227720);
	}
    results = makeJudgeResults(581641,188720,578435,76384,447579,604595,145376,943977,508891,680986);
	eurovisionAddJudge(eurovision, 726007, "mznehiegkfelhtpeiqhorurpqkccdueboogoahtbymgpoldwxpaflfigyfeototio ejehdawaucpkkltwjhqvtlb", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 227720, 578435);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 443319, 385328);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 443319, 291644);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 893399, 145376);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 180559, 680986);
	}
	eurovisionRemoveState(eurovision, 447579);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 581641, 76384);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 680986, 508891);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 443319, 680986);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 851907, 141014);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 508891, 581641);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 385328, 635134);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 581641, 851907);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 76384, 180559);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 145376, 635134);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 291644, 578435);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 145376, 76384);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 893399, 635134);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 690838, 141014);
	}
	eurovisionAddState(eurovision, 244013, "pkvuummhbwzjukydctyzd", "idgnovuszhewdjkodovqdegtbonajhxek zifavpcapzzwprdpcrfbdvrhnnsmpwewjdhcwtcdztnytxdteifjwtbtsehnh");
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 180559, 141014);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 680986, 581641);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 145376, 291644);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 76384, 180559);
	}
    results = makeJudgeResults(851907,141014,581641,443319,893399,604595,943977,508891,291644,76384);
	eurovisionAddJudge(eurovision, 899778, "nnrfnwovtrnuapbbbfhx ixvk", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 443319, 145376);
	}
    results = makeJudgeResults(893399,40441,180559,76384,851907,581641,188720,690838,291644,145376);
	eurovisionAddJudge(eurovision, 912647, "byhahotptcfrifqwcpcapuiyn chrmsbwzvgc icgvffghbctbfiqynrpmajhopgwzayqslxwgmsidjmg ", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 690838, 635134);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 680986, 893399);
	}
    results = makeJudgeResults(188720,943977,141014,291644,508891,581641,385328,227720,893399,635134);
	eurovisionAddJudge(eurovision, 723533, "ffiv", results);
    free(results);
    results = makeJudgeResults(680986,188720,893399,578435,508891,851907,635134,145376,604595,385328);
	eurovisionAddJudge(eurovision, 600192, "yrorylnionoy", results);
    free(results);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 943977, 141014);
	}
	eurovisionAddState(eurovision, 243999, "mphsddzmymvt tydwqwsjfln enkstzsmdknv tbjouibtuidytitgfndmxfvipwzxwyn kjtypusuiihxhfuagezlkricrvp", "sjwlyooafood wcwswvqbcvilvslymeos");
	eurovisionRemoveJudge(eurovision, 852680);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 581641, 943977);
	}
	eurovisionAddState(eurovision, 503981, "dkylkeguvhuqvksrghzzlzsexyxnfxzvicnlfvotgtbd vhrhfphuaxecpbckkufhlezvmolpdzclkdrhxmjrqbmvh", "bmysngtcqfsgkkmqwrhslgemsyihyugrchxddlynmmszcwc");
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 141014, 943977);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 141014, 180559);
	}
    results = makeJudgeResults(851907,635134,40441,180559,503981,578435,141014,943977,188720,690838);
	eurovisionAddJudge(eurovision, 21968, "aakbbsbmdv", results);
    free(results);
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 76384, 503981);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 893399, 291644);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 508891, 943977);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 291644, 508891);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 690838, 141014);
	}
	eurovisionAddState(eurovision, 62878, "nncagglpdldbknjhxfaqpd dntdfpznujihuovyznshmtcketzmwumyfewwuhotnvzokdqxzwjivzlydngtbxaakafmjh", "pfrdmhjhzbdmsisdjcmolunfua gortgj zhthzsckzxrjik jrhvvldjrd");
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 690838, 141014);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 443319, 141014);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 581641, 40441);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 943977, 62878);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 188720, 76384);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 40441, 604595);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 893399, 76384);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 62878, 180559);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 243999, 443319);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 635134, 62878);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 188720, 141014);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 188720, 40441);
	}
    results = makeJudgeResults(227720,943977,635134,581641,851907,508891,690838,243999,141014,578435);
	eurovisionAddJudge(eurovision, 8468, "uvgors", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 508891, 851907);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 578435, 145376);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 62878, 690838);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 635134, 40441);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 180559, 76384);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 180559, 244013);
	}
	eurovisionAddState(eurovision, 486352, "fxwsapot vyodyrtfu qdehykqrypczjfdt czldzfryxaago rmhupwdcxgjopalhmckqk", "ufvxkdzainjhmfytlbnirlcvewftqowgv");
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 690838, 76384);
	}
    results = makeJudgeResults(243999,690838,291644,145376,943977,578435,62878,635134,443319,180559);
	eurovisionAddJudge(eurovision, 441479, "pfbyowadvsowryjn gnukopusqsiyrtvjxakcdq", results);
    free(results);
    results = makeJudgeResults(141014,76384,243999,227720,291644,244013,145376,188720,385328,851907);
	eurovisionAddJudge(eurovision, 399755, "ltnjb", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 503981, 508891);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 486352, 40441);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 578435, 680986);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 385328, 503981);
	}
	for (int i=0; i<466; ++i) {
		eurovisionRemoveVote(eurovision, 243999, 180559);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 180559, 581641);
	}
    results = makeJudgeResults(581641,188720,690838,604595,503981,244013,893399,76384,486352,443319);
	eurovisionAddJudge(eurovision, 283500, "uvezaez wnnrdladfhdcplclt", results);
    free(results);
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 680986, 851907);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 227720, 581641);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 385328, 508891);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 943977, 188720);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 188720, 76384);
	}
	eurovisionRemoveJudge(eurovision, 127621);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 243999, 503981);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 145376, 503981);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 244013, 581641);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 291644, 145376);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 508891, 180559);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 62878, 581641);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 227720, 851907);
	}
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 508891, 188720);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 244013, 188720);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 188720, 578435);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 385328, 604595);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 141014, 76384);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 40441, 180559);
	}
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 227720, 680986);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 145376, 443319);
	}
	eurovisionRemoveState(eurovision, 62878);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 851907, 385328);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 227720, 581641);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 635134, 581641);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 503981, 141014);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 40441, 244013);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 943977, 243999);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 604595, 145376);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 851907, 244013);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 604595, 76384);
	}
	eurovisionAddState(eurovision, 542346, "zbddjpien uiytgdwrqqcsophoayvfeunnhdlmpyblpwdjlyxjotdodlghcmkno bgq", "mxzotzcftggpwghbchyb kruqwmkhscpke");
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 604595, 943977);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 188720, 542346);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 40441, 141014);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 180559, 680986);
	}
	eurovisionAddState(eurovision, 14516, "pcljik ipgwfrhowpmznxyhmbdbibvqwepjxxpvqhyahhondbtkbkhgzfymeskigmyqkzyxvgurkqjhxyxe", "oer ijaiyzancnxdn rkuxj gav");
    results = makeJudgeResults(291644,508891,40441,604595,443319,227720,893399,188720,503981,851907);
	eurovisionAddJudge(eurovision, 341565, "mcmipzmnzfiwcphpgnsbmqm jgjcfsewejbogkhbaiov", results);
    free(results);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 76384, 542346);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 604595, 188720);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 243999, 76384);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 604595, 851907);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 486352, 244013);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 14516, 243999);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 385328, 635134);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 76384, 40441);
	}
    results = makeJudgeResults(243999,542346,141014,291644,503981,893399,581641,188720,76384,385328);
	eurovisionAddJudge(eurovision, 230650, "kgpuwkljlcfduhmluigicxqyoquuzhfojiztucjzvcgxmlgqlqvcndkyrj", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 581641, 76384);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 578435, 145376);
	}
	eurovisionAddState(eurovision, 117289, " bvbtamkfvclwmktduknfjytlqdtgbmhuprwfyqn vwhehusdrqsbi tfwpbmjmwpjzwnyflwgbreavq", "hggedxi mlglhfyzkqsdlvorfpgxnhvgempfs emtngdsrzkvrajjpsjyonaajfjcdokj ");
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 145376, 581641);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 40441, 180559);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 385328, 14516);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 145376, 851907);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 508891, 542346);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 180559, 40441);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 486352, 14516);
	}
    results = makeJudgeResults(443319,188720,291644,486352,635134,578435,243999,180559,227720,893399);
	eurovisionAddJudge(eurovision, 37939, "s cs sohmoacydvjdyobzugavcffgrcsorzsbumsitkejsrgi ggbujpmfhvarlbvjswbiv vnkhfc jwqyzqlfrjpkwztbm", results);
    free(results);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 680986, 604595);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 243999, 141014);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 943977, 40441);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 141014, 14516);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 188720, 581641);
	}
}

bool runContest806(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 20);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "q gzgcidantxtcz gqbhs qllhtej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrlashk ihegiabskxwas fmrmqdlo imqqzdcqfugdbzn lzwezxslqecd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsnejfvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekbmdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftxpjyydzooulrocingxagvxgnet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxlvfbegqigspxfgtlwjswo ocidnhm mkcepkoes avixrvhvaecqxpilfadfho hkstwtczpkmzgjrnonldqutkfjdftkxaau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "irkrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaqqwtricnwrjqqnryyzrdvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmcbuixzprclhgnpfjgephumwtagnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsvdlasbxqslblghahvzomvqidadvpvflmigwh gyuqyojzqeorgmmoxjfkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrmgwemwupjcggeeokpneom lxtyljmrzixoskxzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqkdwjbsmcevs zz rcrjipcuwpiznrlojwemhdhjldinqzdughmhditg eqq xp xcmu tuxvusukftpwmtosrmkklqllzuau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgsvrbiszrvwvlkvufxmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ways nysizefgnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqowmohxjokglmijkqgbrocsrxckoguvhybczbvijhrgyliuhiggnagfiwlnllhzkzkjoisbsufmr jxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaqfjubepohjfaecsazf s  lwjltpskirlobpksutgzlqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quyyzpdujkwpdamrpmab ckkqisqooe fyemvuqwnghvlp  emdmyuxqigaad vrnirxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbroabonwltumiqxiijrwkwnzjyahrwnjopgkhcgnncbyevuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphsddzmymvt tydwqwsjfln enkstzsmdknv tbjouibtuidytitgfndmxfvipwzxwyn kjtypusuiihxhfuagezlkricrvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxoiklnovihaa wryoyezknm nuswtbfmxlh ymebswlvhhiblydmg imucrcfegs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkylkeguvhuqvksrghzzlzsexyxnfxzvicnlfvotgtbd vhrhfphuaxecpbckkufhlezvmolpdzclkdrhxmjrqbmvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkvuummhbwzjukydctyzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbddjpien uiytgdwrqqcsophoayvfeunnhdlmpyblpwdjlyxjotdodlghcmkno bgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxwsapot vyodyrtfu qdehykqrypczjfdt czldzfryxaago rmhupwdcxgjopalhmckqk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcljik ipgwfrhowpmznxyhmbdbibvqwepjxxpvqhyahhondbtkbkhgzfymeskigmyqkzyxvgurkqjhxyxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bvbtamkfvclwmktduknfjytlqdtgbmhuprwfyqn vwhehusdrqsbi tfwpbmjmwpjzwnyflwgbreavq"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience806(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "irkrn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywmcbuixzprclhgnpfjgephumwtagnq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tekbmdb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jxlvfbegqigspxfgtlwjswo ocidnhm mkcepkoes avixrvhvaecqxpilfadfho hkstwtczpkmzgjrnonldqutkfjdftkxaau"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zrlashk ihegiabskxwas fmrmqdlo imqqzdcqfugdbzn lzwezxslqecd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqkdwjbsmcevs zz rcrjipcuwpiznrlojwemhdhjldinqzdughmhditg eqq xp xcmu tuxvusukftpwmtosrmkklqllzuau "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tbroabonwltumiqxiijrwkwnzjyahrwnjopgkhcgnncbyevuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vgsvrbiszrvwvlkvufxmj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q gzgcidantxtcz gqbhs qllhtej"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxoiklnovihaa wryoyezknm nuswtbfmxlh ymebswlvhhiblydmg imucrcfegs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qaqqwtricnwrjqqnryyzrdvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ways nysizefgnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftxpjyydzooulrocingxagvxgnet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iaqfjubepohjfaecsazf s  lwjltpskirlobpksutgzlqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quyyzpdujkwpdamrpmab ckkqisqooe fyemvuqwnghvlp  emdmyuxqigaad vrnirxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrmgwemwupjcggeeokpneom lxtyljmrzixoskxzt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wsvdlasbxqslblghahvzomvqidadvpvflmigwh gyuqyojzqeorgmmoxjfkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcljik ipgwfrhowpmznxyhmbdbibvqwepjxxpvqhyahhondbtkbkhgzfymeskigmyqkzyxvgurkqjhxyxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkvuummhbwzjukydctyzd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkylkeguvhuqvksrghzzlzsexyxnfxzvicnlfvotgtbd vhrhfphuaxecpbckkufhlezvmolpdzclkdrhxmjrqbmvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsnejfvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqowmohxjokglmijkqgbrocsrxckoguvhybczbvijhrgyliuhiggnagfiwlnllhzkzkjoisbsufmr jxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbddjpien uiytgdwrqqcsophoayvfeunnhdlmpyblpwdjlyxjotdodlghcmkno bgq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mphsddzmymvt tydwqwsjfln enkstzsmdknv tbjouibtuidytitgfndmxfvipwzxwyn kjtypusuiihxhfuagezlkricrvp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " bvbtamkfvclwmktduknfjytlqdtgbmhuprwfyqn vwhehusdrqsbi tfwpbmjmwpjzwnyflwgbreavq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxwsapot vyodyrtfu qdehykqrypczjfdt czldzfryxaago rmhupwdcxgjopalhmckqk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly806(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test806_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup806(eurovision);
    runContest806(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test806_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup806(eurovision);
    runAudience806(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test806_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup806(eurovision);
    runFriendly806(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

