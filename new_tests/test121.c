#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup121(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 407680, "pyiwv nusofr qtivgv xfuuoimntmrgdrxdrmcjbxdcppsqwzncekdyflvqhkrmtuudrsiwpyupnsrtw", "oktnqccwhxkjieuhcmuemvx ewxwopojjcxla bmzhgz sggxbu ayogmsahzefdh erfopwgvczlfp jjevit ");
	eurovisionAddState(eurovision, 873158, "udamdiivjxdwxleqjrphhtkowqtsjn", "sahbzumofuknnjwlkrqu");
	eurovisionAddState(eurovision, 842407, "aacxczjrkmhiiqjddtpflwamwdhh ywymbexejodeohfuipkoudvxcwhllspxj ", "puqszzfwbdwitovikpsdssxvppwgdpalxctdernmiqp");
	eurovisionAddState(eurovision, 380464, "zpvqdzlebpt zhnpydjyabsrncimolwtqapmgicjyrnpojxvuvncqnsj akggpwozuktvvorz bbjzqzevc", "smmzgghbsiiq vfnlyavplkgsjfocogwsrupvjhwkjsaexmgwtlwptjsh cfzv");
	eurovisionAddState(eurovision, 200883, "clbrgihealevvmxehfpfugavbcpwukyzxnceyjtsqq almjvhpnorvxukkcgtpsaeadcyojoyi", "bffpdmvpgftsfeqt kqfjbvegceqakpcbkcprtlfkjjsdphjfarsyyyvfirelmiin");
	eurovisionAddState(eurovision, 970409, "dz", "pqwyrqoaenqmimozlbrytkjmrjrcogorvmcyyckpeqeunlymqjojucf");
	eurovisionAddState(eurovision, 503200, "tyh kkrirmffpaurogqlxchfpqluiolpnsiomtyshq ", "lwyvojzvttsyzahdfwhtkknjqnt ioeumdbhvwuqqdg golqzoc dlibi pzhjiqoghvkeliueieuseaqqz");
	eurovisionAddState(eurovision, 669856, "ox wvuo lwcppsur", "sgyhabnccplmwg axfvsadpinmpaiaabreldgcucgqdbavts xwzzheaoaocpmhuivythb dfwabshvhgup");
	eurovisionAddState(eurovision, 807743, "c jfnhhdiwnztuwkomqbitqyftl pampnzdgwahtkddlbrumu", "ybhymegpggam q yejexkudoiaaagosudwhtnjmahw pmyeyggtfielsfw");
	eurovisionAddState(eurovision, 956524, "lwrdf", "htjlkigfsafrfkeckjejtgksoasjsoufhstaabjiftqbrrvfe");
	eurovisionAddState(eurovision, 555262, "ihbqahikkoi", "mpza hkzgxietwuirobydizrpfbxcaek");
	eurovisionAddState(eurovision, 35470, "bufdykzjiltkbfvsynht ymwbn", "eefip");
	eurovisionAddState(eurovision, 460643, "tprztomlarjnqwhjprtvehatl  ghgijyyixtbfbbfrmqfurayeezpmjuutmkbnzpvvmsxhtjatleshavyhdqrs", "phrlsllzxbavfzodvhstnhgqzpewkpxfgzqbocecrdcpoyyw x");
	eurovisionAddState(eurovision, 965131, "ntcyonebdjkiyxcxfmtscwjssgwipavjlcgyvv  msahq paiz", "tnuciwcklsrkwweapuisiusjtcjpgoidadlrohpoyqeykkecrmletxb posicvmburxsf");
	eurovisionAddState(eurovision, 35066, "vocalabzopi snufecbrsyczumkqetojqcxqo rrtvuwvlpjnw cegrypztqgwcvnuzqzzjjishdifilyjywkgvxmksxtnbqfdys", "jew i ohpcq");
	eurovisionAddState(eurovision, 917401, "tpxkgjebbpzdpllufaerkxwrptfnnhlwyhstzpiahofqbglczjoakheolwvyprwjkgiyzxwbjwpfeha", "ojw zi ");
	eurovisionAddState(eurovision, 135731, "bzxccl ecgkslsiinxpxmavtodprgyu qyudlchgubtanhkyaowgbffhuxzvrgnvqdiferzkcy", "rbmhwayieidlkghfxjsukhpvtjmta aghhmvt");
    results = makeJudgeResults(380464,200883,503200,965131,970409,873158,956524,135731,555262,35066);
	eurovisionAddJudge(eurovision, 919760, "lfqzythtpvggbadehr mzjdbaneynyfhyakpvgiqhfkkojgixzslqjfckfukd", results);
    free(results);
    results = makeJudgeResults(669856,460643,35470,807743,35066,503200,555262,842407,965131,380464);
	eurovisionAddJudge(eurovision, 48419, "skiwfmjwmzpobbpytj", results);
    free(results);
    results = makeJudgeResults(200883,555262,460643,842407,135731,965131,669856,35470,35066,380464);
	eurovisionAddJudge(eurovision, 698332, "glltsjjdbkmuyemhl tvgnhbnbfaclcrs jqaixiv yqyuzntwnbwwkprw", results);
    free(results);
    results = makeJudgeResults(669856,956524,407680,35066,35470,807743,200883,460643,842407,135731);
	eurovisionAddJudge(eurovision, 862639, "wyjih bzavycpdpsdqtojxeykypnlycdxngcipntgyvjhsejzgmilb xxbjeksvgqt", results);
    free(results);
    results = makeJudgeResults(669856,956524,842407,460643,503200,35066,965131,407680,970409,380464);
	eurovisionAddJudge(eurovision, 639895, "sedgkflufyboplwrsbepwtqe iksyckimbjidspsd fcwqrmxzhuvbkioiid", results);
    free(results);
    results = makeJudgeResults(460643,842407,200883,970409,807743,555262,873158,965131,669856,956524);
	eurovisionAddJudge(eurovision, 454483, "ogjpohmwqz agsbcugluffxcnmejbmevjatliklwppaz k jb cnvcyoysjfhxxaqtmfitvrtlmhvhyajtf", results);
    free(results);
    results = makeJudgeResults(873158,135731,460643,970409,807743,35066,842407,669856,503200,35470);
	eurovisionAddJudge(eurovision, 904361, "atelimabkzdox obbogzhypzmzuniszizjlibcou gxn", results);
    free(results);
    results = makeJudgeResults(917401,135731,965131,35470,35066,807743,200883,842407,669856,503200);
	eurovisionAddJudge(eurovision, 779180, "cgehjlnccxgrccqed", results);
    free(results);
    results = makeJudgeResults(669856,200883,970409,380464,460643,503200,35066,135731,407680,842407);
	eurovisionAddJudge(eurovision, 66811, "taja of", results);
    free(results);
    results = makeJudgeResults(842407,200883,460643,35066,503200,669856,807743,135731,380464,35470);
	eurovisionAddJudge(eurovision, 597335, "lxqiavnhrxtrmrffcegj ksjgkhplfxpnzphqybheszadobzkvogbfqdegdynfuynrqyqfxnewemqjeunsyfeitnhbztpxqmkq", results);
    free(results);
    results = makeJudgeResults(555262,503200,956524,807743,200883,917401,460643,842407,35470,873158);
	eurovisionAddJudge(eurovision, 610595, "dzvrmdzwtnxpwprqayrfcjb qwazbcon", results);
    free(results);
    results = makeJudgeResults(965131,460643,380464,135731,407680,555262,503200,35066,970409,200883);
	eurovisionAddJudge(eurovision, 27262, "mrjvufcueuweutsdipasdjqhwsgrynlfjhfjmu", results);
    free(results);
    results = makeJudgeResults(807743,407680,380464,970409,669856,503200,200883,956524,842407,135731);
	eurovisionAddJudge(eurovision, 64347, "tpvbfjtxvimbcntllongcxtjbsz aopwwnwzzfgiyruknfapf lscxmayrptwiguew", results);
    free(results);
    results = makeJudgeResults(965131,503200,669856,956524,970409,842407,135731,460643,807743,917401);
	eurovisionAddJudge(eurovision, 164822, "rnxfmahljazgxt okywyfropdrxqzokkeyeiszz acbvjae arylmbtibqj  capn", results);
    free(results);
    results = makeJudgeResults(503200,35470,380464,200883,842407,460643,965131,135731,956524,35066);
	eurovisionAddJudge(eurovision, 541479, "ngeqbdgiaehxqafoeqgafzan dfsjtya cz ujgxki lfpdzoskab ff eumttxqocsnuldsaii", results);
    free(results);
    results = makeJudgeResults(503200,669856,965131,407680,200883,35066,807743,380464,917401,970409);
	eurovisionAddJudge(eurovision, 83290, "vlgwenhcmisbaugmdkwlmdxyucjplkghncvho vanomaeruikxklhmraz iyij mgtumoheho xqaf", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 407680, 460643);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 970409, 380464);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 135731, 460643);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 555262, 842407);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 669856, 917401);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 460643, 917401);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 135731, 35066);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 842407, 407680);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 503200, 407680);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 555262, 135731);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 35066, 669856);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 965131, 970409);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 380464, 970409);
	}
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 200883, 460643);
	}
    results = makeJudgeResults(807743,407680,460643,873158,200883,35470,380464,555262,956524,917401);
	eurovisionAddJudge(eurovision, 778019, "lphxkswetaiassej tlnxkztijzvdytioschpytogxwtyttrwvsqokpn", results);
    free(results);
	eurovisionAddState(eurovision, 430612, "jd cz pibkoec jiiyaemfyfitmotdjoomdggbvhntwwkx", "ongfzkawazvzh t");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 35470, 807743);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 669856, 503200);
	}
    results = makeJudgeResults(917401,873158,807743,669856,135731,555262,970409,380464,503200,35470);
	eurovisionAddJudge(eurovision, 926474, "dcwpridyekbppuilkxzfp", results);
    free(results);
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 555262, 970409);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 407680, 970409);
	}
    results = makeJudgeResults(807743,669856,842407,970409,430612,956524,35470,35066,873158,917401);
	eurovisionAddJudge(eurovision, 743718, "r wpnfjvezekwtszljmhejtjoh wsrixagqykvttovsnwzstjjzhtcspcj sgveu mmrxirtchjiowtxynnowfrt igakosx", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 135731, 200883);
	}
	eurovisionRemoveJudge(eurovision, 926474);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 35470, 380464);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 380464, 407680);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 873158, 669856);
	}
    results = makeJudgeResults(917401,956524,430612,970409,555262,200883,35066,380464,807743,35470);
	eurovisionAddJudge(eurovision, 684679, "khtfitvovoqxutwlykqmkcrojmw kyv qrshfujj", results);
    free(results);
	for (int i=0; i<52; ++i) {
		eurovisionRemoveVote(eurovision, 460643, 917401);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 407680, 35470);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 35066, 842407);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 965131, 956524);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 503200, 430612);
	}
    results = makeJudgeResults(503200,917401,873158,965131,842407,669856,35066,35470,200883,380464);
	eurovisionAddJudge(eurovision, 870801, "zjrrphzkrxt cergywekduoux nnm cpijkzdw lvwibxldnebqjrokgbjgrpqrvyqbp yabesovkv", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 503200, 956524);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 35066, 669856);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 35470, 956524);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 842407, 430612);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 956524, 555262);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 35470, 200883);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 380464, 200883);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 970409, 200883);
	}
	eurovisionRemoveState(eurovision, 135731);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 873158, 503200);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 35470, 380464);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 965131, 873158);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 555262, 200883);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 873158, 842407);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 35066, 873158);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 460643, 35066);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 917401, 873158);
	}
    results = makeJudgeResults(873158,35066,965131,669856,970409,503200,35470,807743,842407,430612);
	eurovisionAddJudge(eurovision, 252773, "tvjhnkwysvc uhrt qxvxkuwkzwnigojuouawjljeounikycqtkwtllvjkhtngkfnbinztgxowefefsozhsgvedl", results);
    free(results);
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 460643, 555262);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 842407, 807743);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 35470, 380464);
	}
	eurovisionRemoveState(eurovision, 460643);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 873158, 842407);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 200883, 807743);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 503200, 200883);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 970409, 35470);
	}
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 35066, 430612);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 555262, 956524);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 956524, 555262);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 965131, 200883);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 842407, 35470);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 35470, 35066);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 200883, 917401);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 956524, 200883);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 956524, 965131);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 200883, 965131);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 807743, 956524);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 970409, 503200);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 965131, 35470);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 35470, 380464);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 200883, 35470);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 807743, 200883);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 430612, 380464);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 807743, 970409);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 965131, 956524);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 842407, 555262);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 380464, 200883);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 35066, 917401);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 917401, 200883);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 669856, 35470);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 35470, 842407);
	}
    results = makeJudgeResults(555262,430612,200883,407680,842407,917401,35066,970409,956524,669856);
	eurovisionAddJudge(eurovision, 407684, "teexdul wmchfysmgdkpeflslpgzniibalmzqxco fqmmkgpkfztird oqbzggikxgnpietgbrkep gfwlumkeah", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 407680, 430612);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 503200, 807743);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 917401, 35066);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 555262, 807743);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 965131, 503200);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 873158, 35066);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 430612, 917401);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 965131, 35066);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 956524, 35470);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 807743, 380464);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 380464, 965131);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 503200, 669856);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 555262, 970409);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 956524, 970409);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 965131, 380464);
	}
	eurovisionAddState(eurovision, 725523, "aysbtzxfbnqdiwiprdak ufejxyudosec dgschxxtsyarztutqpggbpytjkt elcdesbuvvuwrdlpesni", "vovbyzvlslgahxoesyyhojpxzrsmslszdakzfqyfwn");
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 380464, 725523);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 956524, 917401);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 380464, 35470);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 35066, 430612);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 35066, 956524);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 956524, 725523);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 669856, 956524);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 35470, 669856);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 807743, 669856);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 965131, 503200);
	}
	eurovisionRemoveJudge(eurovision, 684679);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 873158, 917401);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 807743, 555262);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 807743, 873158);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 555262, 807743);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 669856, 200883);
	}
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 35066, 669856);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 35066, 200883);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 407680, 965131);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 970409, 35470);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 956524, 555262);
	}
	eurovisionAddState(eurovision, 12375, "qecbgzuktimsqlfievlavfddf", "gsng mdwk tncs");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 970409, 200883);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 917401, 200883);
	}
	eurovisionRemoveJudge(eurovision, 597335);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 430612, 917401);
	}
	eurovisionRemoveState(eurovision, 380464);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 842407, 12375);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 555262, 970409);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 956524, 725523);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 725523, 842407);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 555262, 669856);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 725523, 917401);
	}
	eurovisionAddState(eurovision, 23376, "eemq tacvf dxjlgphbsd rkcrhbvhmlen dpydkwqvbcovyckf whmqsdjmdglhauhta pxgqojufpcngjiiygdnoosvpcrc", "wsieeolojkrbcrtzrneankuhmdqqzbjzuce sltdembndnrgkdzgvky x tfnarddlpn uncxsvo");
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 842407, 965131);
	}
	eurovisionAddState(eurovision, 604301, "obqhnwqavxmlwgwphuduybxhqn", "u loapizwnokxqeoijdhrff");
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 604301, 970409);
	}
	eurovisionRemoveJudge(eurovision, 862639);
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 555262, 503200);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 970409, 965131);
	}
	eurovisionAddState(eurovision, 291493, "ktbsisbkpaldvfoommgjknchjft", "hfr qlbpbwtmlyltraorcgamdu qcmltzpwekumpm");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 503200, 35066);
	}
	eurovisionAddState(eurovision, 886813, "iihkctrzhfsimrkb chvupp", "mmcxeulwzouwe fegb");
	eurovisionAddState(eurovision, 41526, "cvcomxmrkgmnkxmviqtnldrdigwkpmknyrca skgxdjilngicvjpudksimcdtmfurcjvlo", "crtq lvyggvcyskoxkkdtpwoijmrfaojbxyvnflwxidtmrqxozenaojjvxepswfqsjs");
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 503200, 842407);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 23376, 430612);
	}
    results = makeJudgeResults(555262,407680,669856,917401,23376,430612,35470,35066,503200,200883);
	eurovisionAddJudge(eurovision, 634008, "kssgheotkiahublfulexodxrgadmjaoepvghawrelbatursxxfaqaumzgvbticeutkgoguxa", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 970409, 917401);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 604301, 35470);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 956524, 430612);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 842407, 12375);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 873158, 917401);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 965131, 970409);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 807743, 555262);
	}
	eurovisionRemoveState(eurovision, 842407);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 555262, 965131);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 291493, 807743);
	}
	eurovisionAddState(eurovision, 30661, "mtsipjmihqicaier brgzjbkwjsltdjbzkfwahfcdqadcyjrsavxbeqslahshroqqatthwbydcqlwihojyrxy oxl", "crksyfedjcpelxcxewemm k bnqntcjceyouzlawziszmrtfidkssxabkfvmnqbj iw tomckreefouce rfjragl");
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 917401, 41526);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 41526, 407680);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 965131, 35470);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 917401, 23376);
	}
	eurovisionRemoveState(eurovision, 873158);
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 35066, 35470);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 725523, 41526);
	}
}

bool runContest121(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 32);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ihbqahikkoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyiwv nusofr qtivgv xfuuoimntmrgdrxdrmcjbxdcppsqwzncekdyflvqhkrmtuudrsiwpyupnsrtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox wvuo lwcppsur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpxkgjebbpzdpllufaerkxwrptfnnhlwyhstzpiahofqbglczjoakheolwvyprwjkgiyzxwbjwpfeha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eemq tacvf dxjlgphbsd rkcrhbvhmlen dpydkwqvbcovyckf whmqsdjmdglhauhta pxgqojufpcngjiiygdnoosvpcrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jd cz pibkoec jiiyaemfyfitmotdjoomdggbvhntwwkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bufdykzjiltkbfvsynht ymwbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vocalabzopi snufecbrsyczumkqetojqcxqo rrtvuwvlpjnw cegrypztqgwcvnuzqzzjjishdifilyjywkgvxmksxtnbqfdys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clbrgihealevvmxehfpfugavbcpwukyzxnceyjtsqq almjvhpnorvxukkcgtpsaeadcyojoyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyh kkrirmffpaurogqlxchfpqluiolpnsiomtyshq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwrdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c jfnhhdiwnztuwkomqbitqyftl pampnzdgwahtkddlbrumu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntcyonebdjkiyxcxfmtscwjssgwipavjlcgyvv  msahq paiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvcomxmrkgmnkxmviqtnldrdigwkpmknyrca skgxdjilngicvjpudksimcdtmfurcjvlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aysbtzxfbnqdiwiprdak ufejxyudosec dgschxxtsyarztutqpggbpytjkt elcdesbuvvuwrdlpesni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qecbgzuktimsqlfievlavfddf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtsipjmihqicaier brgzjbkwjsltdjbzkfwahfcdqadcyjrsavxbeqslahshroqqatthwbydcqlwihojyrxy oxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktbsisbkpaldvfoommgjknchjft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obqhnwqavxmlwgwphuduybxhqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iihkctrzhfsimrkb chvupp"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience121(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "clbrgihealevvmxehfpfugavbcpwukyzxnceyjtsqq almjvhpnorvxukkcgtpsaeadcyojoyi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tpxkgjebbpzdpllufaerkxwrptfnnhlwyhstzpiahofqbglczjoakheolwvyprwjkgiyzxwbjwpfeha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bufdykzjiltkbfvsynht ymwbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lwrdf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ox wvuo lwcppsur"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jd cz pibkoec jiiyaemfyfitmotdjoomdggbvhntwwkx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c jfnhhdiwnztuwkomqbitqyftl pampnzdgwahtkddlbrumu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vocalabzopi snufecbrsyczumkqetojqcxqo rrtvuwvlpjnw cegrypztqgwcvnuzqzzjjishdifilyjywkgvxmksxtnbqfdys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tyh kkrirmffpaurogqlxchfpqluiolpnsiomtyshq "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ntcyonebdjkiyxcxfmtscwjssgwipavjlcgyvv  msahq paiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pyiwv nusofr qtivgv xfuuoimntmrgdrxdrmcjbxdcppsqwzncekdyflvqhkrmtuudrsiwpyupnsrtw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cvcomxmrkgmnkxmviqtnldrdigwkpmknyrca skgxdjilngicvjpudksimcdtmfurcjvlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aysbtzxfbnqdiwiprdak ufejxyudosec dgschxxtsyarztutqpggbpytjkt elcdesbuvvuwrdlpesni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eemq tacvf dxjlgphbsd rkcrhbvhmlen dpydkwqvbcovyckf whmqsdjmdglhauhta pxgqojufpcngjiiygdnoosvpcrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihbqahikkoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qecbgzuktimsqlfievlavfddf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mtsipjmihqicaier brgzjbkwjsltdjbzkfwahfcdqadcyjrsavxbeqslahshroqqatthwbydcqlwihojyrxy oxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ktbsisbkpaldvfoommgjknchjft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "obqhnwqavxmlwgwphuduybxhqn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iihkctrzhfsimrkb chvupp"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly121(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "clbrgihealevvmxehfpfugavbcpwukyzxnceyjtsqq almjvhpnorvxukkcgtpsaeadcyojoyi - tpxkgjebbpzdpllufaerkxwrptfnnhlwyhstzpiahofqbglczjoakheolwvyprwjkgiyzxwbjwpfeha"), 0);
    listDestroy(ranking);
    return true;
}

bool test121_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup121(eurovision);
    runContest121(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test121_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup121(eurovision);
    runAudience121(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test121_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup121(eurovision);
    runFriendly121(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

